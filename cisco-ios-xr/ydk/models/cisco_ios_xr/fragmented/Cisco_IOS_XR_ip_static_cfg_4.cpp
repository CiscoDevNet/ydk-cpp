
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_static_cfg {

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
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
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
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
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
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
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_recurse_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(vrf_recursive_next_hop_table != nullptr)
    {
        children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
    }

    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
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
    return is_set(operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children() const
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

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
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
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
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
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
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
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
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
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
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
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(segment_route_next_hop_table != nullptr)
    {
        children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
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
    return is_set(operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
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
        auto c = std::make_shared<RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
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

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
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
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
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
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
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
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
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
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
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
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
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

bool RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

const EntityPath RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::MaximumRoutes::MaximumRoutes()
    :
    ipv4_routes{YType::uint32, "ipv4-routes"},
    ipv6_routes{YType::uint32, "ipv6-routes"}
{
    yang_name = "maximum-routes"; yang_parent_name = "router-static";
}

RouterStatic::MaximumRoutes::~MaximumRoutes()
{
}

bool RouterStatic::MaximumRoutes::has_data() const
{
    return ipv4_routes.is_set
	|| ipv6_routes.is_set;
}

bool RouterStatic::MaximumRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_routes.operation)
	|| is_set(ipv6_routes.operation);
}

std::string RouterStatic::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";

    return path_buffer.str();

}

const EntityPath RouterStatic::MaximumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_routes.is_set || is_set(ipv4_routes.operation)) leaf_name_data.push_back(ipv4_routes.get_name_leafdata());
    if (ipv6_routes.is_set || is_set(ipv6_routes.operation)) leaf_name_data.push_back(ipv6_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::MaximumRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-routes")
    {
        ipv4_routes = value;
    }
    if(value_path == "ipv6-routes")
    {
        ipv6_routes = value;
    }
}


}
}

