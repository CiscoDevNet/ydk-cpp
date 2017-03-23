
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv4_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Smiap()
    :
    information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information>())
	,protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

    yang_name = "smiap"; yang_parent_name = "local";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::~Smiap()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smiap";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Smiap' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information>();
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
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "smiap";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::Information()
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
    yang_name = "information"; yang_parent_name = "smiap";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Lspv()
    :
    information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>())
	,protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

    yang_name = "lspv"; yang_parent_name = "local";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::~Lspv()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspv";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lspv' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>();
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
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "lspv";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::Information()
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
    yang_name = "information"; yang_parent_name = "lspv";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::NonAs()
    :
    information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>())
	,protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

    yang_name = "non-as"; yang_parent_name = "local";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::~NonAs()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_data() const
{
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonAs' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>();
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
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "non-as";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::Information()
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::Bgp()
{
    yang_name = "bgp"; yang_parent_name = "protocol";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::~Bgp()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As>();
        c->parent = this;
        as.push_back(std::move(c));
        children[segment_path] = as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>())
	,protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

    yang_name = "as"; yang_parent_name = "bgp";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::~As()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>();
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
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::Information()
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::Isis()
{
    yang_name = "isis"; yang_parent_name = "protocol";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::~Isis()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        c->parent = this;
        as.push_back(std::move(c));
        children[segment_path] = as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::As()
    :
    as{YType::str, "as"}
    	,
    information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>())
	,protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
{
    information->parent = this;
    children["information"] = information;

    protocol_routes->parent = this;
    children["protocol-routes"] = protocol_routes;

    yang_name = "as"; yang_parent_name = "isis";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::~As()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_data() const
{
    return as.is_set
	|| (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>();
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
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>();
            protocol_routes->parent = this;
            children["protocol-routes"] = protocol_routes;
        }
        return children.at("protocol-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoutes()
{
    yang_name = "protocol-routes"; yang_parent_name = "as";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_data() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.size(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        c->parent = this;
        protocol_route.push_back(std::move(c));
        children[segment_path] = protocol_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "protocol-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::Information()
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoutes()
{
    yang_name = "q-routes"; yang_parent_name = "ip-rib-route-table-name";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::~QRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_data() const
{
    for (std::size_t index=0; index<q_route.size(); index++)
    {
        if(q_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_operation() const
{
    for (std::size_t index=0; index<q_route.size(); index++)
    {
        if(q_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute>();
        c->parent = this;
        q_route.push_back(std::move(c));
        children[segment_path] = q_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::QRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "q-route"; yang_parent_name = "q-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::~QRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "q-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoutes()
{
    yang_name = "backup-routes"; yang_parent_name = "ip-rib-route-table-name";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::~BackupRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoutes' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(std::move(c));
        children[segment_path] = backup_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::BackupRoute()
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
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "backup-route"; yang_parent_name = "backup-routes";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_children()
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

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "backup-route";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Adverts()
{
    yang_name = "adverts"; yang_parent_name = "ip-rib-route-table-name";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::~Adverts()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_data() const
{
    for (std::size_t index=0; index<advert.size(); index++)
    {
        if(advert[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_operation() const
{
    for (std::size_t index=0; index<advert.size(); index++)
    {
        if(advert[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adverts";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Adverts' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advert")
    {
        for(auto const & c : advert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert>();
        c->parent = this;
        advert.push_back(std::move(c));
        children[segment_path] = advert.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_children()
{
    for (auto const & c : advert)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::set_value(const std::string & value_path, std::string value)
{
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Advert()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "advert"; yang_parent_name = "adverts";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::~Advert()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_advert.size(); index++)
    {
        if(ipv4_rib_edm_advert[index]->has_data())
            return true;
    }
    return address.is_set
	|| prefix_length.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_advert.size(); index++)
    {
        if(ipv4_rib_edm_advert[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advert";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advert' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-advert")
    {
        for(auto const & c : ipv4_rib_edm_advert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert>();
        c->parent = this;
        ipv4_rib_edm_advert.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_advert.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_children()
{
    for (auto const & c : ipv4_rib_edm_advert)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::Ipv4RibEdmAdvert()
    :
    client_id{YType::uint32, "client-id"},
    code{YType::int8, "code"},
    extended_communities{YType::str, "extended-communities"},
    instance_name{YType::str, "instance-name"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_opaque{YType::uint32, "protocol-opaque"},
    protocol_opaque_flags{YType::uint8, "protocol-opaque-flags"}
{
    yang_name = "ipv4-rib-edm-advert"; yang_parent_name = "advert";
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::~Ipv4RibEdmAdvert()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::has_data() const
{
    return client_id.is_set
	|| code.is_set
	|| extended_communities.is_set
	|| instance_name.is_set
	|| number_of_extended_communities.is_set
	|| protocol_id.is_set
	|| protocol_opaque.is_set
	|| protocol_opaque_flags.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(code.operation)
	|| is_set(extended_communities.operation)
	|| is_set(instance_name.operation)
	|| is_set(number_of_extended_communities.operation)
	|| is_set(protocol_id.operation)
	|| is_set(protocol_opaque.operation)
	|| is_set(protocol_opaque_flags.operation);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-advert";

    return path_buffer.str();

}

EntityPath Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmAdvert' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (extended_communities.is_set || is_set(extended_communities.operation)) leaf_name_data.push_back(extended_communities.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.operation)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_opaque.is_set || is_set(protocol_opaque.operation)) leaf_name_data.push_back(protocol_opaque.get_name_leafdata());
    if (protocol_opaque_flags.is_set || is_set(protocol_opaque_flags.operation)) leaf_name_data.push_back(protocol_opaque_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_children()
{
    return children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "extended-communities")
    {
        extended_communities = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
    if(value_path == "protocol-opaque")
    {
        protocol_opaque = value;
    }
    if(value_path == "protocol-opaque-flags")
    {
        protocol_opaque_flags = value;
    }
}

Rib::RibTableIds::RibTableIds()
{
    yang_name = "rib-table-ids"; yang_parent_name = "rib";
}

Rib::RibTableIds::~RibTableIds()
{
}

bool Rib::RibTableIds::has_data() const
{
    for (std::size_t index=0; index<rib_table_id.size(); index++)
    {
        if(rib_table_id[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::has_operation() const
{
    for (std::size_t index=0; index<rib_table_id.size(); index++)
    {
        if(rib_table_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::RibTableIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-ids";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv4-oper:rib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-table-id")
    {
        for(auto const & c : rib_table_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::RibTableIds::RibTableId>();
        c->parent = this;
        rib_table_id.push_back(std::move(c));
        children[segment_path] = rib_table_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::get_children()
{
    for (auto const & c : rib_table_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::RibTableIds::set_value(const std::string & value_path, std::string value)
{
}

Rib::RibTableIds::RibTableId::RibTableId()
    :
    tableid{YType::str, "tableid"}
    	,
    rib_table_itf_hndls(std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls>())
	,summary_protos(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos>())
{
    rib_table_itf_hndls->parent = this;
    children["rib-table-itf-hndls"] = rib_table_itf_hndls;

    summary_protos->parent = this;
    children["summary-protos"] = summary_protos;

    yang_name = "rib-table-id"; yang_parent_name = "rib-table-ids";
}

Rib::RibTableIds::RibTableId::~RibTableId()
{
}

bool Rib::RibTableIds::RibTableId::has_data() const
{
    return tableid.is_set
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_data())
	|| (summary_protos !=  nullptr && summary_protos->has_data());
}

bool Rib::RibTableIds::RibTableId::has_operation() const
{
    return is_set(operation)
	|| is_set(tableid.operation)
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_operation())
	|| (summary_protos !=  nullptr && summary_protos->has_operation());
}

std::string Rib::RibTableIds::RibTableId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-id" <<"[tableid='" <<tableid <<"']";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-ipv4-oper:rib/rib-table-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tableid.is_set || is_set(tableid.operation)) leaf_name_data.push_back(tableid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-table-itf-hndls")
    {
        if(rib_table_itf_hndls != nullptr)
        {
            children["rib-table-itf-hndls"] = rib_table_itf_hndls;
        }
        else
        {
            rib_table_itf_hndls = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls>();
            rib_table_itf_hndls->parent = this;
            children["rib-table-itf-hndls"] = rib_table_itf_hndls;
        }
        return children.at("rib-table-itf-hndls");
    }

    if(child_yang_name == "summary-protos")
    {
        if(summary_protos != nullptr)
        {
            children["summary-protos"] = summary_protos;
        }
        else
        {
            summary_protos = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos>();
            summary_protos->parent = this;
            children["summary-protos"] = summary_protos;
        }
        return children.at("summary-protos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::get_children()
{
    if(children.find("rib-table-itf-hndls") == children.end())
    {
        if(rib_table_itf_hndls != nullptr)
        {
            children["rib-table-itf-hndls"] = rib_table_itf_hndls;
        }
    }

    if(children.find("summary-protos") == children.end())
    {
        if(summary_protos != nullptr)
        {
            children["summary-protos"] = summary_protos;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tableid")
    {
        tableid = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProtos()
{
    yang_name = "summary-protos"; yang_parent_name = "rib-table-id";
}

Rib::RibTableIds::RibTableId::SummaryProtos::~SummaryProtos()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::has_data() const
{
    for (std::size_t index=0; index<summary_proto.size(); index++)
    {
        if(summary_proto[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::has_operation() const
{
    for (std::size_t index=0; index<summary_proto.size(); index++)
    {
        if(summary_proto[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protos";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryProtos' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-proto")
    {
        for(auto const & c : summary_proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto>();
        c->parent = this;
        summary_proto.push_back(std::move(c));
        children[segment_path] = summary_proto.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::get_children()
{
    for (auto const & c : summary_proto)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::set_value(const std::string & value_path, std::string value)
{
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::SummaryProto()
    :
    protoid{YType::int32, "protoid"},
    instance{YType::str, "instance"},
    name{YType::str, "name"}
    	,
    proto_route_count(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>())
	,rtype_bgp_ext(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>())
	,rtype_bgp_int(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>())
	,rtype_bgp_loc(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>())
	,rtype_igrp2_ext(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>())
	,rtype_igrp2_int(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>())
	,rtype_isis_l1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>())
	,rtype_isis_l1_ia(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>())
	,rtype_isis_l2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>())
	,rtype_isis_sum(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>())
	,rtype_none(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>())
	,rtype_ospf_extern1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>())
	,rtype_ospf_extern2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>())
	,rtype_ospf_inter(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>())
	,rtype_ospf_intra(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>())
	,rtype_ospf_nssa1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>())
	,rtype_ospf_nssa2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>())
	,rtype_other(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>())
{
    proto_route_count->parent = this;
    children["proto-route-count"] = proto_route_count;

    rtype_bgp_ext->parent = this;
    children["rtype-bgp-ext"] = rtype_bgp_ext;

    rtype_bgp_int->parent = this;
    children["rtype-bgp-int"] = rtype_bgp_int;

    rtype_bgp_loc->parent = this;
    children["rtype-bgp-loc"] = rtype_bgp_loc;

    rtype_igrp2_ext->parent = this;
    children["rtype-igrp2-ext"] = rtype_igrp2_ext;

    rtype_igrp2_int->parent = this;
    children["rtype-igrp2-int"] = rtype_igrp2_int;

    rtype_isis_l1->parent = this;
    children["rtype-isis-l1"] = rtype_isis_l1;

    rtype_isis_l1_ia->parent = this;
    children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;

    rtype_isis_l2->parent = this;
    children["rtype-isis-l2"] = rtype_isis_l2;

    rtype_isis_sum->parent = this;
    children["rtype-isis-sum"] = rtype_isis_sum;

    rtype_none->parent = this;
    children["rtype-none"] = rtype_none;

    rtype_ospf_extern1->parent = this;
    children["rtype-ospf-extern1"] = rtype_ospf_extern1;

    rtype_ospf_extern2->parent = this;
    children["rtype-ospf-extern2"] = rtype_ospf_extern2;

    rtype_ospf_inter->parent = this;
    children["rtype-ospf-inter"] = rtype_ospf_inter;

    rtype_ospf_intra->parent = this;
    children["rtype-ospf-intra"] = rtype_ospf_intra;

    rtype_ospf_nssa1->parent = this;
    children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;

    rtype_ospf_nssa2->parent = this;
    children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;

    rtype_other->parent = this;
    children["rtype-other"] = rtype_other;

    yang_name = "summary-proto"; yang_parent_name = "summary-protos";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::~SummaryProto()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_data() const
{
    return protoid.is_set
	|| instance.is_set
	|| name.is_set
	|| (proto_route_count !=  nullptr && proto_route_count->has_data())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_data())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_data())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_data())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_data())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_data())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_data())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_data())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_data())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_data())
	|| (rtype_none !=  nullptr && rtype_none->has_data())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_data())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_data())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_data())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_data())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_data())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_data())
	|| (rtype_other !=  nullptr && rtype_other->has_data());
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_operation() const
{
    return is_set(operation)
	|| is_set(protoid.operation)
	|| is_set(instance.operation)
	|| is_set(name.operation)
	|| (proto_route_count !=  nullptr && proto_route_count->has_operation())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_operation())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_operation())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_operation())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_operation())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_operation())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_operation())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_operation())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_operation())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_operation())
	|| (rtype_none !=  nullptr && rtype_none->has_operation())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_operation())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_operation())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_operation())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_operation())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_operation())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_operation())
	|| (rtype_other !=  nullptr && rtype_other->has_operation());
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-proto" <<"[protoid='" <<protoid <<"']";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryProto' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protoid.is_set || is_set(protoid.operation)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "proto-route-count")
    {
        if(proto_route_count != nullptr)
        {
            children["proto-route-count"] = proto_route_count;
        }
        else
        {
            proto_route_count = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>();
            proto_route_count->parent = this;
            children["proto-route-count"] = proto_route_count;
        }
        return children.at("proto-route-count");
    }

    if(child_yang_name == "rtype-bgp-ext")
    {
        if(rtype_bgp_ext != nullptr)
        {
            children["rtype-bgp-ext"] = rtype_bgp_ext;
        }
        else
        {
            rtype_bgp_ext = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>();
            rtype_bgp_ext->parent = this;
            children["rtype-bgp-ext"] = rtype_bgp_ext;
        }
        return children.at("rtype-bgp-ext");
    }

    if(child_yang_name == "rtype-bgp-int")
    {
        if(rtype_bgp_int != nullptr)
        {
            children["rtype-bgp-int"] = rtype_bgp_int;
        }
        else
        {
            rtype_bgp_int = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>();
            rtype_bgp_int->parent = this;
            children["rtype-bgp-int"] = rtype_bgp_int;
        }
        return children.at("rtype-bgp-int");
    }

    if(child_yang_name == "rtype-bgp-loc")
    {
        if(rtype_bgp_loc != nullptr)
        {
            children["rtype-bgp-loc"] = rtype_bgp_loc;
        }
        else
        {
            rtype_bgp_loc = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>();
            rtype_bgp_loc->parent = this;
            children["rtype-bgp-loc"] = rtype_bgp_loc;
        }
        return children.at("rtype-bgp-loc");
    }

    if(child_yang_name == "rtype-igrp2-ext")
    {
        if(rtype_igrp2_ext != nullptr)
        {
            children["rtype-igrp2-ext"] = rtype_igrp2_ext;
        }
        else
        {
            rtype_igrp2_ext = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>();
            rtype_igrp2_ext->parent = this;
            children["rtype-igrp2-ext"] = rtype_igrp2_ext;
        }
        return children.at("rtype-igrp2-ext");
    }

    if(child_yang_name == "rtype-igrp2-int")
    {
        if(rtype_igrp2_int != nullptr)
        {
            children["rtype-igrp2-int"] = rtype_igrp2_int;
        }
        else
        {
            rtype_igrp2_int = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>();
            rtype_igrp2_int->parent = this;
            children["rtype-igrp2-int"] = rtype_igrp2_int;
        }
        return children.at("rtype-igrp2-int");
    }

    if(child_yang_name == "rtype-isis-l1")
    {
        if(rtype_isis_l1 != nullptr)
        {
            children["rtype-isis-l1"] = rtype_isis_l1;
        }
        else
        {
            rtype_isis_l1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>();
            rtype_isis_l1->parent = this;
            children["rtype-isis-l1"] = rtype_isis_l1;
        }
        return children.at("rtype-isis-l1");
    }

    if(child_yang_name == "rtype-isis-l1-ia")
    {
        if(rtype_isis_l1_ia != nullptr)
        {
            children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;
        }
        else
        {
            rtype_isis_l1_ia = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>();
            rtype_isis_l1_ia->parent = this;
            children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;
        }
        return children.at("rtype-isis-l1-ia");
    }

    if(child_yang_name == "rtype-isis-l2")
    {
        if(rtype_isis_l2 != nullptr)
        {
            children["rtype-isis-l2"] = rtype_isis_l2;
        }
        else
        {
            rtype_isis_l2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>();
            rtype_isis_l2->parent = this;
            children["rtype-isis-l2"] = rtype_isis_l2;
        }
        return children.at("rtype-isis-l2");
    }

    if(child_yang_name == "rtype-isis-sum")
    {
        if(rtype_isis_sum != nullptr)
        {
            children["rtype-isis-sum"] = rtype_isis_sum;
        }
        else
        {
            rtype_isis_sum = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>();
            rtype_isis_sum->parent = this;
            children["rtype-isis-sum"] = rtype_isis_sum;
        }
        return children.at("rtype-isis-sum");
    }

    if(child_yang_name == "rtype-none")
    {
        if(rtype_none != nullptr)
        {
            children["rtype-none"] = rtype_none;
        }
        else
        {
            rtype_none = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>();
            rtype_none->parent = this;
            children["rtype-none"] = rtype_none;
        }
        return children.at("rtype-none");
    }

    if(child_yang_name == "rtype-ospf-extern1")
    {
        if(rtype_ospf_extern1 != nullptr)
        {
            children["rtype-ospf-extern1"] = rtype_ospf_extern1;
        }
        else
        {
            rtype_ospf_extern1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>();
            rtype_ospf_extern1->parent = this;
            children["rtype-ospf-extern1"] = rtype_ospf_extern1;
        }
        return children.at("rtype-ospf-extern1");
    }

    if(child_yang_name == "rtype-ospf-extern2")
    {
        if(rtype_ospf_extern2 != nullptr)
        {
            children["rtype-ospf-extern2"] = rtype_ospf_extern2;
        }
        else
        {
            rtype_ospf_extern2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>();
            rtype_ospf_extern2->parent = this;
            children["rtype-ospf-extern2"] = rtype_ospf_extern2;
        }
        return children.at("rtype-ospf-extern2");
    }

    if(child_yang_name == "rtype-ospf-inter")
    {
        if(rtype_ospf_inter != nullptr)
        {
            children["rtype-ospf-inter"] = rtype_ospf_inter;
        }
        else
        {
            rtype_ospf_inter = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>();
            rtype_ospf_inter->parent = this;
            children["rtype-ospf-inter"] = rtype_ospf_inter;
        }
        return children.at("rtype-ospf-inter");
    }

    if(child_yang_name == "rtype-ospf-intra")
    {
        if(rtype_ospf_intra != nullptr)
        {
            children["rtype-ospf-intra"] = rtype_ospf_intra;
        }
        else
        {
            rtype_ospf_intra = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>();
            rtype_ospf_intra->parent = this;
            children["rtype-ospf-intra"] = rtype_ospf_intra;
        }
        return children.at("rtype-ospf-intra");
    }

    if(child_yang_name == "rtype-ospf-nssa1")
    {
        if(rtype_ospf_nssa1 != nullptr)
        {
            children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;
        }
        else
        {
            rtype_ospf_nssa1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>();
            rtype_ospf_nssa1->parent = this;
            children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;
        }
        return children.at("rtype-ospf-nssa1");
    }

    if(child_yang_name == "rtype-ospf-nssa2")
    {
        if(rtype_ospf_nssa2 != nullptr)
        {
            children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;
        }
        else
        {
            rtype_ospf_nssa2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>();
            rtype_ospf_nssa2->parent = this;
            children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;
        }
        return children.at("rtype-ospf-nssa2");
    }

    if(child_yang_name == "rtype-other")
    {
        if(rtype_other != nullptr)
        {
            children["rtype-other"] = rtype_other;
        }
        else
        {
            rtype_other = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>();
            rtype_other->parent = this;
            children["rtype-other"] = rtype_other;
        }
        return children.at("rtype-other");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_children()
{
    if(children.find("proto-route-count") == children.end())
    {
        if(proto_route_count != nullptr)
        {
            children["proto-route-count"] = proto_route_count;
        }
    }

    if(children.find("rtype-bgp-ext") == children.end())
    {
        if(rtype_bgp_ext != nullptr)
        {
            children["rtype-bgp-ext"] = rtype_bgp_ext;
        }
    }

    if(children.find("rtype-bgp-int") == children.end())
    {
        if(rtype_bgp_int != nullptr)
        {
            children["rtype-bgp-int"] = rtype_bgp_int;
        }
    }

    if(children.find("rtype-bgp-loc") == children.end())
    {
        if(rtype_bgp_loc != nullptr)
        {
            children["rtype-bgp-loc"] = rtype_bgp_loc;
        }
    }

    if(children.find("rtype-igrp2-ext") == children.end())
    {
        if(rtype_igrp2_ext != nullptr)
        {
            children["rtype-igrp2-ext"] = rtype_igrp2_ext;
        }
    }

    if(children.find("rtype-igrp2-int") == children.end())
    {
        if(rtype_igrp2_int != nullptr)
        {
            children["rtype-igrp2-int"] = rtype_igrp2_int;
        }
    }

    if(children.find("rtype-isis-l1") == children.end())
    {
        if(rtype_isis_l1 != nullptr)
        {
            children["rtype-isis-l1"] = rtype_isis_l1;
        }
    }

    if(children.find("rtype-isis-l1-ia") == children.end())
    {
        if(rtype_isis_l1_ia != nullptr)
        {
            children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;
        }
    }

    if(children.find("rtype-isis-l2") == children.end())
    {
        if(rtype_isis_l2 != nullptr)
        {
            children["rtype-isis-l2"] = rtype_isis_l2;
        }
    }

    if(children.find("rtype-isis-sum") == children.end())
    {
        if(rtype_isis_sum != nullptr)
        {
            children["rtype-isis-sum"] = rtype_isis_sum;
        }
    }

    if(children.find("rtype-none") == children.end())
    {
        if(rtype_none != nullptr)
        {
            children["rtype-none"] = rtype_none;
        }
    }

    if(children.find("rtype-ospf-extern1") == children.end())
    {
        if(rtype_ospf_extern1 != nullptr)
        {
            children["rtype-ospf-extern1"] = rtype_ospf_extern1;
        }
    }

    if(children.find("rtype-ospf-extern2") == children.end())
    {
        if(rtype_ospf_extern2 != nullptr)
        {
            children["rtype-ospf-extern2"] = rtype_ospf_extern2;
        }
    }

    if(children.find("rtype-ospf-inter") == children.end())
    {
        if(rtype_ospf_inter != nullptr)
        {
            children["rtype-ospf-inter"] = rtype_ospf_inter;
        }
    }

    if(children.find("rtype-ospf-intra") == children.end())
    {
        if(rtype_ospf_intra != nullptr)
        {
            children["rtype-ospf-intra"] = rtype_ospf_intra;
        }
    }

    if(children.find("rtype-ospf-nssa1") == children.end())
    {
        if(rtype_ospf_nssa1 != nullptr)
        {
            children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;
        }
    }

    if(children.find("rtype-ospf-nssa2") == children.end())
    {
        if(rtype_ospf_nssa2 != nullptr)
        {
            children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;
        }
    }

    if(children.find("rtype-other") == children.end())
    {
        if(rtype_other != nullptr)
        {
            children["rtype-other"] = rtype_other;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protoid")
    {
        protoid = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::ProtoRouteCount()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "proto-route-count"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::~ProtoRouteCount()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto-route-count";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtoRouteCount' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::RtypeNone()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-none"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::~RtypeNone()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-none";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeNone' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::RtypeOther()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-other"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::~RtypeOther()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-other";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOther' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::RtypeOspfIntra()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-intra"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::~RtypeOspfIntra()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-intra";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfIntra' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::RtypeOspfInter()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-inter"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::~RtypeOspfInter()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-inter";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfInter' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::RtypeOspfExtern1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-extern1"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::~RtypeOspfExtern1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern1";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfExtern1' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::RtypeOspfExtern2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-extern2"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::~RtypeOspfExtern2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern2";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfExtern2' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::RtypeIsisSum()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-sum"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::~RtypeIsisSum()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-sum";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisSum' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::RtypeIsisL1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l1"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::~RtypeIsisL1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL1' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::RtypeIsisL2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l2"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::~RtypeIsisL2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l2";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL2' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::RtypeIsisL1Ia()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-isis-l1-ia"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::~RtypeIsisL1Ia()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1-ia";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIsisL1Ia' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::RtypeBgpInt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-int"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::~RtypeBgpInt()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-int";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpInt' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::RtypeBgpExt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-ext"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::~RtypeBgpExt()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-ext";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpExt' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::RtypeBgpLoc()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-bgp-loc"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::~RtypeBgpLoc()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-loc";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeBgpLoc' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::RtypeOspfNssa1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-nssa1"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::~RtypeOspfNssa1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa1";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfNssa1' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::RtypeOspfNssa2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-ospf-nssa2"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::~RtypeOspfNssa2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa2";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeOspfNssa2' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::RtypeIgrp2Int()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-igrp2-int"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::~RtypeIgrp2Int()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-int";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIgrp2Int' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::RtypeIgrp2Ext()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"},
    num_backup_routes{YType::uint32, "num-backup-routes"}
{
    yang_name = "rtype-igrp2-ext"; yang_parent_name = "summary-proto";
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::~RtypeIgrp2Ext()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_data() const
{
    return active_routes_count.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set
	|| num_backup_routes.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_operation() const
{
    return is_set(operation)
	|| is_set(active_routes_count.operation)
	|| is_set(num_active_paths.operation)
	|| is_set(num_backup_paths.operation)
	|| is_set(num_backup_routes.operation);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-ext";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtypeIgrp2Ext' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.operation)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.operation)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.operation)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.operation)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
    }
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndls()
{
    yang_name = "rib-table-itf-hndls"; yang_parent_name = "rib-table-id";
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::~RibTableItfHndls()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::has_data() const
{
    for (std::size_t index=0; index<rib_table_itf_hndl.size(); index++)
    {
        if(rib_table_itf_hndl[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::has_operation() const
{
    for (std::size_t index=0; index<rib_table_itf_hndl.size(); index++)
    {
        if(rib_table_itf_hndl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndls";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::RibTableItfHndls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibTableItfHndls' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-table-itf-hndl")
    {
        for(auto const & c : rib_table_itf_hndl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl>();
        c->parent = this;
        rib_table_itf_hndl.push_back(std::move(c));
        children[segment_path] = rib_table_itf_hndl.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::RibTableItfHndls::get_children()
{
    for (auto const & c : rib_table_itf_hndl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::set_value(const std::string & value_path, std::string value)
{
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::RibTableItfHndl()
    :
    handle{YType::int32, "handle"}
{
    yang_name = "rib-table-itf-hndl"; yang_parent_name = "rib-table-itf-hndls";
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::~RibTableItfHndl()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_data() const
{
    for (std::size_t index=0; index<itf_route.size(); index++)
    {
        if(itf_route[index]->has_data())
            return true;
    }
    return handle.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_operation() const
{
    for (std::size_t index=0; index<itf_route.size(); index++)
    {
        if(itf_route[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(handle.operation);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndl" <<"[handle='" <<handle <<"']";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibTableItfHndl' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "itf-route")
    {
        for(auto const & c : itf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute>();
        c->parent = this;
        itf_route.push_back(std::move(c));
        children[segment_path] = itf_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_children()
{
    for (auto const & c : itf_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "handle")
    {
        handle = value;
    }
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::ItfRoute()
    :
    address{YType::str, "address"},
    active{YType::boolean, "active"},
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
    route_path(std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>())
{
    route_path->parent = this;
    children["route-path"] = route_path;

    yang_name = "itf-route"; yang_parent_name = "rib-table-itf-hndl";
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::~ItfRoute()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_data() const
{
    return address.is_set
	|| active.is_set
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

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(active.operation)
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

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itf-route" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItfRoute' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
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

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_path = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>();
            route_path->parent = this;
            children["route-path"] = route_path;
        }
        return children.at("route-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_children()
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

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "active")
    {
        active = value;
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

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::RoutePath()
{
    yang_name = "route-path"; yang_parent_name = "itf-route";
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::~RoutePath()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_data() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.size(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-rib-edm-path")
    {
        for(auto const & c : ipv4_rib_edm_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath>();
        c->parent = this;
        ipv4_rib_edm_path.push_back(std::move(c));
        children[segment_path] = ipv4_rib_edm_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_children()
{
    for (auto const & c : ipv4_rib_edm_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
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
    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path";
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::has_data() const
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

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
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

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";

    return path_buffer.str();

}

EntityPath Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibEdmPath' in Cisco_IOS_XR_ip_rib_ipv4_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_children()
{
    return children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, std::string value)
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

