
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_telemetry_model_driven_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_telemetry_model_driven_oper {

TelemetryModelDriven::TelemetryModelDriven()
    :
    destinations(std::make_shared<TelemetryModelDriven::Destinations>())
	,subscriptions(std::make_shared<TelemetryModelDriven::Subscriptions>())
	,sensor_groups(std::make_shared<TelemetryModelDriven::SensorGroups>())
{
    destinations->parent = this;
    subscriptions->parent = this;
    sensor_groups->parent = this;

    yang_name = "telemetry-model-driven"; yang_parent_name = "Cisco-IOS-XR-telemetry-model-driven-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TelemetryModelDriven::~TelemetryModelDriven()
{
}

bool TelemetryModelDriven::has_data() const
{
    return (destinations !=  nullptr && destinations->has_data())
	|| (subscriptions !=  nullptr && subscriptions->has_data())
	|| (sensor_groups !=  nullptr && sensor_groups->has_data());
}

bool TelemetryModelDriven::has_operation() const
{
    return is_set(yfilter)
	|| (destinations !=  nullptr && destinations->has_operation())
	|| (subscriptions !=  nullptr && subscriptions->has_operation())
	|| (sensor_groups !=  nullptr && sensor_groups->has_operation());
}

std::string TelemetryModelDriven::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<TelemetryModelDriven::Destinations>();
        }
        return destinations;
    }

    if(child_yang_name == "subscriptions")
    {
        if(subscriptions == nullptr)
        {
            subscriptions = std::make_shared<TelemetryModelDriven::Subscriptions>();
        }
        return subscriptions;
    }

    if(child_yang_name == "sensor-groups")
    {
        if(sensor_groups == nullptr)
        {
            sensor_groups = std::make_shared<TelemetryModelDriven::SensorGroups>();
        }
        return sensor_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destinations != nullptr)
    {
        children["destinations"] = destinations;
    }

    if(subscriptions != nullptr)
    {
        children["subscriptions"] = subscriptions;
    }

    if(sensor_groups != nullptr)
    {
        children["sensor-groups"] = sensor_groups;
    }

    return children;
}

void TelemetryModelDriven::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TelemetryModelDriven::clone_ptr() const
{
    return std::make_shared<TelemetryModelDriven>();
}

std::string TelemetryModelDriven::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TelemetryModelDriven::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TelemetryModelDriven::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TelemetryModelDriven::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TelemetryModelDriven::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destinations" || name == "subscriptions" || name == "sensor-groups")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destinations()
{

    yang_name = "destinations"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Destinations::~Destinations()
{
}

bool TelemetryModelDriven::Destinations::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::Destinations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Destinations::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination()
    :
    destination_id{YType::str, "destination-id"},
    id{YType::str, "id"},
    configured{YType::uint32, "configured"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Destinations::Destination::~Destination()
{
}

bool TelemetryModelDriven::Destinations::Destination::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return destination_id.is_set
	|| id.is_set
	|| configured.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_id.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configured.yfilter);
}

