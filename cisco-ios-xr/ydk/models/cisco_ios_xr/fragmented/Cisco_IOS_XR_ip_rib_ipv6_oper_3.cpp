
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-rib-edm-path")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Ipv6RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::NonAs()
    :
    information(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information>())
    , protocol_routes(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes>())
{
    information->parent = this;
    protocol_routes->parent = this;

    yang_name = "non-as"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::~NonAs()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data())
	|| (protocol_routes !=  nullptr && protocol_routes->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information>();
        }
        return information;
    }

    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "protocol-routes")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "non-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::~Information()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {"address", "prefix_length"})
{

    yang_name = "protocol-routes"; yang_parent_name = "non-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::Isis()
    :
    as(this, {"as"})
{

    yang_name = "isis"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::~Isis()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_operation() const
{
    for (std::size_t index=0; index<as.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        ent_->parent = this;
        as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , protocol_routes(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
{
    information->parent = this;
    protocol_routes->parent = this;

    yang_name = "as"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::~As()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "as";
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    return _children;
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
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::~Information()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {"address", "prefix_length"})
{

    yang_name = "protocol-routes"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Routes()
    :
    route(this, {"address", "prefix_length"})
{

    yang_name = "routes"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::~Routes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath>())
{
    route_path->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::~Route()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoutes()
    :
    q_route(this, {"address", "prefix_length"})
{

    yang_name = "q-routes"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::~QRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<q_route.len(); index++)
    {
        if(q_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_operation() const
{
    for (std::size_t index=0; index<q_route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "q-route")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute>();
        ent_->parent = this;
        q_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : q_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "q-route"; yang_parent_name = "q-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::~QRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "q-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoutes()
    :
    backup_route(this, {"address", "prefix_length", "protoid"})
{

    yang_name = "backup-routes"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::~BackupRoutes()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_route.len(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute>();
        ent_->parent = this;
        backup_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    protoid{YType::uint32, "protoid"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"},
    has_srv6_function{YType::boolean, "has-srv6-function"},
    srv6_function{YType::str, "srv6-function"}
        ,
    route_path(std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| protoid.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| has_srv6_function.is_set
	|| srv6_function.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| ydk::is_set(has_srv6_function.yfilter)
	|| ydk::is_set(srv6_function.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    ADD_KEY_TOKEN(protoid, "protoid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());
    if (has_srv6_function.is_set || is_set(has_srv6_function.yfilter)) leaf_name_data.push_back(has_srv6_function.get_name_leafdata());
    if (srv6_function.is_set || is_set(srv6_function.yfilter)) leaf_name_data.push_back(srv6_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "protoid")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function = value;
        has_srv6_function.value_namespace = name_space;
        has_srv6_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-function")
    {
        srv6_function = value;
        srv6_function.value_namespace = name_space;
        srv6_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protoid")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
    if(value_path == "has-srv6-function")
    {
        has_srv6_function.yfilter = yfilter;
    }
    if(value_path == "srv6-function")
    {
        srv6_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "protoid" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time" || name == "has-srv6-function" || name == "srv6-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    ipv6_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
    {
        if(ipv6_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv6_rib_edm_path.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-rib-edm-path")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath>();
        ent_->parent = this;
        ipv6_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"},
    number_of_srv6_sids{YType::uint16, "number-of-srv6-sids"},
    has_srv6_transit_function{YType::boolean, "has-srv6-transit-function"},
    srv6_transit_function{YType::str, "srv6-transit-function"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
    , srv6_sid(this, {})
{

    yang_name = "ipv6-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::~Ipv6RibEdmPath()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set
	|| number_of_srv6_sids.is_set
	|| has_srv6_transit_function.is_set
	|| srv6_transit_function.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_sid.len(); index++)
    {
        if(srv6_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter)
	|| ydk::is_set(number_of_srv6_sids.yfilter)
	|| ydk::is_set(has_srv6_transit_function.yfilter)
	|| ydk::is_set(srv6_transit_function.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());
    if (number_of_srv6_sids.is_set || is_set(number_of_srv6_sids.yfilter)) leaf_name_data.push_back(number_of_srv6_sids.get_name_leafdata());
    if (has_srv6_transit_function.is_set || is_set(has_srv6_transit_function.yfilter)) leaf_name_data.push_back(has_srv6_transit_function.get_name_leafdata());
    if (srv6_transit_function.is_set || is_set(srv6_transit_function.yfilter)) leaf_name_data.push_back(srv6_transit_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-sid")
    {
        auto ent_ = std::make_shared<Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid>();
        ent_->parent = this;
        srv6_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids = value;
        number_of_srv6_sids.value_namespace = name_space;
        number_of_srv6_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function = value;
        has_srv6_transit_function.value_namespace = name_space;
        has_srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function = value;
        srv6_transit_function.value_namespace = name_space;
        srv6_transit_function.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
    if(value_path == "number-of-srv6-sids")
    {
        number_of_srv6_sids.yfilter = yfilter;
    }
    if(value_path == "has-srv6-transit-function")
    {
        has_srv6_transit_function.yfilter = yfilter;
    }
    if(value_path == "srv6-transit-function")
    {
        srv6_transit_function.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "srv6-sid" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute" || name == "number-of-srv6-sids" || name == "has-srv6-transit-function" || name == "srv6-transit-function")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::~Labelstk()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::Srv6Sid()
    :
    sid{YType::str, "sid"}
{

    yang_name = "srv6-sid"; yang_parent_name = "ipv6-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::~Srv6Sid()
{
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid.is_set;
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid.yfilter);
}

std::string Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
}

bool Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath::Srv6Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}


}
}

