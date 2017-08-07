
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "non-as";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::~Information()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "backup-routes-count" || name == "deleted-routes-count" || name == "instance" || name == "paths-count" || name == "protocol-clients-count" || name == "protocol-names" || name == "protocol-route-memory" || name == "redistribution-client-count" || name == "routes-counts" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "active" || name == "address" || name == "attribute-identity" || name == "client-id" || name == "distance" || name == "diversion" || name == "diversion-distance" || name == "diversion-proto-name" || name == "extended-flags" || name == "flags" || name == "flow-tag" || name == "fwd-class" || name == "instance" || name == "metric" || name == "paths-count" || name == "pic-count" || name == "prefix" || name == "prefix-length" || name == "prefix-length-xr" || name == "priority" || name == "protocol-id" || name == "protocol-name" || name == "qos-group" || name == "route-age" || name == "route-label" || name == "route-modify-time" || name == "route-precedence" || name == "route-type" || name == "route-version" || name == "svd-type" || name == "tag" || name == "tbl-version" || name == "traffic-index" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(labelstk.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(remote_backup_addr.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "labelstk")
    {
        labelstk.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "backup-pathid" || name == "binding-label" || name == "flags" || name == "flags64" || name == "has-labelstk" || name == "information-source" || name == "interface-name" || name == "labelstk" || name == "load-metric" || name == "looped" || name == "metric" || name == "mpls-feid" || name == "mvpn-present" || name == "next-hop-afi" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "next-hop-safi" || name == "next-hop-table-id" || name == "next-hop-table-name" || name == "next-hop-vrf-name" || name == "nhid-feid" || name == "num-labels" || name == "number-of-extended-communities" || name == "ospf-area-id" || name == "path-rt-present" || name == "pathid" || name == "private-flags" || name == "ref-cnt-of-backup" || name == "remote-backup-addr" || name == "route-label" || name == "segmented-nexthop-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "tunnel-id" || name == "v6-information-source" || name == "v6-nexthop" || name == "vrf-import-rt-present")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::Isis()
{
    yang_name = "isis"; yang_parent_name = "protocol";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::~Isis()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>())
	,protocol_routes(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
{
    information->parent = this;

    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "isis";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::~As()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        children["protocol-routes"] = protocol_routes;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "protocol-routes" || name == "as")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::Information()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    backup_routes_count{YType::uint32, "backup-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    instance{YType::str, "instance"},
    paths_count{YType::uint32, "paths-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    protocol_names{YType::str, "protocol-names"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    routes_counts{YType::uint32, "routes-counts"},
    version{YType::uint32, "version"}
{
    yang_name = "information"; yang_parent_name = "as";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::~Information()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_data() const
{
    return active_routes_count.is_set
	|| backup_routes_count.is_set
	|| deleted_routes_count.is_set
	|| instance.is_set
	|| paths_count.is_set
	|| protocol_clients_count.is_set
	|| protocol_names.is_set
	|| protocol_route_memory.is_set
	|| redistribution_client_count.is_set
	|| routes_counts.is_set
	|| version.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "backup-routes-count" || name == "deleted-routes-count" || name == "instance" || name == "paths-count" || name == "protocol-clients-count" || name == "protocol-names" || name == "protocol-route-memory" || name == "redistribution-client-count" || name == "routes-counts" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "active" || name == "address" || name == "attribute-identity" || name == "client-id" || name == "distance" || name == "diversion" || name == "diversion-distance" || name == "diversion-proto-name" || name == "extended-flags" || name == "flags" || name == "flow-tag" || name == "fwd-class" || name == "instance" || name == "metric" || name == "paths-count" || name == "pic-count" || name == "prefix" || name == "prefix-length" || name == "prefix-length-xr" || name == "priority" || name == "protocol-id" || name == "protocol-name" || name == "qos-group" || name == "route-age" || name == "route-label" || name == "route-modify-time" || name == "route-precedence" || name == "route-type" || name == "route-version" || name == "svd-type" || name == "tag" || name == "tbl-version" || name == "traffic-index" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(labelstk.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(remote_backup_addr.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "labelstk")
    {
        labelstk.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "backup-pathid" || name == "binding-label" || name == "flags" || name == "flags64" || name == "has-labelstk" || name == "information-source" || name == "interface-name" || name == "labelstk" || name == "load-metric" || name == "looped" || name == "metric" || name == "mpls-feid" || name == "mvpn-present" || name == "next-hop-afi" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "next-hop-safi" || name == "next-hop-table-id" || name == "next-hop-table-name" || name == "next-hop-vrf-name" || name == "nhid-feid" || name == "num-labels" || name == "number-of-extended-communities" || name == "ospf-area-id" || name == "path-rt-present" || name == "pathid" || name == "private-flags" || name == "ref-cnt-of-backup" || name == "remote-backup-addr" || name == "route-label" || name == "segmented-nexthop-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "tunnel-id" || name == "v6-information-source" || name == "v6-nexthop" || name == "vrf-import-rt-present")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::~Routes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::Route()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath>())
{
    route_path->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::~Route()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| next_hop_address.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "active" || name == "address" || name == "attribute-identity" || name == "client-id" || name == "distance" || name == "diversion" || name == "diversion-distance" || name == "diversion-proto-name" || name == "extended-flags" || name == "flags" || name == "flow-tag" || name == "fwd-class" || name == "instance" || name == "interface-name" || name == "metric" || name == "next-hop-address" || name == "paths-count" || name == "pic-count" || name == "prefix" || name == "prefix-length" || name == "prefix-length-xr" || name == "priority" || name == "protocol-id" || name == "protocol-name" || name == "qos-group" || name == "route-age" || name == "route-label" || name == "route-modify-time" || name == "route-precedence" || name == "route-type" || name == "route-version" || name == "svd-type" || name == "tag" || name == "tbl-version" || name == "traffic-index" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "route";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(labelstk.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(remote_backup_addr.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "labelstk")
    {
        labelstk.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "backup-pathid" || name == "binding-label" || name == "flags" || name == "flags64" || name == "has-labelstk" || name == "information-source" || name == "interface-name" || name == "labelstk" || name == "load-metric" || name == "looped" || name == "metric" || name == "mpls-feid" || name == "mvpn-present" || name == "next-hop-afi" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "next-hop-safi" || name == "next-hop-table-id" || name == "next-hop-table-name" || name == "next-hop-vrf-name" || name == "nhid-feid" || name == "num-labels" || name == "number-of-extended-communities" || name == "ospf-area-id" || name == "path-rt-present" || name == "pathid" || name == "private-flags" || name == "ref-cnt-of-backup" || name == "remote-backup-addr" || name == "route-label" || name == "segmented-nexthop-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "tunnel-id" || name == "v6-information-source" || name == "v6-nexthop" || name == "vrf-import-rt-present")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoutes()
{
    yang_name = "q-routes"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::~QRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_data() const
{
    for (std::size_t index=0; index<q_route.size(); index++)
    {
        if(q_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_operation() const
{
    for (std::size_t index=0; index<q_route.size(); index++)
    {
        if(q_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-routes";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "q-route")
    {
        for(auto const & c : q_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute>();
        c->parent = this;
        q_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : q_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "q-route")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::QRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "q-route"; yang_parent_name = "q-routes";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::~QRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-route";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "active" || name == "address" || name == "attribute-identity" || name == "client-id" || name == "distance" || name == "diversion" || name == "diversion-distance" || name == "diversion-proto-name" || name == "extended-flags" || name == "flags" || name == "flow-tag" || name == "fwd-class" || name == "instance" || name == "metric" || name == "paths-count" || name == "pic-count" || name == "prefix" || name == "prefix-length" || name == "prefix-length-xr" || name == "priority" || name == "protocol-id" || name == "protocol-name" || name == "qos-group" || name == "route-age" || name == "route-label" || name == "route-modify-time" || name == "route-precedence" || name == "route-type" || name == "route-version" || name == "svd-type" || name == "tag" || name == "tbl-version" || name == "traffic-index" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "q-route";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(labelstk.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(remote_backup_addr.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "labelstk")
    {
        labelstk.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "backup-pathid" || name == "binding-label" || name == "flags" || name == "flags64" || name == "has-labelstk" || name == "information-source" || name == "interface-name" || name == "labelstk" || name == "load-metric" || name == "looped" || name == "metric" || name == "mpls-feid" || name == "mvpn-present" || name == "next-hop-afi" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "next-hop-safi" || name == "next-hop-table-id" || name == "next-hop-table-name" || name == "next-hop-vrf-name" || name == "nhid-feid" || name == "num-labels" || name == "number-of-extended-communities" || name == "ospf-area-id" || name == "path-rt-present" || name == "pathid" || name == "private-flags" || name == "ref-cnt-of-backup" || name == "remote-backup-addr" || name == "route-label" || name == "segmented-nexthop-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "tunnel-id" || name == "v6-information-source" || name == "v6-nexthop" || name == "vrf-import-rt-present")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoutes()
{
    yang_name = "backup-routes"; yang_parent_name = "ip-rib-route-table-name";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::~BackupRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoutes' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        for(auto const & c : backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::BackupRoute()
    :
    active{YType::boolean, "active"},
    address{YType::str, "address"},
    attribute_identity{YType::uint32, "attribute-identity"},
    client_id{YType::uint32, "client-id"},
    distance{YType::uint32, "distance"},
    diversion{YType::boolean, "diversion"},
    diversion_distance{YType::uint32, "diversion-distance"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    extended_flags{YType::uint64, "extended-flags"},
    flags{YType::uint32, "flags"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    instance{YType::str, "instance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    pic_count{YType::uint8, "pic-count"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    priority{YType::uint8, "priority"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    protoid{YType::int32, "protoid"},
    qos_group{YType::uint8, "qos-group"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    route_modify_time{YType::uint64, "route-modify-time"},
    route_precedence{YType::uint8, "route-precedence"},
    route_type{YType::uint16, "route-type"},
    route_version{YType::uint32, "route-version"},
    svd_type{YType::uint8, "svd-type"},
    tag{YType::uint32, "tag"},
    tbl_version{YType::uint64, "tbl-version"},
    traffic_index{YType::uint8, "traffic-index"},
    version{YType::uint32, "version"}
    	,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_data() const
{
    return active.is_set
	|| address.is_set
	|| attribute_identity.is_set
	|| client_id.is_set
	|| distance.is_set
	|| diversion.is_set
	|| diversion_distance.is_set
	|| diversion_proto_name.is_set
	|| extended_flags.is_set
	|| flags.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| instance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| pic_count.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| priority.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| protoid.is_set
	|| qos_group.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| route_modify_time.is_set
	|| route_precedence.is_set
	|| route_type.is_set
	|| route_version.is_set
	|| svd_type.is_set
	|| tag.is_set
	|| tbl_version.is_set
	|| traffic_index.is_set
	|| version.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoute' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_path != nullptr)
    {
        children["route-path"] = route_path;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoid")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "protoid")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "active" || name == "address" || name == "attribute-identity" || name == "client-id" || name == "distance" || name == "diversion" || name == "diversion-distance" || name == "diversion-proto-name" || name == "extended-flags" || name == "flags" || name == "flow-tag" || name == "fwd-class" || name == "instance" || name == "metric" || name == "paths-count" || name == "pic-count" || name == "prefix" || name == "prefix-length" || name == "prefix-length-xr" || name == "priority" || name == "protocol-id" || name == "protocol-name" || name == "protoid" || name == "qos-group" || name == "route-age" || name == "route-label" || name == "route-modify-time" || name == "route-precedence" || name == "route-type" || name == "route-version" || name == "svd-type" || name == "tag" || name == "tbl-version" || name == "traffic-index" || name == "version")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "backup-route";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.size(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_rib_edm_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    backup_pathid{YType::uint32, "backup-pathid"},
    binding_label{YType::uint32, "binding-label"},
    flags{YType::uint16, "flags"},
    flags64{YType::uint64, "flags64"},
    has_labelstk{YType::boolean, "has-labelstk"},
    information_source{YType::str, "information-source"},
    interface_name{YType::str, "interface-name"},
    labelstk{YType::uint32, "labelstk"},
    load_metric{YType::uint32, "load-metric"},
    looped{YType::boolean, "looped"},
    metric{YType::uint32, "metric"},
    mpls_feid{YType::uint64, "mpls-feid"},
    mvpn_present{YType::boolean, "mvpn-present"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    nhid_feid{YType::uint64, "nhid-feid"},
    num_labels{YType::uint8, "num-labels"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    ospf_area_id{YType::str, "ospf-area-id"},
    path_rt_present{YType::boolean, "path-rt-present"},
    pathid{YType::uint32, "pathid"},
    private_flags{YType::uint16, "private-flags"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    remote_backup_addr{YType::str, "remote-backup-addr"},
    route_label{YType::uint32, "route-label"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    tunnel_id{YType::uint32, "tunnel-id"},
    v6_information_source{YType::str, "v6-information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"}
{
    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path";
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| backup_pathid.is_set
	|| binding_label.is_set
	|| flags.is_set
	|| flags64.is_set
	|| has_labelstk.is_set
	|| information_source.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| looped.is_set
	|| metric.is_set
	|| mpls_feid.is_set
	|| mvpn_present.is_set
	|| next_hop_afi.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| next_hop_safi.is_set
	|| next_hop_table_id.is_set
	|| next_hop_table_name.is_set
	|| next_hop_vrf_name.is_set
	|| nhid_feid.is_set
	|| num_labels.is_set
	|| number_of_extended_communities.is_set
	|| ospf_area_id.is_set
	|| path_rt_present.is_set
	|| pathid.is_set
	|| private_flags.is_set
	|| ref_cnt_of_backup.is_set
	|| route_label.is_set
	|| segmented_nexthop_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| tunnel_id.is_set
	|| v6_information_source.is_set
	|| v6_nexthop.is_set
	|| vrf_import_rt_present.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (auto const & leaf : labelstk.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(labelstk.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(remote_backup_addr.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

const EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "labelstk")
    {
        labelstk.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "backup-pathid" || name == "binding-label" || name == "flags" || name == "flags64" || name == "has-labelstk" || name == "information-source" || name == "interface-name" || name == "labelstk" || name == "load-metric" || name == "looped" || name == "metric" || name == "mpls-feid" || name == "mvpn-present" || name == "next-hop-afi" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "next-hop-safi" || name == "next-hop-table-id" || name == "next-hop-table-name" || name == "next-hop-vrf-name" || name == "nhid-feid" || name == "num-labels" || name == "number-of-extended-communities" || name == "ospf-area-id" || name == "path-rt-present" || name == "pathid" || name == "private-flags" || name == "ref-cnt-of-backup" || name == "remote-backup-addr" || name == "route-label" || name == "segmented-nexthop-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "tunnel-id" || name == "v6-information-source" || name == "v6-nexthop" || name == "vrf-import-rt-present")
        return true;
    return false;
}


}
}

