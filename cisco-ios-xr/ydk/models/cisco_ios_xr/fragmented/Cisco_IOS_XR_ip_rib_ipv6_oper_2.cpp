
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper_2.hpp"

namespace ydk {
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
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_entity_path(Entity* ancestor) const
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

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_children()
{
    for (auto const & c : protocol_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
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
    children["route-path"] = route_path;

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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
        else
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_children()
{
    if(children.find("route-path") == children.end())
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv6_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv6_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        c->parent = this;
        as.push_back(std::move(c));
        children[segment_path] = as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children()
{
    for (auto const & c : as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_value(const std::string & value_path, std::string value)
{
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>())
	,protocol_routes(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

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
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_entity_path(Entity* ancestor) const
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

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "information")
    {
        if(information != nullptr)
        {
            children["information"] = information;
        }
        else
        {
            information = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>();
            information->parent = this;
            children["information"] = information;
        }
        return children.at("information");
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes != nullptr)
        {
            children["protocol-routes"] = protocol_routes;
        }
        else
        {
            protocol_routes = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children()
{
    if(children.find("information") == children.end())
    {
        if(information != nullptr)
        {
            children["information"] = information;
        }
    }

    if(children.find("protocol-routes") == children.end())
    {
        if(protocol_routes != nullptr)
        {
            children["protocol-routes"] = protocol_routes;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
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
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(backup_routes_count.operation)
	|| is_set(deleted_routes_count.operation)
	|| is_set(instance.operation)
	|| is_set(paths_count.operation)
	|| is_set(protocol_clients_count.operation)
	|| is_set(protocol_names.operation)
	|| is_set(protocol_route_memory.operation)
	|| is_set(redistribution_client_count.operation)
	|| is_set(routes_counts.operation)
	|| is_set(version.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_entity_path(Entity* ancestor) const
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

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.operation)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.operation)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.operation)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (protocol_names.is_set || is_set(protocol_names.operation)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.operation)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.operation)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.operation)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
    }
    if(value_path == "protocol-names")
    {
        protocol_names = value;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-route")
    {
        for(auto const & c : protocol_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children()
{
    for (auto const & c : protocol_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
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
    children["route-path"] = route_path;

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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
        else
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children()
{
    if(children.find("route-path") == children.end())
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv6_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv6_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route>();
        c->parent = this;
        route.push_back(std::move(c));
        children[segment_path] = route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_children()
{
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::set_value(const std::string & value_path, std::string value)
{
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
    children["route-path"] = route_path;

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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
        else
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_children()
{
    if(children.find("route-path") == children.end())
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv6_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_children()
{
    for (auto const & c : ipv6_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::set_value(const std::string & value_path, std::string value)
{
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-routes";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "q-route")
    {
        for(auto const & c : q_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute>();
        c->parent = this;
        q_route.push_back(std::move(c));
        children[segment_path] = q_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_children()
{
    for (auto const & c : q_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_value(const std::string & value_path, std::string value)
{
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
    children["route-path"] = route_path;

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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-route";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
        else
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_children()
{
    if(children.find("route-path") == children.end())
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv6_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_children()
{
    for (auto const & c : ipv6_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-route")
    {
        for(auto const & c : backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(std::move(c));
        children[segment_path] = backup_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_children()
{
    for (auto const & c : backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_value(const std::string & value_path, std::string value)
{
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
    children["route-path"] = route_path;

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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address.operation)
	|| is_set(attribute_identity.operation)
	|| is_set(client_id.operation)
	|| is_set(distance.operation)
	|| is_set(diversion.operation)
	|| is_set(diversion_distance.operation)
	|| is_set(diversion_proto_name.operation)
	|| is_set(extended_flags.operation)
	|| is_set(flags.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fwd_class.operation)
	|| is_set(instance.operation)
	|| is_set(metric.operation)
	|| is_set(paths_count.operation)
	|| is_set(pic_count.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_name.operation)
	|| is_set(protoid.operation)
	|| is_set(qos_group.operation)
	|| is_set(route_age.operation)
	|| is_set(route_label.operation)
	|| is_set(route_modify_time.operation)
	|| is_set(route_precedence.operation)
	|| is_set(route_type.operation)
	|| is_set(route_version.operation)
	|| is_set(svd_type.operation)
	|| is_set(tag.operation)
	|| is_set(tbl_version.operation)
	|| is_set(traffic_index.operation)
	|| is_set(version.operation)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.operation)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.operation)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.operation)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.operation)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.operation)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.operation)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.operation)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.operation)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.operation)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.operation)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.operation)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.operation)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.operation)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.operation)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
        else
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_children()
{
    if(children.find("route-path") == children.end())
    {
        if(route_path != nullptr)
        {
            children["route-path"] = route_path;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "diversion")
    {
        diversion = value;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "protoid")
    {
        protoid = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "route-age")
    {
        route_age = value;
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
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
    return is_set(operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-rib-edm-path")
    {
        for(auto const & c : ipv6_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath>();
        c->parent = this;
        ipv6_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv6_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_children()
{
    for (auto const & c : ipv6_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_backup_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(backup_pathid.operation)
	|| is_set(binding_label.operation)
	|| is_set(flags.operation)
	|| is_set(flags64.operation)
	|| is_set(has_labelstk.operation)
	|| is_set(information_source.operation)
	|| is_set(interface_name.operation)
	|| is_set(labelstk.operation)
	|| is_set(load_metric.operation)
	|| is_set(looped.operation)
	|| is_set(metric.operation)
	|| is_set(mpls_feid.operation)
	|| is_set(mvpn_present.operation)
	|| is_set(next_hop_afi.operation)
	|| is_set(next_hop_id.operation)
	|| is_set(next_hop_id_refcount.operation)
	|| is_set(next_hop_safi.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(next_hop_table_name.operation)
	|| is_set(next_hop_vrf_name.operation)
	|| is_set(nhid_feid.operation)
	|| is_set(num_labels.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(ospf_area_id.operation)
	|| is_set(path_rt_present.operation)
	|| is_set(pathid.operation)
	|| is_set(private_flags.operation)
	|| is_set(ref_cnt_of_backup.operation)
	|| is_set(remote_backup_addr.operation)
	|| is_set(route_label.operation)
	|| is_set(segmented_nexthop_present.operation)
	|| is_set(source_asrt_present.operation)
	|| is_set(source_rd_present.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(v6_information_source.operation)
	|| is_set(v6_nexthop.operation)
	|| is_set(vrf_import_rt_present.operation);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";

    return path_buffer.str();

}

EntityPath Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.operation)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.operation)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.operation)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.operation)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (looped.is_set || is_set(looped.operation)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.operation)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.operation)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.operation)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.operation)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.operation)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.operation)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.operation)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.operation)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.operation)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.operation)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.operation)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.operation)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.operation)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.operation)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.operation)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.operation)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.operation)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.operation)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.operation)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.operation)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.operation)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());

    auto labelstk_name_datas = labelstk.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), labelstk_name_datas.begin(), labelstk_name_datas.end());
    auto remote_backup_addr_name_datas = remote_backup_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_backup_addr_name_datas.begin(), remote_backup_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_children()
{
    return children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
    }
    if(value_path == "information-source")
    {
        information_source = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "labelstk")
    {
        labelstk.append(value);
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "looped")
    {
        looped = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
    }
    if(value_path == "pathid")
    {
        pathid = value;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
    }
    if(value_path == "remote-backup-addr")
    {
        remote_backup_addr.append(value);
    }
    if(value_path == "route-label")
    {
        route_label = value;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
    }
}


}
}