std::string TelemetryModelDriven::Destinations::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/destinations/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-id='" <<destination_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_id.is_set || is_set(destination_id.yfilter)) leaf_name_data.push_back(destination_id.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-id")
    {
        destination_id = value;
        destination_id.value_namespace = name_space;
        destination_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-id")
    {
        destination_id.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-id" || name == "id" || name == "configured")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination_()
    :
    destination(std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__>())
{
    destination->parent = this;

    yang_name = "destination"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::~Destination_()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::has_data() const
{
    for (std::size_t index=0; index<collection_group.size(); index++)
    {
        if(collection_group[index]->has_data())
            return true;
    }
    return (destination !=  nullptr && destination->has_data());
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::has_operation() const
{
    for (std::size_t index=0; index<collection_group.size(); index++)
    {
        if(collection_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__>();
        }
        return destination;
    }

    if(child_yang_name == "collection-group")
    {
        for(auto const & c : collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup>();
        c->parent = this;
        collection_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    for (auto const & c : collection_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Destinations::Destination::Destination_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "collection-group")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::Destination__()
    :
    id{YType::str, "id"},
    sub_id_str{YType::str, "sub-id-str"},
    dest_port{YType::uint16, "dest-port"},
    encoding{YType::enumeration, "encoding"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"},
    vrf_id{YType::uint32, "vrf-id"},
    state{YType::enumeration, "state"},
    udp_mtu{YType::uint32, "udp-mtu"},
    tls{YType::uint32, "tls"},
    tls_host{YType::str, "tls-host"},
    total_num_of_packets_sent{YType::uint64, "total-num-of-packets-sent"},
    total_num_of_bytes_sent{YType::uint64, "total-num-of-bytes-sent"},
    last_collection_time{YType::uint64, "last-collection-time"},
    dscp{YType::uint32, "dscp"},
    sub_id{YType::uint64, "sub-id"}
    	,
    dest_ip_address(std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress>())
{
    dest_ip_address->parent = this;

    yang_name = "destination"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::~Destination__()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::has_data() const
{
    for (auto const & leaf : sub_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| sub_id_str.is_set
	|| dest_port.is_set
	|| encoding.is_set
	|| transport.is_set
	|| vrf.is_set
	|| vrf_id.is_set
	|| state.is_set
	|| udp_mtu.is_set
	|| tls.is_set
	|| tls_host.is_set
	|| total_num_of_packets_sent.is_set
	|| total_num_of_bytes_sent.is_set
	|| last_collection_time.is_set
	|| dscp.is_set
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_data());
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::has_operation() const
{
    for (auto const & leaf : sub_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(sub_id_str.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(udp_mtu.yfilter)
	|| ydk::is_set(tls.yfilter)
	|| ydk::is_set(tls_host.yfilter)
	|| ydk::is_set(total_num_of_packets_sent.yfilter)
	|| ydk::is_set(total_num_of_bytes_sent.yfilter)
	|| ydk::is_set(last_collection_time.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_operation());
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (sub_id_str.is_set || is_set(sub_id_str.yfilter)) leaf_name_data.push_back(sub_id_str.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (udp_mtu.is_set || is_set(udp_mtu.yfilter)) leaf_name_data.push_back(udp_mtu.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (tls_host.is_set || is_set(tls_host.yfilter)) leaf_name_data.push_back(tls_host.get_name_leafdata());
    if (total_num_of_packets_sent.is_set || is_set(total_num_of_packets_sent.yfilter)) leaf_name_data.push_back(total_num_of_packets_sent.get_name_leafdata());
    if (total_num_of_bytes_sent.is_set || is_set(total_num_of_bytes_sent.yfilter)) leaf_name_data.push_back(total_num_of_bytes_sent.get_name_leafdata());
    if (last_collection_time.is_set || is_set(last_collection_time.yfilter)) leaf_name_data.push_back(last_collection_time.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    auto sub_id_name_datas = sub_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sub_id_name_datas.begin(), sub_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-ip-address")
    {
        if(dest_ip_address == nullptr)
        {
            dest_ip_address = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress>();
        }
        return dest_ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_ip_address != nullptr)
    {
        children["dest-ip-address"] = dest_ip_address;
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id-str")
    {
        sub_id_str = value;
        sub_id_str.value_namespace = name_space;
        sub_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-mtu")
    {
        udp_mtu = value;
        udp_mtu.value_namespace = name_space;
        udp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls")
    {
        tls = value;
        tls.value_namespace = name_space;
        tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-host")
    {
        tls_host = value;
        tls_host.value_namespace = name_space;
        tls_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent = value;
        total_num_of_packets_sent.value_namespace = name_space;
        total_num_of_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent = value;
        total_num_of_bytes_sent.value_namespace = name_space;
        total_num_of_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time = value;
        last_collection_time.value_namespace = name_space;
        last_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id.append(value);
    }
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "sub-id-str")
    {
        sub_id_str.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "udp-mtu")
    {
        udp_mtu.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
    if(value_path == "tls-host")
    {
        tls_host.yfilter = yfilter;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent.yfilter = yfilter;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip-address" || name == "id" || name == "sub-id-str" || name == "dest-port" || name == "encoding" || name == "transport" || name == "vrf" || name == "vrf-id" || name == "state" || name == "udp-mtu" || name == "tls" || name == "tls-host" || name == "total-num-of-packets-sent" || name == "total-num-of-bytes-sent" || name == "last-collection-time" || name == "dscp" || name == "sub-id")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::DestIpAddress()
    :
    ip_type{YType::enumeration, "ip-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dest-ip-address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::~DestIpAddress()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::has_data() const
{
    return ip_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_type.is_set || is_set(ip_type.yfilter)) leaf_name_data.push_back(ip_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-type")
    {
        ip_type = value;
        ip_type.value_namespace = name_space;
        ip_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-type")
    {
        ip_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionGroup()
    :
    id{YType::uint64, "id"},
    cadence{YType::uint32, "cadence"},
    total_collections{YType::uint32, "total-collections"},
    encoding{YType::enumeration, "encoding"},
    last_collection_start_time{YType::uint64, "last-collection-start-time"},
    last_collection_end_time{YType::uint64, "last-collection-end-time"},
    max_collection_time{YType::uint32, "max-collection-time"},
    min_collection_time{YType::uint32, "min-collection-time"},
    min_total_time{YType::uint32, "min-total-time"},
    max_total_time{YType::uint32, "max-total-time"},
    avg_total_time{YType::uint32, "avg-total-time"},
    total_other_errors{YType::uint32, "total-other-errors"},
    total_on_data_instances{YType::uint32, "total-on-data-instances"},
    total_not_ready{YType::uint32, "total-not-ready"},
    total_send_errors{YType::uint32, "total-send-errors"},
    total_send_drops{YType::uint32, "total-send-drops"}
{

    yang_name = "collection-group"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::~CollectionGroup()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::has_data() const
{
    for (std::size_t index=0; index<collection_path.size(); index++)
    {
        if(collection_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_collection_group.size(); index++)
    {
        if(internal_collection_group[index]->has_data())
            return true;
    }
    return id.is_set
	|| cadence.is_set
	|| total_collections.is_set
	|| encoding.is_set
	|| last_collection_start_time.is_set
	|| last_collection_end_time.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| min_total_time.is_set
	|| max_total_time.is_set
	|| avg_total_time.is_set
	|| total_other_errors.is_set
	|| total_on_data_instances.is_set
	|| total_not_ready.is_set
	|| total_send_errors.is_set
	|| total_send_drops.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::has_operation() const
{
    for (std::size_t index=0; index<collection_path.size(); index++)
    {
        if(collection_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_collection_group.size(); index++)
    {
        if(internal_collection_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cadence.yfilter)
	|| ydk::is_set(total_collections.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(last_collection_start_time.yfilter)
	|| ydk::is_set(last_collection_end_time.yfilter)
	|| ydk::is_set(max_collection_time.yfilter)
	|| ydk::is_set(min_collection_time.yfilter)
	|| ydk::is_set(min_total_time.yfilter)
	|| ydk::is_set(max_total_time.yfilter)
	|| ydk::is_set(avg_total_time.yfilter)
	|| ydk::is_set(total_other_errors.yfilter)
	|| ydk::is_set(total_on_data_instances.yfilter)
	|| ydk::is_set(total_not_ready.yfilter)
	|| ydk::is_set(total_send_errors.yfilter)
	|| ydk::is_set(total_send_drops.yfilter);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.yfilter)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.yfilter)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (last_collection_start_time.is_set || is_set(last_collection_start_time.yfilter)) leaf_name_data.push_back(last_collection_start_time.get_name_leafdata());
    if (last_collection_end_time.is_set || is_set(last_collection_end_time.yfilter)) leaf_name_data.push_back(last_collection_end_time.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.yfilter)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.yfilter)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (min_total_time.is_set || is_set(min_total_time.yfilter)) leaf_name_data.push_back(min_total_time.get_name_leafdata());
    if (max_total_time.is_set || is_set(max_total_time.yfilter)) leaf_name_data.push_back(max_total_time.get_name_leafdata());
    if (avg_total_time.is_set || is_set(avg_total_time.yfilter)) leaf_name_data.push_back(avg_total_time.get_name_leafdata());
    if (total_other_errors.is_set || is_set(total_other_errors.yfilter)) leaf_name_data.push_back(total_other_errors.get_name_leafdata());
    if (total_on_data_instances.is_set || is_set(total_on_data_instances.yfilter)) leaf_name_data.push_back(total_on_data_instances.get_name_leafdata());
    if (total_not_ready.is_set || is_set(total_not_ready.yfilter)) leaf_name_data.push_back(total_not_ready.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.yfilter)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.yfilter)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collection-path")
    {
        for(auto const & c : collection_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath>();
        c->parent = this;
        collection_path.push_back(c);
        return c;
    }

    if(child_yang_name == "internal-collection-group")
    {
        for(auto const & c : internal_collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup>();
        c->parent = this;
        internal_collection_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : collection_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : internal_collection_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cadence")
    {
        cadence = value;
        cadence.value_namespace = name_space;
        cadence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
        total_collections.value_namespace = name_space;
        total_collections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time = value;
        last_collection_start_time.value_namespace = name_space;
        last_collection_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time = value;
        last_collection_end_time.value_namespace = name_space;
        last_collection_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
        max_collection_time.value_namespace = name_space;
        max_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
        min_collection_time.value_namespace = name_space;
        min_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-total-time")
    {
        min_total_time = value;
        min_total_time.value_namespace = name_space;
        min_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-total-time")
    {
        max_total_time = value;
        max_total_time.value_namespace = name_space;
        max_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-total-time")
    {
        avg_total_time = value;
        avg_total_time.value_namespace = name_space;
        avg_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors = value;
        total_other_errors.value_namespace = name_space;
        total_other_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-on-data-instances")
    {
        total_on_data_instances = value;
        total_on_data_instances.value_namespace = name_space;
        total_on_data_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready = value;
        total_not_ready.value_namespace = name_space;
        total_not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
        total_send_errors.value_namespace = name_space;
        total_send_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
        total_send_drops.value_namespace = name_space;
        total_send_drops.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cadence")
    {
        cadence.yfilter = yfilter;
    }
    if(value_path == "total-collections")
    {
        total_collections.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time.yfilter = yfilter;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time.yfilter = yfilter;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-total-time")
    {
        min_total_time.yfilter = yfilter;
    }
    if(value_path == "max-total-time")
    {
        max_total_time.yfilter = yfilter;
    }
    if(value_path == "avg-total-time")
    {
        avg_total_time.yfilter = yfilter;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors.yfilter = yfilter;
    }
    if(value_path == "total-on-data-instances")
    {
        total_on_data_instances.yfilter = yfilter;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready.yfilter = yfilter;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors.yfilter = yfilter;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection-path" || name == "internal-collection-group" || name == "id" || name == "cadence" || name == "total-collections" || name == "encoding" || name == "last-collection-start-time" || name == "last-collection-end-time" || name == "max-collection-time" || name == "min-collection-time" || name == "min-total-time" || name == "max-total-time" || name == "avg-total-time" || name == "total-other-errors" || name == "total-on-data-instances" || name == "total-not-ready" || name == "total-send-errors" || name == "total-send-drops")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::CollectionPath()
    :
    path{YType::str, "path"},
    state{YType::boolean, "state"},
    status_str{YType::str, "status-str"}
{

    yang_name = "collection-path"; yang_parent_name = "collection-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::~CollectionPath()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::has_data() const
{
    return path.is_set
	|| state.is_set
	|| status_str.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(status_str.yfilter);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.yfilter)) leaf_name_data.push_back(status_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-str")
    {
        status_str = value;
        status_str.value_namespace = name_space;
        status_str.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "status-str")
    {
        status_str.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "state" || name == "status-str")
        return true;
    return false;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::InternalCollectionGroup()
    :
    path{YType::str, "path"},
    cadence{YType::uint64, "cadence"},
    total_get_count{YType::uint64, "total-get-count"},
    total_list_count{YType::uint64, "total-list-count"},
    total_datalist_count{YType::uint64, "total-datalist-count"},
    total_finddata_count{YType::uint64, "total-finddata-count"},
    total_get_bulk_count{YType::uint64, "total-get-bulk-count"},
    total_item_count{YType::uint64, "total-item-count"},
    total_get_errors{YType::uint64, "total-get-errors"},
    total_list_errors{YType::uint64, "total-list-errors"},
    total_datalist_errors{YType::uint64, "total-datalist-errors"},
    total_finddata_errors{YType::uint64, "total-finddata-errors"},
    total_get_bulk_errors{YType::uint64, "total-get-bulk-errors"},
    total_encode_errors{YType::uint64, "total-encode-errors"},
    total_encode_notready{YType::uint64, "total-encode-notready"},
    total_send_errors{YType::uint64, "total-send-errors"},
    total_send_drops{YType::uint64, "total-send-drops"},
    total_sent_bytes{YType::uint64, "total-sent-bytes"},
    total_send_packets{YType::uint64, "total-send-packets"},
    total_send_bytes_dropped{YType::uint64, "total-send-bytes-dropped"},
    total_collections{YType::uint64, "total-collections"},
    total_collections_missed{YType::uint64, "total-collections-missed"},
    max_collection_time{YType::uint64, "max-collection-time"},
    min_collection_time{YType::uint64, "min-collection-time"},
    avg_collection_time{YType::uint64, "avg-collection-time"},
    collection_method{YType::uint64, "collection-method"},
    status{YType::enumeration, "status"}
{

    yang_name = "internal-collection-group"; yang_parent_name = "collection-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::~InternalCollectionGroup()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::has_data() const
{
    return path.is_set
	|| cadence.is_set
	|| total_get_count.is_set
	|| total_list_count.is_set
	|| total_datalist_count.is_set
	|| total_finddata_count.is_set
	|| total_get_bulk_count.is_set
	|| total_item_count.is_set
	|| total_get_errors.is_set
	|| total_list_errors.is_set
	|| total_datalist_errors.is_set
	|| total_finddata_errors.is_set
	|| total_get_bulk_errors.is_set
	|| total_encode_errors.is_set
	|| total_encode_notready.is_set
	|| total_send_errors.is_set
	|| total_send_drops.is_set
	|| total_sent_bytes.is_set
	|| total_send_packets.is_set
	|| total_send_bytes_dropped.is_set
	|| total_collections.is_set
	|| total_collections_missed.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| avg_collection_time.is_set
	|| collection_method.is_set
	|| status.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(cadence.yfilter)
	|| ydk::is_set(total_get_count.yfilter)
	|| ydk::is_set(total_list_count.yfilter)
	|| ydk::is_set(total_datalist_count.yfilter)
	|| ydk::is_set(total_finddata_count.yfilter)
	|| ydk::is_set(total_get_bulk_count.yfilter)
	|| ydk::is_set(total_item_count.yfilter)
	|| ydk::is_set(total_get_errors.yfilter)
	|| ydk::is_set(total_list_errors.yfilter)
	|| ydk::is_set(total_datalist_errors.yfilter)
	|| ydk::is_set(total_finddata_errors.yfilter)
	|| ydk::is_set(total_get_bulk_errors.yfilter)
	|| ydk::is_set(total_encode_errors.yfilter)
	|| ydk::is_set(total_encode_notready.yfilter)
	|| ydk::is_set(total_send_errors.yfilter)
	|| ydk::is_set(total_send_drops.yfilter)
	|| ydk::is_set(total_sent_bytes.yfilter)
	|| ydk::is_set(total_send_packets.yfilter)
	|| ydk::is_set(total_send_bytes_dropped.yfilter)
	|| ydk::is_set(total_collections.yfilter)
	|| ydk::is_set(total_collections_missed.yfilter)
	|| ydk::is_set(max_collection_time.yfilter)
	|| ydk::is_set(min_collection_time.yfilter)
	|| ydk::is_set(avg_collection_time.yfilter)
	|| ydk::is_set(collection_method.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-collection-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.yfilter)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (total_get_count.is_set || is_set(total_get_count.yfilter)) leaf_name_data.push_back(total_get_count.get_name_leafdata());
    if (total_list_count.is_set || is_set(total_list_count.yfilter)) leaf_name_data.push_back(total_list_count.get_name_leafdata());
    if (total_datalist_count.is_set || is_set(total_datalist_count.yfilter)) leaf_name_data.push_back(total_datalist_count.get_name_leafdata());
    if (total_finddata_count.is_set || is_set(total_finddata_count.yfilter)) leaf_name_data.push_back(total_finddata_count.get_name_leafdata());
    if (total_get_bulk_count.is_set || is_set(total_get_bulk_count.yfilter)) leaf_name_data.push_back(total_get_bulk_count.get_name_leafdata());
    if (total_item_count.is_set || is_set(total_item_count.yfilter)) leaf_name_data.push_back(total_item_count.get_name_leafdata());
    if (total_get_errors.is_set || is_set(total_get_errors.yfilter)) leaf_name_data.push_back(total_get_errors.get_name_leafdata());
    if (total_list_errors.is_set || is_set(total_list_errors.yfilter)) leaf_name_data.push_back(total_list_errors.get_name_leafdata());
    if (total_datalist_errors.is_set || is_set(total_datalist_errors.yfilter)) leaf_name_data.push_back(total_datalist_errors.get_name_leafdata());
    if (total_finddata_errors.is_set || is_set(total_finddata_errors.yfilter)) leaf_name_data.push_back(total_finddata_errors.get_name_leafdata());
    if (total_get_bulk_errors.is_set || is_set(total_get_bulk_errors.yfilter)) leaf_name_data.push_back(total_get_bulk_errors.get_name_leafdata());
    if (total_encode_errors.is_set || is_set(total_encode_errors.yfilter)) leaf_name_data.push_back(total_encode_errors.get_name_leafdata());
    if (total_encode_notready.is_set || is_set(total_encode_notready.yfilter)) leaf_name_data.push_back(total_encode_notready.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.yfilter)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.yfilter)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_sent_bytes.is_set || is_set(total_sent_bytes.yfilter)) leaf_name_data.push_back(total_sent_bytes.get_name_leafdata());
    if (total_send_packets.is_set || is_set(total_send_packets.yfilter)) leaf_name_data.push_back(total_send_packets.get_name_leafdata());
    if (total_send_bytes_dropped.is_set || is_set(total_send_bytes_dropped.yfilter)) leaf_name_data.push_back(total_send_bytes_dropped.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.yfilter)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_collections_missed.is_set || is_set(total_collections_missed.yfilter)) leaf_name_data.push_back(total_collections_missed.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.yfilter)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.yfilter)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (avg_collection_time.is_set || is_set(avg_collection_time.yfilter)) leaf_name_data.push_back(avg_collection_time.get_name_leafdata());
    if (collection_method.is_set || is_set(collection_method.yfilter)) leaf_name_data.push_back(collection_method.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cadence")
    {
        cadence = value;
        cadence.value_namespace = name_space;
        cadence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-count")
    {
        total_get_count = value;
        total_get_count.value_namespace = name_space;
        total_get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-list-count")
    {
        total_list_count = value;
        total_list_count.value_namespace = name_space;
        total_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count = value;
        total_datalist_count.value_namespace = name_space;
        total_datalist_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count = value;
        total_finddata_count.value_namespace = name_space;
        total_finddata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count = value;
        total_get_bulk_count.value_namespace = name_space;
        total_get_bulk_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-item-count")
    {
        total_item_count = value;
        total_item_count.value_namespace = name_space;
        total_item_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors = value;
        total_get_errors.value_namespace = name_space;
        total_get_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors = value;
        total_list_errors.value_namespace = name_space;
        total_list_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors = value;
        total_datalist_errors.value_namespace = name_space;
        total_datalist_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors = value;
        total_finddata_errors.value_namespace = name_space;
        total_finddata_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors = value;
        total_get_bulk_errors.value_namespace = name_space;
        total_get_bulk_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors = value;
        total_encode_errors.value_namespace = name_space;
        total_encode_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready = value;
        total_encode_notready.value_namespace = name_space;
        total_encode_notready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
        total_send_errors.value_namespace = name_space;
        total_send_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
        total_send_drops.value_namespace = name_space;
        total_send_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes = value;
        total_sent_bytes.value_namespace = name_space;
        total_sent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets = value;
        total_send_packets.value_namespace = name_space;
        total_send_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped = value;
        total_send_bytes_dropped.value_namespace = name_space;
        total_send_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
        total_collections.value_namespace = name_space;
        total_collections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed = value;
        total_collections_missed.value_namespace = name_space;
        total_collections_missed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
        max_collection_time.value_namespace = name_space;
        max_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
        min_collection_time.value_namespace = name_space;
        min_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-collection-time")
    {
        avg_collection_time = value;
        avg_collection_time.value_namespace = name_space;
        avg_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-method")
    {
        collection_method = value;
        collection_method.value_namespace = name_space;
        collection_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "cadence")
    {
        cadence.yfilter = yfilter;
    }
    if(value_path == "total-get-count")
    {
        total_get_count.yfilter = yfilter;
    }
    if(value_path == "total-list-count")
    {
        total_list_count.yfilter = yfilter;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count.yfilter = yfilter;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count.yfilter = yfilter;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count.yfilter = yfilter;
    }
    if(value_path == "total-item-count")
    {
        total_item_count.yfilter = yfilter;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors.yfilter = yfilter;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors.yfilter = yfilter;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors.yfilter = yfilter;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors.yfilter = yfilter;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors.yfilter = yfilter;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors.yfilter = yfilter;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready.yfilter = yfilter;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors.yfilter = yfilter;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops.yfilter = yfilter;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes.yfilter = yfilter;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets.yfilter = yfilter;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "total-collections")
    {
        total_collections.yfilter = yfilter;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed.yfilter = yfilter;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time.yfilter = yfilter;
    }
    if(value_path == "avg-collection-time")
    {
        avg_collection_time.yfilter = yfilter;
    }
    if(value_path == "collection-method")
    {
        collection_method.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "cadence" || name == "total-get-count" || name == "total-list-count" || name == "total-datalist-count" || name == "total-finddata-count" || name == "total-get-bulk-count" || name == "total-item-count" || name == "total-get-errors" || name == "total-list-errors" || name == "total-datalist-errors" || name == "total-finddata-errors" || name == "total-get-bulk-errors" || name == "total-encode-errors" || name == "total-encode-notready" || name == "total-send-errors" || name == "total-send-drops" || name == "total-sent-bytes" || name == "total-send-packets" || name == "total-send-bytes-dropped" || name == "total-collections" || name == "total-collections-missed" || name == "max-collection-time" || name == "min-collection-time" || name == "avg-collection-time" || name == "collection-method" || name == "status")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscriptions()
{

    yang_name = "subscriptions"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Subscriptions::~Subscriptions()
{
}

bool TelemetryModelDriven::Subscriptions::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::Subscriptions::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::Subscriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription>();
        c->parent = this;
        subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::Subscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::Subscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription()
    :
    subscription_id{YType::str, "subscription-id"}
    	,
    subscription(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_>())
{
    subscription->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscriptions"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::Subscriptions::Subscription::~Subscription()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_data() const
{
    for (std::size_t index=0; index<collection_group.size(); index++)
    {
        if(collection_group[index]->has_data())
            return true;
    }
    return subscription_id.is_set
	|| (subscription !=  nullptr && subscription->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_operation() const
{
    for (std::size_t index=0; index<collection_group.size(); index++)
    {
        if(collection_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| (subscription !=  nullptr && subscription->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/subscriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::Subscriptions::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        if(subscription == nullptr)
        {
            subscription = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_>();
        }
        return subscription;
    }

    if(child_yang_name == "collection-group")
    {
        for(auto const & c : collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup>();
        c->parent = this;
        collection_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscription != nullptr)
    {
        children["subscription"] = subscription;
    }

    for (auto const & c : collection_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription" || name == "collection-group" || name == "subscription-id")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::Subscription_()
    :
    id{YType::str, "id"},
    state{YType::enumeration, "state"},
    source_qos_marking{YType::enumeration, "source-qos-marking"}
    	,
    source_interface(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::~Subscription_()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::has_data() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_grp.size(); index++)
    {
        if(destination_grp[index]->has_data())
            return true;
    }
    return id.is_set
	|| state.is_set
	|| source_qos_marking.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::has_operation() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_grp.size(); index++)
    {
        if(destination_grp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(source_qos_marking.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (source_qos_marking.is_set || is_set(source_qos_marking.yfilter)) leaf_name_data.push_back(source_qos_marking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "sensor-profile")
    {
        for(auto const & c : sensor_profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile>();
        c->parent = this;
        sensor_profile.push_back(c);
        return c;
    }

    if(child_yang_name == "destination-grp")
    {
        for(auto const & c : destination_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp>();
        c->parent = this;
        destination_grp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    for (auto const & c : sensor_profile)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : destination_grp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-qos-marking")
    {
        source_qos_marking = value;
        source_qos_marking.value_namespace = name_space;
        source_qos_marking.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "source-qos-marking")
    {
        source_qos_marking.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "sensor-profile" || name == "destination-grp" || name == "id" || name == "state" || name == "source-qos-marking")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::SourceInterface()
    :
    interface_name{YType::str, "interface-name"},
    state{YType::boolean, "state"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "source-interface"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::~SourceInterface()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::has_data() const
{
    return interface_name.is_set
	|| state.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| vrf_id.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "state" || name == "ipv4-address" || name == "ipv6-address" || name == "vrf-id")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorProfile()
    :
    sample_interval{YType::uint32, "sample-interval"},
    heartbeat_interval{YType::uint32, "heartbeat-interval"},
    suppress_redundant{YType::boolean, "suppress-redundant"}
    	,
    sensor_group(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup>())
{
    sensor_group->parent = this;

    yang_name = "sensor-profile"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::~SensorProfile()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::has_data() const
{
    return sample_interval.is_set
	|| heartbeat_interval.is_set
	|| suppress_redundant.is_set
	|| (sensor_group !=  nullptr && sensor_group->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(heartbeat_interval.yfilter)
	|| ydk::is_set(suppress_redundant.yfilter)
	|| (sensor_group !=  nullptr && sensor_group->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (heartbeat_interval.is_set || is_set(heartbeat_interval.yfilter)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.yfilter)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-group")
    {
        if(sensor_group == nullptr)
        {
            sensor_group = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup>();
        }
        return sensor_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sensor_group != nullptr)
    {
        children["sensor-group"] = sensor_group;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
        heartbeat_interval.value_namespace = name_space;
        heartbeat_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
        suppress_redundant.value_namespace = name_space;
        suppress_redundant.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval.yfilter = yfilter;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group" || name == "sample-interval" || name == "heartbeat-interval" || name == "suppress-redundant")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorGroup()
    :
    id{YType::str, "id"},
    configured{YType::uint32, "configured"}
{

    yang_name = "sensor-group"; yang_parent_name = "sensor-profile"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::~SensorGroup()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::has_data() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return id.is_set
	|| configured.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configured.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath>();
        c->parent = this;
        sensor_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-path" || name == "id" || name == "configured")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::SensorPath()
    :
    path{YType::str, "path"},
    state{YType::boolean, "state"},
    status_str{YType::str, "status-str"}
{

    yang_name = "sensor-path"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::~SensorPath()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::has_data() const
{
    return path.is_set
	|| state.is_set
	|| status_str.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(status_str.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.yfilter)) leaf_name_data.push_back(status_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-str")
    {
        status_str = value;
        status_str.value_namespace = name_space;
        status_str.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "status-str")
    {
        status_str.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "state" || name == "status-str")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::DestinationGrp()
    :
    id{YType::str, "id"},
    configured{YType::uint32, "configured"}
{

    yang_name = "destination-grp"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::~DestinationGrp()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return id.is_set
	|| configured.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configured.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-grp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "id" || name == "configured")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::Destination()
    :
    id{YType::str, "id"},
    sub_id_str{YType::str, "sub-id-str"},
    dest_port{YType::uint16, "dest-port"},
    encoding{YType::enumeration, "encoding"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"},
    vrf_id{YType::uint32, "vrf-id"},
    state{YType::enumeration, "state"},
    udp_mtu{YType::uint32, "udp-mtu"},
    tls{YType::uint32, "tls"},
    tls_host{YType::str, "tls-host"},
    total_num_of_packets_sent{YType::uint64, "total-num-of-packets-sent"},
    total_num_of_bytes_sent{YType::uint64, "total-num-of-bytes-sent"},
    last_collection_time{YType::uint64, "last-collection-time"},
    dscp{YType::uint32, "dscp"},
    sub_id{YType::uint64, "sub-id"}
    	,
    dest_ip_address(std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress>())
{
    dest_ip_address->parent = this;

    yang_name = "destination"; yang_parent_name = "destination-grp"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::~Destination()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::has_data() const
{
    for (auto const & leaf : sub_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| sub_id_str.is_set
	|| dest_port.is_set
	|| encoding.is_set
	|| transport.is_set
	|| vrf.is_set
	|| vrf_id.is_set
	|| state.is_set
	|| udp_mtu.is_set
	|| tls.is_set
	|| tls_host.is_set
	|| total_num_of_packets_sent.is_set
	|| total_num_of_bytes_sent.is_set
	|| last_collection_time.is_set
	|| dscp.is_set
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::has_operation() const
{
    for (auto const & leaf : sub_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(sub_id_str.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(udp_mtu.yfilter)
	|| ydk::is_set(tls.yfilter)
	|| ydk::is_set(tls_host.yfilter)
	|| ydk::is_set(total_num_of_packets_sent.yfilter)
	|| ydk::is_set(total_num_of_bytes_sent.yfilter)
	|| ydk::is_set(last_collection_time.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (sub_id_str.is_set || is_set(sub_id_str.yfilter)) leaf_name_data.push_back(sub_id_str.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (udp_mtu.is_set || is_set(udp_mtu.yfilter)) leaf_name_data.push_back(udp_mtu.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (tls_host.is_set || is_set(tls_host.yfilter)) leaf_name_data.push_back(tls_host.get_name_leafdata());
    if (total_num_of_packets_sent.is_set || is_set(total_num_of_packets_sent.yfilter)) leaf_name_data.push_back(total_num_of_packets_sent.get_name_leafdata());
    if (total_num_of_bytes_sent.is_set || is_set(total_num_of_bytes_sent.yfilter)) leaf_name_data.push_back(total_num_of_bytes_sent.get_name_leafdata());
    if (last_collection_time.is_set || is_set(last_collection_time.yfilter)) leaf_name_data.push_back(last_collection_time.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    auto sub_id_name_datas = sub_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sub_id_name_datas.begin(), sub_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-ip-address")
    {
        if(dest_ip_address == nullptr)
        {
            dest_ip_address = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress>();
        }
        return dest_ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_ip_address != nullptr)
    {
        children["dest-ip-address"] = dest_ip_address;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id-str")
    {
        sub_id_str = value;
        sub_id_str.value_namespace = name_space;
        sub_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-mtu")
    {
        udp_mtu = value;
        udp_mtu.value_namespace = name_space;
        udp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls")
    {
        tls = value;
        tls.value_namespace = name_space;
        tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-host")
    {
        tls_host = value;
        tls_host.value_namespace = name_space;
        tls_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent = value;
        total_num_of_packets_sent.value_namespace = name_space;
        total_num_of_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent = value;
        total_num_of_bytes_sent.value_namespace = name_space;
        total_num_of_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time = value;
        last_collection_time.value_namespace = name_space;
        last_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id.append(value);
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "sub-id-str")
    {
        sub_id_str.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "udp-mtu")
    {
        udp_mtu.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
    if(value_path == "tls-host")
    {
        tls_host.yfilter = yfilter;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent.yfilter = yfilter;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip-address" || name == "id" || name == "sub-id-str" || name == "dest-port" || name == "encoding" || name == "transport" || name == "vrf" || name == "vrf-id" || name == "state" || name == "udp-mtu" || name == "tls" || name == "tls-host" || name == "total-num-of-packets-sent" || name == "total-num-of-bytes-sent" || name == "last-collection-time" || name == "dscp" || name == "sub-id")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::DestIpAddress()
    :
    ip_type{YType::enumeration, "ip-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dest-ip-address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::~DestIpAddress()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::has_data() const
{
    return ip_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_type.is_set || is_set(ip_type.yfilter)) leaf_name_data.push_back(ip_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-type")
    {
        ip_type = value;
        ip_type.value_namespace = name_space;
        ip_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-type")
    {
        ip_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionGroup()
    :
    id{YType::uint64, "id"},
    cadence{YType::uint32, "cadence"},
    total_collections{YType::uint32, "total-collections"},
    encoding{YType::enumeration, "encoding"},
    last_collection_start_time{YType::uint64, "last-collection-start-time"},
    last_collection_end_time{YType::uint64, "last-collection-end-time"},
    max_collection_time{YType::uint32, "max-collection-time"},
    min_collection_time{YType::uint32, "min-collection-time"},
    min_total_time{YType::uint32, "min-total-time"},
    max_total_time{YType::uint32, "max-total-time"},
    avg_total_time{YType::uint32, "avg-total-time"},
    total_other_errors{YType::uint32, "total-other-errors"},
    total_on_data_instances{YType::uint32, "total-on-data-instances"},
    total_not_ready{YType::uint32, "total-not-ready"},
    total_send_errors{YType::uint32, "total-send-errors"},
    total_send_drops{YType::uint32, "total-send-drops"}
{

    yang_name = "collection-group"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::~CollectionGroup()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::has_data() const
{
    for (std::size_t index=0; index<collection_path.size(); index++)
    {
        if(collection_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_collection_group.size(); index++)
    {
        if(internal_collection_group[index]->has_data())
            return true;
    }
    return id.is_set
	|| cadence.is_set
	|| total_collections.is_set
	|| encoding.is_set
	|| last_collection_start_time.is_set
	|| last_collection_end_time.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| min_total_time.is_set
	|| max_total_time.is_set
	|| avg_total_time.is_set
	|| total_other_errors.is_set
	|| total_on_data_instances.is_set
	|| total_not_ready.is_set
	|| total_send_errors.is_set
	|| total_send_drops.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::has_operation() const
{
    for (std::size_t index=0; index<collection_path.size(); index++)
    {
        if(collection_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_collection_group.size(); index++)
    {
        if(internal_collection_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cadence.yfilter)
	|| ydk::is_set(total_collections.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(last_collection_start_time.yfilter)
	|| ydk::is_set(last_collection_end_time.yfilter)
	|| ydk::is_set(max_collection_time.yfilter)
	|| ydk::is_set(min_collection_time.yfilter)
	|| ydk::is_set(min_total_time.yfilter)
	|| ydk::is_set(max_total_time.yfilter)
	|| ydk::is_set(avg_total_time.yfilter)
	|| ydk::is_set(total_other_errors.yfilter)
	|| ydk::is_set(total_on_data_instances.yfilter)
	|| ydk::is_set(total_not_ready.yfilter)
	|| ydk::is_set(total_send_errors.yfilter)
	|| ydk::is_set(total_send_drops.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.yfilter)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.yfilter)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (last_collection_start_time.is_set || is_set(last_collection_start_time.yfilter)) leaf_name_data.push_back(last_collection_start_time.get_name_leafdata());
    if (last_collection_end_time.is_set || is_set(last_collection_end_time.yfilter)) leaf_name_data.push_back(last_collection_end_time.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.yfilter)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.yfilter)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (min_total_time.is_set || is_set(min_total_time.yfilter)) leaf_name_data.push_back(min_total_time.get_name_leafdata());
    if (max_total_time.is_set || is_set(max_total_time.yfilter)) leaf_name_data.push_back(max_total_time.get_name_leafdata());
    if (avg_total_time.is_set || is_set(avg_total_time.yfilter)) leaf_name_data.push_back(avg_total_time.get_name_leafdata());
    if (total_other_errors.is_set || is_set(total_other_errors.yfilter)) leaf_name_data.push_back(total_other_errors.get_name_leafdata());
    if (total_on_data_instances.is_set || is_set(total_on_data_instances.yfilter)) leaf_name_data.push_back(total_on_data_instances.get_name_leafdata());
    if (total_not_ready.is_set || is_set(total_not_ready.yfilter)) leaf_name_data.push_back(total_not_ready.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.yfilter)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.yfilter)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collection-path")
    {
        for(auto const & c : collection_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath>();
        c->parent = this;
        collection_path.push_back(c);
        return c;
    }

    if(child_yang_name == "internal-collection-group")
    {
        for(auto const & c : internal_collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup>();
        c->parent = this;
        internal_collection_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : collection_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : internal_collection_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cadence")
    {
        cadence = value;
        cadence.value_namespace = name_space;
        cadence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
        total_collections.value_namespace = name_space;
        total_collections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time = value;
        last_collection_start_time.value_namespace = name_space;
        last_collection_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time = value;
        last_collection_end_time.value_namespace = name_space;
        last_collection_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
        max_collection_time.value_namespace = name_space;
        max_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
        min_collection_time.value_namespace = name_space;
        min_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-total-time")
    {
        min_total_time = value;
        min_total_time.value_namespace = name_space;
        min_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-total-time")
    {
        max_total_time = value;
        max_total_time.value_namespace = name_space;
        max_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-total-time")
    {
        avg_total_time = value;
        avg_total_time.value_namespace = name_space;
        avg_total_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors = value;
        total_other_errors.value_namespace = name_space;
        total_other_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-on-data-instances")
    {
        total_on_data_instances = value;
        total_on_data_instances.value_namespace = name_space;
        total_on_data_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready = value;
        total_not_ready.value_namespace = name_space;
        total_not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
        total_send_errors.value_namespace = name_space;
        total_send_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
        total_send_drops.value_namespace = name_space;
        total_send_drops.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cadence")
    {
        cadence.yfilter = yfilter;
    }
    if(value_path == "total-collections")
    {
        total_collections.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time.yfilter = yfilter;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time.yfilter = yfilter;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-total-time")
    {
        min_total_time.yfilter = yfilter;
    }
    if(value_path == "max-total-time")
    {
        max_total_time.yfilter = yfilter;
    }
    if(value_path == "avg-total-time")
    {
        avg_total_time.yfilter = yfilter;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors.yfilter = yfilter;
    }
    if(value_path == "total-on-data-instances")
    {
        total_on_data_instances.yfilter = yfilter;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready.yfilter = yfilter;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors.yfilter = yfilter;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection-path" || name == "internal-collection-group" || name == "id" || name == "cadence" || name == "total-collections" || name == "encoding" || name == "last-collection-start-time" || name == "last-collection-end-time" || name == "max-collection-time" || name == "min-collection-time" || name == "min-total-time" || name == "max-total-time" || name == "avg-total-time" || name == "total-other-errors" || name == "total-on-data-instances" || name == "total-not-ready" || name == "total-send-errors" || name == "total-send-drops")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::CollectionPath()
    :
    path{YType::str, "path"},
    state{YType::boolean, "state"},
    status_str{YType::str, "status-str"}
{

    yang_name = "collection-path"; yang_parent_name = "collection-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::~CollectionPath()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::has_data() const
{
    return path.is_set
	|| state.is_set
	|| status_str.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(status_str.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.yfilter)) leaf_name_data.push_back(status_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-str")
    {
        status_str = value;
        status_str.value_namespace = name_space;
        status_str.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "status-str")
    {
        status_str.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "state" || name == "status-str")
        return true;
    return false;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::InternalCollectionGroup()
    :
    path{YType::str, "path"},
    cadence{YType::uint64, "cadence"},
    total_get_count{YType::uint64, "total-get-count"},
    total_list_count{YType::uint64, "total-list-count"},
    total_datalist_count{YType::uint64, "total-datalist-count"},
    total_finddata_count{YType::uint64, "total-finddata-count"},
    total_get_bulk_count{YType::uint64, "total-get-bulk-count"},
    total_item_count{YType::uint64, "total-item-count"},
    total_get_errors{YType::uint64, "total-get-errors"},
    total_list_errors{YType::uint64, "total-list-errors"},
    total_datalist_errors{YType::uint64, "total-datalist-errors"},
    total_finddata_errors{YType::uint64, "total-finddata-errors"},
    total_get_bulk_errors{YType::uint64, "total-get-bulk-errors"},
    total_encode_errors{YType::uint64, "total-encode-errors"},
    total_encode_notready{YType::uint64, "total-encode-notready"},
    total_send_errors{YType::uint64, "total-send-errors"},
    total_send_drops{YType::uint64, "total-send-drops"},
    total_sent_bytes{YType::uint64, "total-sent-bytes"},
    total_send_packets{YType::uint64, "total-send-packets"},
    total_send_bytes_dropped{YType::uint64, "total-send-bytes-dropped"},
    total_collections{YType::uint64, "total-collections"},
    total_collections_missed{YType::uint64, "total-collections-missed"},
    max_collection_time{YType::uint64, "max-collection-time"},
    min_collection_time{YType::uint64, "min-collection-time"},
    avg_collection_time{YType::uint64, "avg-collection-time"},
    collection_method{YType::uint64, "collection-method"},
    status{YType::enumeration, "status"}
{

    yang_name = "internal-collection-group"; yang_parent_name = "collection-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::~InternalCollectionGroup()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::has_data() const
{
    return path.is_set
	|| cadence.is_set
	|| total_get_count.is_set
	|| total_list_count.is_set
	|| total_datalist_count.is_set
	|| total_finddata_count.is_set
	|| total_get_bulk_count.is_set
	|| total_item_count.is_set
	|| total_get_errors.is_set
	|| total_list_errors.is_set
	|| total_datalist_errors.is_set
	|| total_finddata_errors.is_set
	|| total_get_bulk_errors.is_set
	|| total_encode_errors.is_set
	|| total_encode_notready.is_set
	|| total_send_errors.is_set
	|| total_send_drops.is_set
	|| total_sent_bytes.is_set
	|| total_send_packets.is_set
	|| total_send_bytes_dropped.is_set
	|| total_collections.is_set
	|| total_collections_missed.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| avg_collection_time.is_set
	|| collection_method.is_set
	|| status.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(cadence.yfilter)
	|| ydk::is_set(total_get_count.yfilter)
	|| ydk::is_set(total_list_count.yfilter)
	|| ydk::is_set(total_datalist_count.yfilter)
	|| ydk::is_set(total_finddata_count.yfilter)
	|| ydk::is_set(total_get_bulk_count.yfilter)
	|| ydk::is_set(total_item_count.yfilter)
	|| ydk::is_set(total_get_errors.yfilter)
	|| ydk::is_set(total_list_errors.yfilter)
	|| ydk::is_set(total_datalist_errors.yfilter)
	|| ydk::is_set(total_finddata_errors.yfilter)
	|| ydk::is_set(total_get_bulk_errors.yfilter)
	|| ydk::is_set(total_encode_errors.yfilter)
	|| ydk::is_set(total_encode_notready.yfilter)
	|| ydk::is_set(total_send_errors.yfilter)
	|| ydk::is_set(total_send_drops.yfilter)
	|| ydk::is_set(total_sent_bytes.yfilter)
	|| ydk::is_set(total_send_packets.yfilter)
	|| ydk::is_set(total_send_bytes_dropped.yfilter)
	|| ydk::is_set(total_collections.yfilter)
	|| ydk::is_set(total_collections_missed.yfilter)
	|| ydk::is_set(max_collection_time.yfilter)
	|| ydk::is_set(min_collection_time.yfilter)
	|| ydk::is_set(avg_collection_time.yfilter)
	|| ydk::is_set(collection_method.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-collection-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.yfilter)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (total_get_count.is_set || is_set(total_get_count.yfilter)) leaf_name_data.push_back(total_get_count.get_name_leafdata());
    if (total_list_count.is_set || is_set(total_list_count.yfilter)) leaf_name_data.push_back(total_list_count.get_name_leafdata());
    if (total_datalist_count.is_set || is_set(total_datalist_count.yfilter)) leaf_name_data.push_back(total_datalist_count.get_name_leafdata());
    if (total_finddata_count.is_set || is_set(total_finddata_count.yfilter)) leaf_name_data.push_back(total_finddata_count.get_name_leafdata());
    if (total_get_bulk_count.is_set || is_set(total_get_bulk_count.yfilter)) leaf_name_data.push_back(total_get_bulk_count.get_name_leafdata());
    if (total_item_count.is_set || is_set(total_item_count.yfilter)) leaf_name_data.push_back(total_item_count.get_name_leafdata());
    if (total_get_errors.is_set || is_set(total_get_errors.yfilter)) leaf_name_data.push_back(total_get_errors.get_name_leafdata());
    if (total_list_errors.is_set || is_set(total_list_errors.yfilter)) leaf_name_data.push_back(total_list_errors.get_name_leafdata());
    if (total_datalist_errors.is_set || is_set(total_datalist_errors.yfilter)) leaf_name_data.push_back(total_datalist_errors.get_name_leafdata());
    if (total_finddata_errors.is_set || is_set(total_finddata_errors.yfilter)) leaf_name_data.push_back(total_finddata_errors.get_name_leafdata());
    if (total_get_bulk_errors.is_set || is_set(total_get_bulk_errors.yfilter)) leaf_name_data.push_back(total_get_bulk_errors.get_name_leafdata());
    if (total_encode_errors.is_set || is_set(total_encode_errors.yfilter)) leaf_name_data.push_back(total_encode_errors.get_name_leafdata());
    if (total_encode_notready.is_set || is_set(total_encode_notready.yfilter)) leaf_name_data.push_back(total_encode_notready.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.yfilter)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.yfilter)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_sent_bytes.is_set || is_set(total_sent_bytes.yfilter)) leaf_name_data.push_back(total_sent_bytes.get_name_leafdata());
    if (total_send_packets.is_set || is_set(total_send_packets.yfilter)) leaf_name_data.push_back(total_send_packets.get_name_leafdata());
    if (total_send_bytes_dropped.is_set || is_set(total_send_bytes_dropped.yfilter)) leaf_name_data.push_back(total_send_bytes_dropped.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.yfilter)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_collections_missed.is_set || is_set(total_collections_missed.yfilter)) leaf_name_data.push_back(total_collections_missed.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.yfilter)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.yfilter)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (avg_collection_time.is_set || is_set(avg_collection_time.yfilter)) leaf_name_data.push_back(avg_collection_time.get_name_leafdata());
    if (collection_method.is_set || is_set(collection_method.yfilter)) leaf_name_data.push_back(collection_method.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cadence")
    {
        cadence = value;
        cadence.value_namespace = name_space;
        cadence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-count")
    {
        total_get_count = value;
        total_get_count.value_namespace = name_space;
        total_get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-list-count")
    {
        total_list_count = value;
        total_list_count.value_namespace = name_space;
        total_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count = value;
        total_datalist_count.value_namespace = name_space;
        total_datalist_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count = value;
        total_finddata_count.value_namespace = name_space;
        total_finddata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count = value;
        total_get_bulk_count.value_namespace = name_space;
        total_get_bulk_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-item-count")
    {
        total_item_count = value;
        total_item_count.value_namespace = name_space;
        total_item_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors = value;
        total_get_errors.value_namespace = name_space;
        total_get_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors = value;
        total_list_errors.value_namespace = name_space;
        total_list_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors = value;
        total_datalist_errors.value_namespace = name_space;
        total_datalist_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors = value;
        total_finddata_errors.value_namespace = name_space;
        total_finddata_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors = value;
        total_get_bulk_errors.value_namespace = name_space;
        total_get_bulk_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors = value;
        total_encode_errors.value_namespace = name_space;
        total_encode_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready = value;
        total_encode_notready.value_namespace = name_space;
        total_encode_notready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
        total_send_errors.value_namespace = name_space;
        total_send_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
        total_send_drops.value_namespace = name_space;
        total_send_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes = value;
        total_sent_bytes.value_namespace = name_space;
        total_sent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets = value;
        total_send_packets.value_namespace = name_space;
        total_send_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped = value;
        total_send_bytes_dropped.value_namespace = name_space;
        total_send_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
        total_collections.value_namespace = name_space;
        total_collections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed = value;
        total_collections_missed.value_namespace = name_space;
        total_collections_missed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
        max_collection_time.value_namespace = name_space;
        max_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
        min_collection_time.value_namespace = name_space;
        min_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-collection-time")
    {
        avg_collection_time = value;
        avg_collection_time.value_namespace = name_space;
        avg_collection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-method")
    {
        collection_method = value;
        collection_method.value_namespace = name_space;
        collection_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "cadence")
    {
        cadence.yfilter = yfilter;
    }
    if(value_path == "total-get-count")
    {
        total_get_count.yfilter = yfilter;
    }
    if(value_path == "total-list-count")
    {
        total_list_count.yfilter = yfilter;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count.yfilter = yfilter;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count.yfilter = yfilter;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count.yfilter = yfilter;
    }
    if(value_path == "total-item-count")
    {
        total_item_count.yfilter = yfilter;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors.yfilter = yfilter;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors.yfilter = yfilter;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors.yfilter = yfilter;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors.yfilter = yfilter;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors.yfilter = yfilter;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors.yfilter = yfilter;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready.yfilter = yfilter;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors.yfilter = yfilter;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops.yfilter = yfilter;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes.yfilter = yfilter;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets.yfilter = yfilter;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "total-collections")
    {
        total_collections.yfilter = yfilter;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed.yfilter = yfilter;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time.yfilter = yfilter;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time.yfilter = yfilter;
    }
    if(value_path == "avg-collection-time")
    {
        avg_collection_time.yfilter = yfilter;
    }
    if(value_path == "collection-method")
    {
        collection_method.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "cadence" || name == "total-get-count" || name == "total-list-count" || name == "total-datalist-count" || name == "total-finddata-count" || name == "total-get-bulk-count" || name == "total-item-count" || name == "total-get-errors" || name == "total-list-errors" || name == "total-datalist-errors" || name == "total-finddata-errors" || name == "total-get-bulk-errors" || name == "total-encode-errors" || name == "total-encode-notready" || name == "total-send-errors" || name == "total-send-drops" || name == "total-sent-bytes" || name == "total-send-packets" || name == "total-send-bytes-dropped" || name == "total-collections" || name == "total-collections-missed" || name == "max-collection-time" || name == "min-collection-time" || name == "avg-collection-time" || name == "collection-method" || name == "status")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroups()
{

    yang_name = "sensor-groups"; yang_parent_name = "telemetry-model-driven"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::SensorGroups::~SensorGroups()
{
}

bool TelemetryModelDriven::SensorGroups::has_data() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetryModelDriven::SensorGroups::has_operation() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TelemetryModelDriven::SensorGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::SensorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-group")
    {
        for(auto const & c : sensor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup>();
        c->parent = this;
        sensor_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TelemetryModelDriven::SensorGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TelemetryModelDriven::SensorGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-group")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorGroup()
    :
    sensor_group_id{YType::str, "sensor-group-id"},
    id{YType::str, "id"},
    configured{YType::uint32, "configured"}
{

    yang_name = "sensor-group"; yang_parent_name = "sensor-groups"; is_top_level_class = false; has_list_ancestor = false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::~SensorGroup()
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_data() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return sensor_group_id.is_set
	|| id.is_set
	|| configured.is_set;
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sensor_group_id.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configured.yfilter);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/sensor-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group" <<"[sensor-group-id='" <<sensor_group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::SensorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.yfilter)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath>();
        c->parent = this;
        sensor_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::SensorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
        sensor_group_id.value_namespace = name_space;
        sensor_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::SensorGroups::SensorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-path" || name == "sensor-group-id" || name == "id" || name == "configured")
        return true;
    return false;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::SensorPath()
    :
    path{YType::str, "path"},
    state{YType::boolean, "state"},
    status_str{YType::str, "status-str"}
{

    yang_name = "sensor-path"; yang_parent_name = "sensor-group"; is_top_level_class = false; has_list_ancestor = true;
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::~SensorPath()
{
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::has_data() const
{
    return path.is_set
	|| state.is_set
	|| status_str.is_set;
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(status_str.yfilter);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.yfilter)) leaf_name_data.push_back(status_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-str")
    {
        status_str = value;
        status_str.value_namespace = name_space;
        status_str.value_namespace_prefix = name_space_prefix;
    }
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "status-str")
    {
        status_str.yfilter = yfilter;
    }
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "state" || name == "status-str")
        return true;
    return false;
}

const Enum::YLeaf MdtSourceQosMarking::dscp_default {0, "dscp-default"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs1 {8, "dscp-cs1"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af11 {10, "dscp-af11"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af12 {12, "dscp-af12"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af13 {14, "dscp-af13"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs2 {16, "dscp-cs2"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af21 {18, "dscp-af21"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af22 {20, "dscp-af22"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af23 {22, "dscp-af23"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs3 {24, "dscp-cs3"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af31 {26, "dscp-af31"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af32 {28, "dscp-af32"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af33 {30, "dscp-af33"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs4 {32, "dscp-cs4"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af41 {34, "dscp-af41"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af42 {36, "dscp-af42"};
const Enum::YLeaf MdtSourceQosMarking::dscp_af43 {38, "dscp-af43"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs5 {40, "dscp-cs5"};
const Enum::YLeaf MdtSourceQosMarking::dscp_ef {46, "dscp-ef"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs6 {48, "dscp-cs6"};
const Enum::YLeaf MdtSourceQosMarking::dscp_cs7 {56, "dscp-cs7"};

const Enum::YLeaf MdtSubsStateEnum::not_active {0, "not-active"};
const Enum::YLeaf MdtSubsStateEnum::active {1, "active"};
const Enum::YLeaf MdtSubsStateEnum::paused {2, "paused"};

const Enum::YLeaf MdtInternalPathStatus::active {0, "active"};
const Enum::YLeaf MdtInternalPathStatus::internal_err {1, "internal-err"};
const Enum::YLeaf MdtInternalPathStatus::plugin_active {2, "plugin-active"};
const Enum::YLeaf MdtInternalPathStatus::plugin_not_initialized {3, "plugin-not-initialized"};
const Enum::YLeaf MdtInternalPathStatus::plugin_invalid_cadence {4, "plugin-invalid-cadence"};
const Enum::YLeaf MdtInternalPathStatus::plugin_err {5, "plugin-err"};
const Enum::YLeaf MdtInternalPathStatus::filter_err {6, "filter-err"};
const Enum::YLeaf MdtInternalPathStatus::paused {7, "paused"};
const Enum::YLeaf MdtInternalPathStatus::event_ing_active {8, "event-ing-active"};
const Enum::YLeaf MdtInternalPathStatus::event_ing_not_active {9, "event-ing-not-active"};
const Enum::YLeaf MdtInternalPathStatus::event_ing_err {10, "event-ing-err"};

const Enum::YLeaf MdtDestStateEnum::dest_not_active {0, "dest-not-active"};
const Enum::YLeaf MdtDestStateEnum::dest_active {1, "dest-active"};
const Enum::YLeaf MdtDestStateEnum::dest_asking_pause {2, "dest-asking-pause"};
const Enum::YLeaf MdtDestStateEnum::dest_paused {3, "dest-paused"};
const Enum::YLeaf MdtDestStateEnum::dest_resuming {4, "dest-resuming"};
const Enum::YLeaf MdtDestStateEnum::dest_channel_not_found {5, "dest-channel-not-found"};

const Enum::YLeaf MdtTransportEnum::not_set {0, "not-set"};
const Enum::YLeaf MdtTransportEnum::grpc {1, "grpc"};
const Enum::YLeaf MdtTransportEnum::tcp {2, "tcp"};
const Enum::YLeaf MdtTransportEnum::udp {3, "udp"};
const Enum::YLeaf MdtTransportEnum::dialin {6, "dialin"};

const Enum::YLeaf MdtEncodingEnum::not_set {0, "not-set"};
const Enum::YLeaf MdtEncodingEnum::gpb {2, "gpb"};
const Enum::YLeaf MdtEncodingEnum::self_describing_gpb {3, "self-describing-gpb"};
const Enum::YLeaf MdtEncodingEnum::json {4, "json"};

const Enum::YLeaf MdtIp::ipv4 {1, "ipv4"};
const Enum::YLeaf MdtIp::ipv6 {2, "ipv6"};


}
}

