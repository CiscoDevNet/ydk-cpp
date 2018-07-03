
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_static_cfg {

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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
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
    index_{YType::str, "index"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
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
	|| index_.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
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
	|| ydk::is_set(index_.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recurse-route")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_recurse_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_recursive_next_hop_table != nullptr)
    {
        children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
    }

    return children;
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
    , vrf_next_hop_explicit_path_name(this, {"explicit_path_name"})
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
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
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
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
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

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_next_hop_interface_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_next_hop_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_explicit_path_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
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
    index_{YType::str, "index"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
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
	|| index_.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
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
	|| ydk::is_set(index_.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment_route_next_hop_table != nullptr)
    {
        children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return children;
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
    , vrf_next_hop_explicit_path_name(this, {"explicit_path_name"})
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
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
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
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.len(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
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

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.append(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_next_hop_interface_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_interface_name_next_hop_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_next_hop_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_next_hop_address_explicit_path_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf_next_hop_explicit_path_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name" || name == "vrf-next-hop-explicit-path-name")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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
    index_{YType::str, "index"}
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
	|| index_.is_set;
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
	|| ydk::is_set(index_.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
        return true;
    return false;
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
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
    index_{YType::str, "index"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    if (is_presence_container) return true;
    return explicit_path_name.is_set
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
	|| index_.is_set;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
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
	|| ydk::is_set(index_.yfilter);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name";
    ADD_KEY_TOKEN(explicit_path_name, "explicit-path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

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

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
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
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "minimum-interval" || name == "detect-multiplier" || name == "metric" || name == "tag" || name == "permanent" || name == "vrf-lable" || name == "tunnel-id" || name == "object-name" || name == "description" || name == "load-metric" || name == "index")
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

std::shared_ptr<Entity> RouterStatic::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

