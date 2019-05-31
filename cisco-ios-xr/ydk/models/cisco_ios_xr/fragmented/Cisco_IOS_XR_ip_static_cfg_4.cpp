
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_static_cfg {

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfMulticast()
    :
    topologies(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies>())
    , vrf_prefixes(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes>())
    , default_topology(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology>())
{
    topologies->parent = this;
    vrf_prefixes->parent = this;
    default_topology->parent = this;

    yang_name = "vrf-multicast"; yang_parent_name = "vrfipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::~VrfMulticast()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::has_data() const
{
    if (is_presence_container) return true;
    return (topologies !=  nullptr && topologies->has_data())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_data())
	|| (default_topology !=  nullptr && default_topology->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_operation())
	|| (default_topology !=  nullptr && default_topology->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "vrf-prefixes")
    {
        if(vrf_prefixes == nullptr)
        {
            vrf_prefixes = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes>();
        }
        return vrf_prefixes;
    }

    if(child_yang_name == "default-topology")
    {
        if(default_topology == nullptr)
        {
            default_topology = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology>();
        }
        return default_topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topologies != nullptr)
    {
        _children["topologies"] = topologies;
    }

    if(vrf_prefixes != nullptr)
    {
        _children["vrf-prefixes"] = vrf_prefixes;
    }

    if(default_topology != nullptr)
    {
        _children["default-topology"] = default_topology;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies" || name == "vrf-prefixes" || name == "default-topology")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topologies()
    :
    topology(this, {"topology_name"})
{

    yang_name = "topologies"; yang_parent_name = "vrf-multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::~Topologies()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::Topology()
    :
    topology_name{YType::str, "topology-name"}
        ,
    vrf_prefix_topologies(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::~Topology()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::has_data() const
{
    if (is_presence_container) return true;
    return topology_name.is_set
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/topologies/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(topology_name, "topology-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies == nullptr)
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies>();
        }
        return vrf_prefix_topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_prefix_topologies != nullptr)
    {
        _children["vrf-prefix-topologies"] = vrf_prefix_topologies;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-prefix-topologies" || name == "topology-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopologies()
    :
    vrf_prefix_topology(this, {"prefix", "prefix_length"})
{

    yang_name = "vrf-prefix-topologies"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_prefix_topology.len(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.len(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-prefix-topology")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology>();
        ent_->parent = this;
        vrf_prefix_topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_prefix_topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-prefix-topology")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
        ,
    vrf_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
    , vrf_recurse_routes(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
    , vrf_seg_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_route->parent = this;
    vrf_recurse_routes->parent = this;
    vrf_seg_route->parent = this;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-route")
    {
        if(vrf_route == nullptr)
        {
            vrf_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
        }
        return vrf_route;
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes == nullptr)
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
        }
        return vrf_recurse_routes;
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route == nullptr)
        {
            vrf_seg_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
        }
        return vrf_seg_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_route != nullptr)
    {
        _children["vrf-route"] = vrf_route;
    }

    if(vrf_recurse_routes != nullptr)
    {
        _children["vrf-recurse-routes"] = vrf_recurse_routes;
    }

    if(vrf_seg_route != nullptr)
    {
        _children["vrf-seg-route"] = vrf_seg_route;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-route" || name == "vrf-recurse-routes" || name == "vrf-seg-route" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table == nullptr)
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
        }
        return vrf_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_next_hop_table != nullptr)
    {
        _children["vrf-next-hop-table"] = vrf_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
    :
    vrf_recurse_route(this, {"vrf_name"})
{

    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recurse-route")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        ent_->parent = this;
        vrf_recurse_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_recurse_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recurse-route")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table == nullptr)
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
        }
        return vrf_recursive_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_recursive_next_hop_table != nullptr)
    {
        _children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recursive-next-hop-table" || name == "vrf-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    if (is_presence_container) return true;
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(yfilter)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table == nullptr)
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>();
        }
        return segment_route_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_route_next_hop_table != nullptr)
    {
        _children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-route-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefixes()
    :
    vrf_prefix(this, {"prefix", "prefix_length"})
{

    yang_name = "vrf-prefixes"; yang_parent_name = "vrf-multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::~VrfPrefixes()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_prefix.len(); index++)
    {
        if(vrf_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix.len(); index++)
    {
        if(vrf_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-prefix")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix>();
        ent_->parent = this;
        vrf_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-prefix")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
        ,
    vrf_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute>())
    , vrf_recurse_routes(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>())
    , vrf_seg_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute>())
{
    vrf_route->parent = this;
    vrf_recurse_routes->parent = this;
    vrf_seg_route->parent = this;

    yang_name = "vrf-prefix"; yang_parent_name = "vrf-prefixes"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::~VrfPrefix()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/vrf-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-route")
    {
        if(vrf_route == nullptr)
        {
            vrf_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute>();
        }
        return vrf_route;
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes == nullptr)
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>();
        }
        return vrf_recurse_routes;
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route == nullptr)
        {
            vrf_seg_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute>();
        }
        return vrf_seg_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_route != nullptr)
    {
        _children["vrf-route"] = vrf_route;
    }

    if(vrf_recurse_routes != nullptr)
    {
        _children["vrf-recurse-routes"] = vrf_recurse_routes;
    }

    if(vrf_seg_route != nullptr)
    {
        _children["vrf-seg-route"] = vrf_seg_route;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-route" || name == "vrf-recurse-routes" || name == "vrf-seg-route" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table == nullptr)
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>();
        }
        return vrf_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_next_hop_table != nullptr)
    {
        _children["vrf-next-hop-table"] = vrf_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoutes()
    :
    vrf_recurse_route(this, {"vrf_name"})
{

    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recurse-route")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute>();
        ent_->parent = this;
        vrf_recurse_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_recurse_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recurse-route")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table == nullptr)
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
        }
        return vrf_recursive_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_recursive_next_hop_table != nullptr)
    {
        _children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recursive-next-hop-table" || name == "vrf-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_data() const
{
    if (is_presence_container) return true;
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_operation() const
{
    return is_set(yfilter)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table == nullptr)
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>();
        }
        return segment_route_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_route_next_hop_table != nullptr)
    {
        _children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-route-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::DefaultTopology()
    :
    vrf_prefix_topologies(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;

    yang_name = "default-topology"; yang_parent_name = "vrf-multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::~DefaultTopology()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies == nullptr)
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies>();
        }
        return vrf_prefix_topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_prefix_topologies != nullptr)
    {
        _children["vrf-prefix-topologies"] = vrf_prefix_topologies;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-prefix-topologies")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopologies()
    :
    vrf_prefix_topology(this, {"prefix", "prefix_length"})
{

    yang_name = "vrf-prefix-topologies"; yang_parent_name = "default-topology"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_prefix_topology.len(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.len(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/default-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-prefix-topology")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology>();
        ent_->parent = this;
        vrf_prefix_topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_prefix_topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-prefix-topology")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
        ,
    vrf_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
    , vrf_recurse_routes(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
    , vrf_seg_route(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_route->parent = this;
    vrf_recurse_routes->parent = this;
    vrf_seg_route->parent = this;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/default-vrf/address-family/vrfipv6/vrf-multicast/default-topology/vrf-prefix-topologies/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-route")
    {
        if(vrf_route == nullptr)
        {
            vrf_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
        }
        return vrf_route;
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes == nullptr)
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
        }
        return vrf_recurse_routes;
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route == nullptr)
        {
            vrf_seg_route = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
        }
        return vrf_seg_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_route != nullptr)
    {
        _children["vrf-route"] = vrf_route;
    }

    if(vrf_recurse_routes != nullptr)
    {
        _children["vrf-recurse-routes"] = vrf_recurse_routes;
    }

    if(vrf_seg_route != nullptr)
    {
        _children["vrf-seg-route"] = vrf_seg_route;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-route" || name == "vrf-recurse-routes" || name == "vrf-seg-route" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table == nullptr)
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
        }
        return vrf_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_next_hop_table != nullptr)
    {
        _children["vrf-next-hop-table"] = vrf_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
    :
    vrf_recurse_route(this, {"vrf_name"})
{

    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.len(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recurse-route")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        ent_->parent = this;
        vrf_recurse_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_recurse_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recurse-route")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table == nullptr)
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
        }
        return vrf_recursive_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_recursive_next_hop_table != nullptr)
    {
        _children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-recursive-next-hop-table" || name == "vrf-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    if (is_presence_container) return true;
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(yfilter)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table == nullptr)
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>();
        }
        return segment_route_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_route_next_hop_table != nullptr)
    {
        _children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-route-next-hop-table")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
    :
    vrf_next_hop_interface_name(this, {"interface_name"})
    , vrf_next_hop_interface_name_next_hop_address(this, {"interface_name", "next_hop_address"})
    , vrf_next_hop_next_hop_address(this, {"next_hop_address"})
    , vrf_next_hop_next_hop_address_explicit_path_name(this, {"next_hop_address", "explicit_path_name"})
    , vrf_next_hop_explicit_path_name_sr_policy_name(this, {"explicit_path_name", "sr_policy_name"})
    , vrf_next_hop_sr_policy_name(this, {"sr_policy_name"})
{

    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_interface_name.len(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.len(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name_sr_policy_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_sr_policy_name.len(); index++)
    {
        if(vrf_next_hop_sr_policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        ent_->parent = this;
        vrf_next_hop_interface_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        ent_->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_explicit_path_name_sr_policy_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf-next-hop-sr-policy-name")
    {
        auto ent_ = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName>();
        ent_->parent = this;
        vrf_next_hop_sr_policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_explicit_path_name_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf_next_hop_sr_policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name-sr-policy-name" || name == "vrf-next-hop-sr-policy-name")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::VrfNextHopExplicitPathNameSrPolicyName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-explicit-path-name-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::~VrfNextHopExplicitPathNameSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
	|| sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name-sr-policy-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathNameSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::VrfNextHopSrPolicyName()
    :
    sr_policy_name{YType::str, "sr-policy-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"},
    permanent{YType::boolean, "permanent"},
    vrf_lable{YType::uint32, "vrf-lable"},
    tunnel_id{YType::uint32, "tunnel-id"},
    object_name{YType::str, "object-name"},
    description{YType::str, "description"},
    load_metric{YType::uint32, "load-metric"},
    index_{YType::str, "index"},
    multihop{YType::boolean, "multihop"},
    bfd_source_address{YType::str, "bfd-source-address"}
{

    yang_name = "vrf-next-hop-sr-policy-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::~VrfNextHopSrPolicyName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_data() const
{
    if (is_presence_container) return true;
    return sr_policy_name.is_set
	|| bfd_fast_detect.is_set
	|| minimum_interval.is_set
	|| detect_multiplier.is_set
	|| metric.is_set
	|| tag.is_set
	|| permanent.is_set
	|| vrf_lable.is_set
	|| tunnel_id.is_set
	|| object_name.is_set
	|| description.is_set
	|| load_metric.is_set
	|| index_.is_set
	|| multihop.is_set
	|| bfd_source_address.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_policy_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(vrf_lable.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(multihop.yfilter)
	|| ydk::is_set(bfd_source_address.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-sr-policy-name";
    ADD_KEY_TOKEN(sr_policy_name, "sr-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_policy_name.is_set || is_set(sr_policy_name.yfilter)) leaf_name_data.push_back(sr_policy_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (multihop.is_set || is_set(multihop.yfilter)) leaf_name_data.push_back(multihop.get_name_leafdata());
    if (bfd_source_address.is_set || is_set(bfd_source_address.yfilter)) leaf_name_data.push_back(bfd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name = value;
        sr_policy_name.value_namespace = name_space;
        sr_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop")
    {
        multihop = value;
        multihop.value_namespace = name_space;
        multihop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address = value;
        bfd_source_address.value_namespace = name_space;
        bfd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-policy-name")
    {
        sr_policy_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "multihop")
    {
        multihop.yfilter = yfilter;
    }
    if(value_path == "bfd-source-address")
    {
        bfd_source_address.yfilter = yfilter;
    }
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopSrPolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index" || name == "multihop" || name == "bfd-source-address")
        return true;
    return false;
}

RouterStatic::MaximumRoutes::MaximumRoutes()
    :
    ipv6_routes{YType::uint32, "ipv6-routes"},
    ipv4_routes{YType::uint32, "ipv4-routes"}
{

    yang_name = "maximum-routes"; yang_parent_name = "router-static"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterStatic::MaximumRoutes::~MaximumRoutes()
{
}

bool RouterStatic::MaximumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_routes.is_set
	|| ipv4_routes.is_set;
}

bool RouterStatic::MaximumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_routes.yfilter)
	|| ydk::is_set(ipv4_routes.yfilter);
}

std::string RouterStatic::MaximumRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterStatic::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::MaximumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_routes.is_set || is_set(ipv6_routes.yfilter)) leaf_name_data.push_back(ipv6_routes.get_name_leafdata());
    if (ipv4_routes.is_set || is_set(ipv4_routes.yfilter)) leaf_name_data.push_back(ipv4_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterStatic::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterStatic::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterStatic::MaximumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-routes")
    {
        ipv6_routes = value;
        ipv6_routes.value_namespace = name_space;
        ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-routes")
    {
        ipv4_routes = value;
        ipv4_routes.value_namespace = name_space;
        ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::MaximumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-routes")
    {
        ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "ipv4-routes")
    {
        ipv4_routes.yfilter = yfilter;
    }
}

bool RouterStatic::MaximumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-routes" || name == "ipv4-routes")
        return true;
    return false;
}


}
}

