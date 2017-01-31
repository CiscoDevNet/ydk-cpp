
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_telemetry_model_driven_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_telemetry_model_driven_oper {

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::DestIpAddress()
    :
    	ip_type{YType::enumeration, "ip-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dest-ip-address"; yang_parent_name = "destination";
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
    return is_set(operation)
	|| is_set(ip_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ip-address";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_type.is_set || is_set(ip_type.operation)) leaf_name_data.push_back(ip_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::get_children()
{
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-type")
    {
        ip_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::Destination__()
    :
    	dest_port{YType::uint16, "dest-port"},
	 encoding{YType::enumeration, "encoding"},
	 id{YType::str, "id"},
	 last_collection_time{YType::uint64, "last-collection-time"},
	 state{YType::uint32, "state"},
	 tls{YType::uint32, "tls"},
	 tls_host{YType::str, "tls-host"},
	 total_num_of_bytes_sent{YType::uint64, "total-num-of-bytes-sent"},
	 total_num_of_packets_sent{YType::uint64, "total-num-of-packets-sent"},
	 transport{YType::enumeration, "transport"}
    	,
    dest_ip_address(std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress>())
{
    dest_ip_address->parent = this;
    children["dest-ip-address"] = dest_ip_address.get();

    yang_name = "destination"; yang_parent_name = "destination";
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::~Destination__()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::has_data() const
{
    return dest_port.is_set
	|| encoding.is_set
	|| id.is_set
	|| last_collection_time.is_set
	|| state.is_set
	|| tls.is_set
	|| tls_host.is_set
	|| total_num_of_bytes_sent.is_set
	|| total_num_of_packets_sent.is_set
	|| transport.is_set
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_data());
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_port.operation)
	|| is_set(encoding.operation)
	|| is_set(id.operation)
	|| is_set(last_collection_time.operation)
	|| is_set(state.operation)
	|| is_set(tls.operation)
	|| is_set(tls_host.operation)
	|| is_set(total_num_of_bytes_sent.operation)
	|| is_set(total_num_of_packets_sent.operation)
	|| is_set(transport.operation)
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_operation());
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_port.is_set || is_set(dest_port.operation)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_collection_time.is_set || is_set(last_collection_time.operation)) leaf_name_data.push_back(last_collection_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tls.is_set || is_set(tls.operation)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (tls_host.is_set || is_set(tls_host.operation)) leaf_name_data.push_back(tls_host.get_name_leafdata());
    if (total_num_of_bytes_sent.is_set || is_set(total_num_of_bytes_sent.operation)) leaf_name_data.push_back(total_num_of_bytes_sent.get_name_leafdata());
    if (total_num_of_packets_sent.is_set || is_set(total_num_of_packets_sent.operation)) leaf_name_data.push_back(total_num_of_packets_sent.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dest-ip-address")
    {
        if(dest_ip_address != nullptr)
        {
            children["dest-ip-address"] = dest_ip_address.get();
        }
        else
        {
            dest_ip_address = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress>();
            dest_ip_address->parent = this;
            children["dest-ip-address"] = dest_ip_address.get();
        }
        return children.at("dest-ip-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::get_children()
{
    if(children.find("dest-ip-address") == children.end())
    {
        if(dest_ip_address != nullptr)
        {
            children["dest-ip-address"] = dest_ip_address.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-port")
    {
        dest_port = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tls")
    {
        tls = value;
    }
    if(value_path == "tls-host")
    {
        tls_host = value;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent = value;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::CollectionPath()
    :
    	path{YType::str, "path"},
	 state{YType::uint32, "state"},
	 status_str{YType::str, "status-str"}
{
    yang_name = "collection-path"; yang_parent_name = "collection-group";
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
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(state.operation)
	|| is_set(status_str.operation);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-path";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.operation)) leaf_name_data.push_back(status_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::get_children()
{
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "status-str")
    {
        status_str = value;
    }
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::InternalCollectionGroup()
    :
    	avg_collection_time{YType::uint64, "avg-collection-time"},
	 cadence{YType::uint64, "cadence"},
	 collection_method{YType::uint64, "collection-method"},
	 max_collection_time{YType::uint64, "max-collection-time"},
	 min_collection_time{YType::uint64, "min-collection-time"},
	 path{YType::str, "path"},
	 total_collections{YType::uint64, "total-collections"},
	 total_collections_missed{YType::uint64, "total-collections-missed"},
	 total_datalist_count{YType::uint64, "total-datalist-count"},
	 total_datalist_errors{YType::uint64, "total-datalist-errors"},
	 total_encode_errors{YType::uint64, "total-encode-errors"},
	 total_encode_notready{YType::uint64, "total-encode-notready"},
	 total_finddata_count{YType::uint64, "total-finddata-count"},
	 total_finddata_errors{YType::uint64, "total-finddata-errors"},
	 total_get_bulk_count{YType::uint64, "total-get-bulk-count"},
	 total_get_bulk_errors{YType::uint64, "total-get-bulk-errors"},
	 total_get_count{YType::uint64, "total-get-count"},
	 total_get_errors{YType::uint64, "total-get-errors"},
	 total_item_count{YType::uint64, "total-item-count"},
	 total_list_count{YType::uint64, "total-list-count"},
	 total_list_errors{YType::uint64, "total-list-errors"},
	 total_send_bytes_dropped{YType::uint64, "total-send-bytes-dropped"},
	 total_send_drops{YType::uint64, "total-send-drops"},
	 total_send_errors{YType::uint64, "total-send-errors"},
	 total_send_packets{YType::uint64, "total-send-packets"},
	 total_sent_bytes{YType::uint64, "total-sent-bytes"}
{
    yang_name = "internal-collection-group"; yang_parent_name = "collection-group";
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::~InternalCollectionGroup()
{
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::has_data() const
{
    return avg_collection_time.is_set
	|| cadence.is_set
	|| collection_method.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| path.is_set
	|| total_collections.is_set
	|| total_collections_missed.is_set
	|| total_datalist_count.is_set
	|| total_datalist_errors.is_set
	|| total_encode_errors.is_set
	|| total_encode_notready.is_set
	|| total_finddata_count.is_set
	|| total_finddata_errors.is_set
	|| total_get_bulk_count.is_set
	|| total_get_bulk_errors.is_set
	|| total_get_count.is_set
	|| total_get_errors.is_set
	|| total_item_count.is_set
	|| total_list_count.is_set
	|| total_list_errors.is_set
	|| total_send_bytes_dropped.is_set
	|| total_send_drops.is_set
	|| total_send_errors.is_set
	|| total_send_packets.is_set
	|| total_sent_bytes.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(avg_collection_time.operation)
	|| is_set(cadence.operation)
	|| is_set(collection_method.operation)
	|| is_set(max_collection_time.operation)
	|| is_set(min_collection_time.operation)
	|| is_set(path.operation)
	|| is_set(total_collections.operation)
	|| is_set(total_collections_missed.operation)
	|| is_set(total_datalist_count.operation)
	|| is_set(total_datalist_errors.operation)
	|| is_set(total_encode_errors.operation)
	|| is_set(total_encode_notready.operation)
	|| is_set(total_finddata_count.operation)
	|| is_set(total_finddata_errors.operation)
	|| is_set(total_get_bulk_count.operation)
	|| is_set(total_get_bulk_errors.operation)
	|| is_set(total_get_count.operation)
	|| is_set(total_get_errors.operation)
	|| is_set(total_item_count.operation)
	|| is_set(total_list_count.operation)
	|| is_set(total_list_errors.operation)
	|| is_set(total_send_bytes_dropped.operation)
	|| is_set(total_send_drops.operation)
	|| is_set(total_send_errors.operation)
	|| is_set(total_send_packets.operation)
	|| is_set(total_sent_bytes.operation);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-collection-group";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_collection_time.is_set || is_set(avg_collection_time.operation)) leaf_name_data.push_back(avg_collection_time.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.operation)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (collection_method.is_set || is_set(collection_method.operation)) leaf_name_data.push_back(collection_method.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.operation)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.operation)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.operation)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_collections_missed.is_set || is_set(total_collections_missed.operation)) leaf_name_data.push_back(total_collections_missed.get_name_leafdata());
    if (total_datalist_count.is_set || is_set(total_datalist_count.operation)) leaf_name_data.push_back(total_datalist_count.get_name_leafdata());
    if (total_datalist_errors.is_set || is_set(total_datalist_errors.operation)) leaf_name_data.push_back(total_datalist_errors.get_name_leafdata());
    if (total_encode_errors.is_set || is_set(total_encode_errors.operation)) leaf_name_data.push_back(total_encode_errors.get_name_leafdata());
    if (total_encode_notready.is_set || is_set(total_encode_notready.operation)) leaf_name_data.push_back(total_encode_notready.get_name_leafdata());
    if (total_finddata_count.is_set || is_set(total_finddata_count.operation)) leaf_name_data.push_back(total_finddata_count.get_name_leafdata());
    if (total_finddata_errors.is_set || is_set(total_finddata_errors.operation)) leaf_name_data.push_back(total_finddata_errors.get_name_leafdata());
    if (total_get_bulk_count.is_set || is_set(total_get_bulk_count.operation)) leaf_name_data.push_back(total_get_bulk_count.get_name_leafdata());
    if (total_get_bulk_errors.is_set || is_set(total_get_bulk_errors.operation)) leaf_name_data.push_back(total_get_bulk_errors.get_name_leafdata());
    if (total_get_count.is_set || is_set(total_get_count.operation)) leaf_name_data.push_back(total_get_count.get_name_leafdata());
    if (total_get_errors.is_set || is_set(total_get_errors.operation)) leaf_name_data.push_back(total_get_errors.get_name_leafdata());
    if (total_item_count.is_set || is_set(total_item_count.operation)) leaf_name_data.push_back(total_item_count.get_name_leafdata());
    if (total_list_count.is_set || is_set(total_list_count.operation)) leaf_name_data.push_back(total_list_count.get_name_leafdata());
    if (total_list_errors.is_set || is_set(total_list_errors.operation)) leaf_name_data.push_back(total_list_errors.get_name_leafdata());
    if (total_send_bytes_dropped.is_set || is_set(total_send_bytes_dropped.operation)) leaf_name_data.push_back(total_send_bytes_dropped.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.operation)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.operation)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_packets.is_set || is_set(total_send_packets.operation)) leaf_name_data.push_back(total_send_packets.get_name_leafdata());
    if (total_sent_bytes.is_set || is_set(total_sent_bytes.operation)) leaf_name_data.push_back(total_sent_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::get_children()
{
    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-collection-time")
    {
        avg_collection_time = value;
    }
    if(value_path == "cadence")
    {
        cadence = value;
    }
    if(value_path == "collection-method")
    {
        collection_method = value;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed = value;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count = value;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors = value;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors = value;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready = value;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count = value;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors = value;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count = value;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors = value;
    }
    if(value_path == "total-get-count")
    {
        total_get_count = value;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors = value;
    }
    if(value_path == "total-item-count")
    {
        total_item_count = value;
    }
    if(value_path == "total-list-count")
    {
        total_list_count = value;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors = value;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped = value;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets = value;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes = value;
    }
}

TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionGroup()
    :
    	avg_total_time{YType::uint32, "avg-total-time"},
	 cadence{YType::uint32, "cadence"},
	 encoding{YType::enumeration, "encoding"},
	 id{YType::uint64, "id"},
	 last_collection_end_time{YType::uint64, "last-collection-end-time"},
	 last_collection_start_time{YType::uint64, "last-collection-start-time"},
	 max_collection_time{YType::uint32, "max-collection-time"},
	 max_total_time{YType::uint32, "max-total-time"},
	 min_collection_time{YType::uint32, "min-collection-time"},
	 min_total_time{YType::uint32, "min-total-time"},
	 total_collections{YType::uint32, "total-collections"},
	 total_not_ready{YType::uint32, "total-not-ready"},
	 total_other_errors{YType::uint32, "total-other-errors"},
	 total_send_drops{YType::uint32, "total-send-drops"},
	 total_send_errors{YType::uint32, "total-send-errors"}
{
    yang_name = "collection-group"; yang_parent_name = "destination";
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
    return avg_total_time.is_set
	|| cadence.is_set
	|| encoding.is_set
	|| id.is_set
	|| last_collection_end_time.is_set
	|| last_collection_start_time.is_set
	|| max_collection_time.is_set
	|| max_total_time.is_set
	|| min_collection_time.is_set
	|| min_total_time.is_set
	|| total_collections.is_set
	|| total_not_ready.is_set
	|| total_other_errors.is_set
	|| total_send_drops.is_set
	|| total_send_errors.is_set;
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
    return is_set(operation)
	|| is_set(avg_total_time.operation)
	|| is_set(cadence.operation)
	|| is_set(encoding.operation)
	|| is_set(id.operation)
	|| is_set(last_collection_end_time.operation)
	|| is_set(last_collection_start_time.operation)
	|| is_set(max_collection_time.operation)
	|| is_set(max_total_time.operation)
	|| is_set(min_collection_time.operation)
	|| is_set(min_total_time.operation)
	|| is_set(total_collections.operation)
	|| is_set(total_not_ready.operation)
	|| is_set(total_other_errors.operation)
	|| is_set(total_send_drops.operation)
	|| is_set(total_send_errors.operation);
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-group";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_total_time.is_set || is_set(avg_total_time.operation)) leaf_name_data.push_back(avg_total_time.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.operation)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_collection_end_time.is_set || is_set(last_collection_end_time.operation)) leaf_name_data.push_back(last_collection_end_time.get_name_leafdata());
    if (last_collection_start_time.is_set || is_set(last_collection_start_time.operation)) leaf_name_data.push_back(last_collection_start_time.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.operation)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (max_total_time.is_set || is_set(max_total_time.operation)) leaf_name_data.push_back(max_total_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.operation)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (min_total_time.is_set || is_set(min_total_time.operation)) leaf_name_data.push_back(min_total_time.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.operation)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_not_ready.is_set || is_set(total_not_ready.operation)) leaf_name_data.push_back(total_not_ready.get_name_leafdata());
    if (total_other_errors.is_set || is_set(total_other_errors.operation)) leaf_name_data.push_back(total_other_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.operation)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.operation)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collection-path")
    {
        for(auto const & c : collection_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath>();
        c->parent = this;
        collection_path.push_back(std::move(c));
        children[segment_path] = collection_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-collection-group")
    {
        for(auto const & c : internal_collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup>();
        c->parent = this;
        internal_collection_group.push_back(std::move(c));
        children[segment_path] = internal_collection_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::get_children()
{
    for (auto const & c : collection_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : internal_collection_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-total-time")
    {
        avg_total_time = value;
    }
    if(value_path == "cadence")
    {
        cadence = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time = value;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time = value;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
    }
    if(value_path == "max-total-time")
    {
        max_total_time = value;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
    }
    if(value_path == "min-total-time")
    {
        min_total_time = value;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready = value;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors = value;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
    }
}

TelemetryModelDriven::Destinations::Destination::Destination_::Destination_()
    :
    destination(std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__>())
{
    destination->parent = this;
    children["destination"] = destination.get();

    yang_name = "destination"; yang_parent_name = "destination";
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
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string TelemetryModelDriven::Destinations::Destination::Destination_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::Destination_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::Destination_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collection-group")
    {
        for(auto const & c : collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup>();
        c->parent = this;
        collection_group.push_back(std::move(c));
        children[segment_path] = collection_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
        else
        {
            destination = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_::Destination__>();
            destination->parent = this;
            children["destination"] = destination.get();
        }
        return children.at("destination");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::Destination_::get_children()
{
    for (auto const & c : collection_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::Destination_::set_value(const std::string & value_path, std::string value)
{
}

TelemetryModelDriven::Destinations::Destination::Destination()
    :
    	destination_id{YType::str, "destination-id"},
	 configured{YType::uint32, "configured"},
	 id{YType::str, "id"}
{
    yang_name = "destination"; yang_parent_name = "destinations";
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
	|| configured.is_set
	|| id.is_set;
}

bool TelemetryModelDriven::Destinations::Destination::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_id.operation)
	|| is_set(configured.operation)
	|| is_set(id.operation);
}

std::string TelemetryModelDriven::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-id='" <<destination_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/destinations/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_id.is_set || is_set(destination_id.operation)) leaf_name_data.push_back(destination_id.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Destinations::Destination::Destination_>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::Destination::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Destinations::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-id")
    {
        destination_id = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

TelemetryModelDriven::Destinations::Destinations()
{
    yang_name = "destinations"; yang_parent_name = "telemetry-model-driven";
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
    return is_set(operation);
}

std::string TelemetryModelDriven::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Destinations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Destinations::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Destinations::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Destinations::set_value(const std::string & value_path, std::string value)
{
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::SensorPath()
    :
    	path{YType::str, "path"},
	 state{YType::uint32, "state"},
	 status_str{YType::str, "status-str"}
{
    yang_name = "sensor-path"; yang_parent_name = "sensor-group";
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
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(state.operation)
	|| is_set(status_str.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.operation)) leaf_name_data.push_back(status_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::get_children()
{
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "status-str")
    {
        status_str = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorGroup()
    :
    	configured{YType::uint32, "configured"},
	 id{YType::str, "id"}
{
    yang_name = "sensor-group"; yang_parent_name = "sensor-profile";
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
    return configured.is_set
	|| id.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(id.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath>();
        c->parent = this;
        sensor_path.push_back(std::move(c));
        children[segment_path] = sensor_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::get_children()
{
    for (auto const & c : sensor_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorProfile()
    :
    	heartbeat_interval{YType::uint32, "heartbeat-interval"},
	 sample_interval{YType::uint32, "sample-interval"},
	 suppress_redundant{YType::boolean, "suppress-redundant"}
    	,
    sensor_group(std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup>())
{
    sensor_group->parent = this;
    children["sensor-group"] = sensor_group.get();

    yang_name = "sensor-profile"; yang_parent_name = "subscription";
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::~SensorProfile()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::has_data() const
{
    return heartbeat_interval.is_set
	|| sample_interval.is_set
	|| suppress_redundant.is_set
	|| (sensor_group !=  nullptr && sensor_group->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(heartbeat_interval.operation)
	|| is_set(sample_interval.operation)
	|| is_set(suppress_redundant.operation)
	|| (sensor_group !=  nullptr && sensor_group->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profile";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heartbeat_interval.is_set || is_set(heartbeat_interval.operation)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.operation)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-group")
    {
        if(sensor_group != nullptr)
        {
            children["sensor-group"] = sensor_group.get();
        }
        else
        {
            sensor_group = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup>();
            sensor_group->parent = this;
            children["sensor-group"] = sensor_group.get();
        }
        return children.at("sensor-group");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::get_children()
{
    if(children.find("sensor-group") == children.end())
    {
        if(sensor_group != nullptr)
        {
            children["sensor-group"] = sensor_group.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::DestIpAddress()
    :
    	ip_type{YType::enumeration, "ip-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dest-ip-address"; yang_parent_name = "destination";
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
    return is_set(operation)
	|| is_set(ip_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ip-address";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_type.is_set || is_set(ip_type.operation)) leaf_name_data.push_back(ip_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::get_children()
{
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-type")
    {
        ip_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::Destination()
    :
    	dest_port{YType::uint16, "dest-port"},
	 encoding{YType::enumeration, "encoding"},
	 id{YType::str, "id"},
	 last_collection_time{YType::uint64, "last-collection-time"},
	 state{YType::uint32, "state"},
	 tls{YType::uint32, "tls"},
	 tls_host{YType::str, "tls-host"},
	 total_num_of_bytes_sent{YType::uint64, "total-num-of-bytes-sent"},
	 total_num_of_packets_sent{YType::uint64, "total-num-of-packets-sent"},
	 transport{YType::enumeration, "transport"}
    	,
    dest_ip_address(std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress>())
{
    dest_ip_address->parent = this;
    children["dest-ip-address"] = dest_ip_address.get();

    yang_name = "destination"; yang_parent_name = "destination-grp";
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::~Destination()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::has_data() const
{
    return dest_port.is_set
	|| encoding.is_set
	|| id.is_set
	|| last_collection_time.is_set
	|| state.is_set
	|| tls.is_set
	|| tls_host.is_set
	|| total_num_of_bytes_sent.is_set
	|| total_num_of_packets_sent.is_set
	|| transport.is_set
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_port.operation)
	|| is_set(encoding.operation)
	|| is_set(id.operation)
	|| is_set(last_collection_time.operation)
	|| is_set(state.operation)
	|| is_set(tls.operation)
	|| is_set(tls_host.operation)
	|| is_set(total_num_of_bytes_sent.operation)
	|| is_set(total_num_of_packets_sent.operation)
	|| is_set(transport.operation)
	|| (dest_ip_address !=  nullptr && dest_ip_address->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_port.is_set || is_set(dest_port.operation)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_collection_time.is_set || is_set(last_collection_time.operation)) leaf_name_data.push_back(last_collection_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tls.is_set || is_set(tls.operation)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (tls_host.is_set || is_set(tls_host.operation)) leaf_name_data.push_back(tls_host.get_name_leafdata());
    if (total_num_of_bytes_sent.is_set || is_set(total_num_of_bytes_sent.operation)) leaf_name_data.push_back(total_num_of_bytes_sent.get_name_leafdata());
    if (total_num_of_packets_sent.is_set || is_set(total_num_of_packets_sent.operation)) leaf_name_data.push_back(total_num_of_packets_sent.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dest-ip-address")
    {
        if(dest_ip_address != nullptr)
        {
            children["dest-ip-address"] = dest_ip_address.get();
        }
        else
        {
            dest_ip_address = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress>();
            dest_ip_address->parent = this;
            children["dest-ip-address"] = dest_ip_address.get();
        }
        return children.at("dest-ip-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::get_children()
{
    if(children.find("dest-ip-address") == children.end())
    {
        if(dest_ip_address != nullptr)
        {
            children["dest-ip-address"] = dest_ip_address.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-port")
    {
        dest_port = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "last-collection-time")
    {
        last_collection_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tls")
    {
        tls = value;
    }
    if(value_path == "tls-host")
    {
        tls_host = value;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent = value;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::DestinationGrp()
    :
    	configured{YType::uint32, "configured"},
	 id{YType::str, "id"}
{
    yang_name = "destination-grp"; yang_parent_name = "subscription";
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
    return configured.is_set
	|| id.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(id.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-grp";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::Subscription_()
    :
    	id{YType::str, "id"},
	 state{YType::boolean, "state"}
{
    yang_name = "subscription"; yang_parent_name = "subscription";
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription_::~Subscription_()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::has_data() const
{
    for (std::size_t index=0; index<destination_grp.size(); index++)
    {
        if(destination_grp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_data())
            return true;
    }
    return id.is_set
	|| state.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::Subscription_::has_operation() const
{
    for (std::size_t index=0; index<destination_grp.size(); index++)
    {
        if(destination_grp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(state.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-grp")
    {
        for(auto const & c : destination_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp>();
        c->parent = this;
        destination_grp.push_back(std::move(c));
        children[segment_path] = destination_grp.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-profile")
    {
        for(auto const & c : sensor_profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile>();
        c->parent = this;
        sensor_profile.push_back(std::move(c));
        children[segment_path] = sensor_profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::Subscription_::get_children()
{
    for (auto const & c : destination_grp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : sensor_profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::Subscription_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::CollectionPath()
    :
    	path{YType::str, "path"},
	 state{YType::uint32, "state"},
	 status_str{YType::str, "status-str"}
{
    yang_name = "collection-path"; yang_parent_name = "collection-group";
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
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(state.operation)
	|| is_set(status_str.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-path";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.operation)) leaf_name_data.push_back(status_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::get_children()
{
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "status-str")
    {
        status_str = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::InternalCollectionGroup()
    :
    	avg_collection_time{YType::uint64, "avg-collection-time"},
	 cadence{YType::uint64, "cadence"},
	 collection_method{YType::uint64, "collection-method"},
	 max_collection_time{YType::uint64, "max-collection-time"},
	 min_collection_time{YType::uint64, "min-collection-time"},
	 path{YType::str, "path"},
	 total_collections{YType::uint64, "total-collections"},
	 total_collections_missed{YType::uint64, "total-collections-missed"},
	 total_datalist_count{YType::uint64, "total-datalist-count"},
	 total_datalist_errors{YType::uint64, "total-datalist-errors"},
	 total_encode_errors{YType::uint64, "total-encode-errors"},
	 total_encode_notready{YType::uint64, "total-encode-notready"},
	 total_finddata_count{YType::uint64, "total-finddata-count"},
	 total_finddata_errors{YType::uint64, "total-finddata-errors"},
	 total_get_bulk_count{YType::uint64, "total-get-bulk-count"},
	 total_get_bulk_errors{YType::uint64, "total-get-bulk-errors"},
	 total_get_count{YType::uint64, "total-get-count"},
	 total_get_errors{YType::uint64, "total-get-errors"},
	 total_item_count{YType::uint64, "total-item-count"},
	 total_list_count{YType::uint64, "total-list-count"},
	 total_list_errors{YType::uint64, "total-list-errors"},
	 total_send_bytes_dropped{YType::uint64, "total-send-bytes-dropped"},
	 total_send_drops{YType::uint64, "total-send-drops"},
	 total_send_errors{YType::uint64, "total-send-errors"},
	 total_send_packets{YType::uint64, "total-send-packets"},
	 total_sent_bytes{YType::uint64, "total-sent-bytes"}
{
    yang_name = "internal-collection-group"; yang_parent_name = "collection-group";
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::~InternalCollectionGroup()
{
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::has_data() const
{
    return avg_collection_time.is_set
	|| cadence.is_set
	|| collection_method.is_set
	|| max_collection_time.is_set
	|| min_collection_time.is_set
	|| path.is_set
	|| total_collections.is_set
	|| total_collections_missed.is_set
	|| total_datalist_count.is_set
	|| total_datalist_errors.is_set
	|| total_encode_errors.is_set
	|| total_encode_notready.is_set
	|| total_finddata_count.is_set
	|| total_finddata_errors.is_set
	|| total_get_bulk_count.is_set
	|| total_get_bulk_errors.is_set
	|| total_get_count.is_set
	|| total_get_errors.is_set
	|| total_item_count.is_set
	|| total_list_count.is_set
	|| total_list_errors.is_set
	|| total_send_bytes_dropped.is_set
	|| total_send_drops.is_set
	|| total_send_errors.is_set
	|| total_send_packets.is_set
	|| total_sent_bytes.is_set;
}

bool TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(avg_collection_time.operation)
	|| is_set(cadence.operation)
	|| is_set(collection_method.operation)
	|| is_set(max_collection_time.operation)
	|| is_set(min_collection_time.operation)
	|| is_set(path.operation)
	|| is_set(total_collections.operation)
	|| is_set(total_collections_missed.operation)
	|| is_set(total_datalist_count.operation)
	|| is_set(total_datalist_errors.operation)
	|| is_set(total_encode_errors.operation)
	|| is_set(total_encode_notready.operation)
	|| is_set(total_finddata_count.operation)
	|| is_set(total_finddata_errors.operation)
	|| is_set(total_get_bulk_count.operation)
	|| is_set(total_get_bulk_errors.operation)
	|| is_set(total_get_count.operation)
	|| is_set(total_get_errors.operation)
	|| is_set(total_item_count.operation)
	|| is_set(total_list_count.operation)
	|| is_set(total_list_errors.operation)
	|| is_set(total_send_bytes_dropped.operation)
	|| is_set(total_send_drops.operation)
	|| is_set(total_send_errors.operation)
	|| is_set(total_send_packets.operation)
	|| is_set(total_sent_bytes.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-collection-group";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_collection_time.is_set || is_set(avg_collection_time.operation)) leaf_name_data.push_back(avg_collection_time.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.operation)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (collection_method.is_set || is_set(collection_method.operation)) leaf_name_data.push_back(collection_method.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.operation)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.operation)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.operation)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_collections_missed.is_set || is_set(total_collections_missed.operation)) leaf_name_data.push_back(total_collections_missed.get_name_leafdata());
    if (total_datalist_count.is_set || is_set(total_datalist_count.operation)) leaf_name_data.push_back(total_datalist_count.get_name_leafdata());
    if (total_datalist_errors.is_set || is_set(total_datalist_errors.operation)) leaf_name_data.push_back(total_datalist_errors.get_name_leafdata());
    if (total_encode_errors.is_set || is_set(total_encode_errors.operation)) leaf_name_data.push_back(total_encode_errors.get_name_leafdata());
    if (total_encode_notready.is_set || is_set(total_encode_notready.operation)) leaf_name_data.push_back(total_encode_notready.get_name_leafdata());
    if (total_finddata_count.is_set || is_set(total_finddata_count.operation)) leaf_name_data.push_back(total_finddata_count.get_name_leafdata());
    if (total_finddata_errors.is_set || is_set(total_finddata_errors.operation)) leaf_name_data.push_back(total_finddata_errors.get_name_leafdata());
    if (total_get_bulk_count.is_set || is_set(total_get_bulk_count.operation)) leaf_name_data.push_back(total_get_bulk_count.get_name_leafdata());
    if (total_get_bulk_errors.is_set || is_set(total_get_bulk_errors.operation)) leaf_name_data.push_back(total_get_bulk_errors.get_name_leafdata());
    if (total_get_count.is_set || is_set(total_get_count.operation)) leaf_name_data.push_back(total_get_count.get_name_leafdata());
    if (total_get_errors.is_set || is_set(total_get_errors.operation)) leaf_name_data.push_back(total_get_errors.get_name_leafdata());
    if (total_item_count.is_set || is_set(total_item_count.operation)) leaf_name_data.push_back(total_item_count.get_name_leafdata());
    if (total_list_count.is_set || is_set(total_list_count.operation)) leaf_name_data.push_back(total_list_count.get_name_leafdata());
    if (total_list_errors.is_set || is_set(total_list_errors.operation)) leaf_name_data.push_back(total_list_errors.get_name_leafdata());
    if (total_send_bytes_dropped.is_set || is_set(total_send_bytes_dropped.operation)) leaf_name_data.push_back(total_send_bytes_dropped.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.operation)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.operation)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());
    if (total_send_packets.is_set || is_set(total_send_packets.operation)) leaf_name_data.push_back(total_send_packets.get_name_leafdata());
    if (total_sent_bytes.is_set || is_set(total_sent_bytes.operation)) leaf_name_data.push_back(total_sent_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::get_children()
{
    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-collection-time")
    {
        avg_collection_time = value;
    }
    if(value_path == "cadence")
    {
        cadence = value;
    }
    if(value_path == "collection-method")
    {
        collection_method = value;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
    }
    if(value_path == "total-collections-missed")
    {
        total_collections_missed = value;
    }
    if(value_path == "total-datalist-count")
    {
        total_datalist_count = value;
    }
    if(value_path == "total-datalist-errors")
    {
        total_datalist_errors = value;
    }
    if(value_path == "total-encode-errors")
    {
        total_encode_errors = value;
    }
    if(value_path == "total-encode-notready")
    {
        total_encode_notready = value;
    }
    if(value_path == "total-finddata-count")
    {
        total_finddata_count = value;
    }
    if(value_path == "total-finddata-errors")
    {
        total_finddata_errors = value;
    }
    if(value_path == "total-get-bulk-count")
    {
        total_get_bulk_count = value;
    }
    if(value_path == "total-get-bulk-errors")
    {
        total_get_bulk_errors = value;
    }
    if(value_path == "total-get-count")
    {
        total_get_count = value;
    }
    if(value_path == "total-get-errors")
    {
        total_get_errors = value;
    }
    if(value_path == "total-item-count")
    {
        total_item_count = value;
    }
    if(value_path == "total-list-count")
    {
        total_list_count = value;
    }
    if(value_path == "total-list-errors")
    {
        total_list_errors = value;
    }
    if(value_path == "total-send-bytes-dropped")
    {
        total_send_bytes_dropped = value;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
    }
    if(value_path == "total-send-packets")
    {
        total_send_packets = value;
    }
    if(value_path == "total-sent-bytes")
    {
        total_sent_bytes = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionGroup()
    :
    	avg_total_time{YType::uint32, "avg-total-time"},
	 cadence{YType::uint32, "cadence"},
	 encoding{YType::enumeration, "encoding"},
	 id{YType::uint64, "id"},
	 last_collection_end_time{YType::uint64, "last-collection-end-time"},
	 last_collection_start_time{YType::uint64, "last-collection-start-time"},
	 max_collection_time{YType::uint32, "max-collection-time"},
	 max_total_time{YType::uint32, "max-total-time"},
	 min_collection_time{YType::uint32, "min-collection-time"},
	 min_total_time{YType::uint32, "min-total-time"},
	 total_collections{YType::uint32, "total-collections"},
	 total_not_ready{YType::uint32, "total-not-ready"},
	 total_other_errors{YType::uint32, "total-other-errors"},
	 total_send_drops{YType::uint32, "total-send-drops"},
	 total_send_errors{YType::uint32, "total-send-errors"}
{
    yang_name = "collection-group"; yang_parent_name = "subscription";
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
    return avg_total_time.is_set
	|| cadence.is_set
	|| encoding.is_set
	|| id.is_set
	|| last_collection_end_time.is_set
	|| last_collection_start_time.is_set
	|| max_collection_time.is_set
	|| max_total_time.is_set
	|| min_collection_time.is_set
	|| min_total_time.is_set
	|| total_collections.is_set
	|| total_not_ready.is_set
	|| total_other_errors.is_set
	|| total_send_drops.is_set
	|| total_send_errors.is_set;
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
    return is_set(operation)
	|| is_set(avg_total_time.operation)
	|| is_set(cadence.operation)
	|| is_set(encoding.operation)
	|| is_set(id.operation)
	|| is_set(last_collection_end_time.operation)
	|| is_set(last_collection_start_time.operation)
	|| is_set(max_collection_time.operation)
	|| is_set(max_total_time.operation)
	|| is_set(min_collection_time.operation)
	|| is_set(min_total_time.operation)
	|| is_set(total_collections.operation)
	|| is_set(total_not_ready.operation)
	|| is_set(total_other_errors.operation)
	|| is_set(total_send_drops.operation)
	|| is_set(total_send_errors.operation);
}

std::string TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-group";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_total_time.is_set || is_set(avg_total_time.operation)) leaf_name_data.push_back(avg_total_time.get_name_leafdata());
    if (cadence.is_set || is_set(cadence.operation)) leaf_name_data.push_back(cadence.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_collection_end_time.is_set || is_set(last_collection_end_time.operation)) leaf_name_data.push_back(last_collection_end_time.get_name_leafdata());
    if (last_collection_start_time.is_set || is_set(last_collection_start_time.operation)) leaf_name_data.push_back(last_collection_start_time.get_name_leafdata());
    if (max_collection_time.is_set || is_set(max_collection_time.operation)) leaf_name_data.push_back(max_collection_time.get_name_leafdata());
    if (max_total_time.is_set || is_set(max_total_time.operation)) leaf_name_data.push_back(max_total_time.get_name_leafdata());
    if (min_collection_time.is_set || is_set(min_collection_time.operation)) leaf_name_data.push_back(min_collection_time.get_name_leafdata());
    if (min_total_time.is_set || is_set(min_total_time.operation)) leaf_name_data.push_back(min_total_time.get_name_leafdata());
    if (total_collections.is_set || is_set(total_collections.operation)) leaf_name_data.push_back(total_collections.get_name_leafdata());
    if (total_not_ready.is_set || is_set(total_not_ready.operation)) leaf_name_data.push_back(total_not_ready.get_name_leafdata());
    if (total_other_errors.is_set || is_set(total_other_errors.operation)) leaf_name_data.push_back(total_other_errors.get_name_leafdata());
    if (total_send_drops.is_set || is_set(total_send_drops.operation)) leaf_name_data.push_back(total_send_drops.get_name_leafdata());
    if (total_send_errors.is_set || is_set(total_send_errors.operation)) leaf_name_data.push_back(total_send_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collection-path")
    {
        for(auto const & c : collection_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath>();
        c->parent = this;
        collection_path.push_back(std::move(c));
        children[segment_path] = collection_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-collection-group")
    {
        for(auto const & c : internal_collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup>();
        c->parent = this;
        internal_collection_group.push_back(std::move(c));
        children[segment_path] = internal_collection_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::get_children()
{
    for (auto const & c : collection_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : internal_collection_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-total-time")
    {
        avg_total_time = value;
    }
    if(value_path == "cadence")
    {
        cadence = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "last-collection-end-time")
    {
        last_collection_end_time = value;
    }
    if(value_path == "last-collection-start-time")
    {
        last_collection_start_time = value;
    }
    if(value_path == "max-collection-time")
    {
        max_collection_time = value;
    }
    if(value_path == "max-total-time")
    {
        max_total_time = value;
    }
    if(value_path == "min-collection-time")
    {
        min_collection_time = value;
    }
    if(value_path == "min-total-time")
    {
        min_total_time = value;
    }
    if(value_path == "total-collections")
    {
        total_collections = value;
    }
    if(value_path == "total-not-ready")
    {
        total_not_ready = value;
    }
    if(value_path == "total-other-errors")
    {
        total_other_errors = value;
    }
    if(value_path == "total-send-drops")
    {
        total_send_drops = value;
    }
    if(value_path == "total-send-errors")
    {
        total_send_errors = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscription::Subscription()
    :
    	subscription_id{YType::str, "subscription-id"},
	 total_num_of_bytes_sent{YType::uint64, "total-num-of-bytes-sent"},
	 total_num_of_packets_sent{YType::uint64, "total-num-of-packets-sent"}
    	,
    subscription(std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_>())
{
    subscription->parent = this;
    children["subscription"] = subscription.get();

    yang_name = "subscription"; yang_parent_name = "subscriptions";
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
	|| total_num_of_bytes_sent.is_set
	|| total_num_of_packets_sent.is_set
	|| (subscription !=  nullptr && subscription->has_data());
}

bool TelemetryModelDriven::Subscriptions::Subscription::has_operation() const
{
    for (std::size_t index=0; index<collection_group.size(); index++)
    {
        if(collection_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(subscription_id.operation)
	|| is_set(total_num_of_bytes_sent.operation)
	|| is_set(total_num_of_packets_sent.operation)
	|| (subscription !=  nullptr && subscription->has_operation());
}

std::string TelemetryModelDriven::Subscriptions::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/subscriptions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (total_num_of_bytes_sent.is_set || is_set(total_num_of_bytes_sent.operation)) leaf_name_data.push_back(total_num_of_bytes_sent.get_name_leafdata());
    if (total_num_of_packets_sent.is_set || is_set(total_num_of_packets_sent.operation)) leaf_name_data.push_back(total_num_of_packets_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collection-group")
    {
        for(auto const & c : collection_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup>();
        c->parent = this;
        collection_group.push_back(std::move(c));
        children[segment_path] = collection_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "subscription")
    {
        if(subscription != nullptr)
        {
            children["subscription"] = subscription.get();
        }
        else
        {
            subscription = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription::Subscription_>();
            subscription->parent = this;
            children["subscription"] = subscription.get();
        }
        return children.at("subscription");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::Subscription::get_children()
{
    for (auto const & c : collection_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("subscription") == children.end())
    {
        if(subscription != nullptr)
        {
            children["subscription"] = subscription.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::Subscription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
    if(value_path == "total-num-of-bytes-sent")
    {
        total_num_of_bytes_sent = value;
    }
    if(value_path == "total-num-of-packets-sent")
    {
        total_num_of_packets_sent = value;
    }
}

TelemetryModelDriven::Subscriptions::Subscriptions()
{
    yang_name = "subscriptions"; yang_parent_name = "telemetry-model-driven";
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
    return is_set(operation);
}

std::string TelemetryModelDriven::Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriptions";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::Subscriptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::Subscriptions::Subscription>();
        c->parent = this;
        subscription.push_back(std::move(c));
        children[segment_path] = subscription.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::Subscriptions::get_children()
{
    for (auto const & c : subscription)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::Subscriptions::set_value(const std::string & value_path, std::string value)
{
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::SensorPath()
    :
    	path{YType::str, "path"},
	 state{YType::uint32, "state"},
	 status_str{YType::str, "status-str"}
{
    yang_name = "sensor-path"; yang_parent_name = "sensor-group";
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
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(state.operation)
	|| is_set(status_str.operation);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (status_str.is_set || is_set(status_str.operation)) leaf_name_data.push_back(status_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::get_children()
{
    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "status-str")
    {
        status_str = value;
    }
}

TelemetryModelDriven::SensorGroups::SensorGroup::SensorGroup()
    :
    	sensor_group_id{YType::str, "sensor-group-id"},
	 configured{YType::uint32, "configured"},
	 id{YType::str, "id"}
{
    yang_name = "sensor-group"; yang_parent_name = "sensor-groups";
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
	|| configured.is_set
	|| id.is_set;
}

bool TelemetryModelDriven::SensorGroups::SensorGroup::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sensor_group_id.operation)
	|| is_set(configured.operation)
	|| is_set(id.operation);
}

std::string TelemetryModelDriven::SensorGroups::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group" <<"[sensor-group-id='" <<sensor_group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::SensorGroups::SensorGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/sensor-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.operation)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::SensorGroups::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath>();
        c->parent = this;
        sensor_path.push_back(std::move(c));
        children[segment_path] = sensor_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::SensorGroups::SensorGroup::get_children()
{
    for (auto const & c : sensor_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::SensorGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

TelemetryModelDriven::SensorGroups::SensorGroups()
{
    yang_name = "sensor-groups"; yang_parent_name = "telemetry-model-driven";
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
    return is_set(operation);
}

std::string TelemetryModelDriven::SensorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-groups";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::SensorGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::SensorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-group")
    {
        for(auto const & c : sensor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetryModelDriven::SensorGroups::SensorGroup>();
        c->parent = this;
        sensor_group.push_back(std::move(c));
        children[segment_path] = sensor_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::SensorGroups::get_children()
{
    for (auto const & c : sensor_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetryModelDriven::SensorGroups::set_value(const std::string & value_path, std::string value)
{
}

TelemetryModelDriven::TelemetryModelDriven()
    :
    destinations(std::make_unique<TelemetryModelDriven::Destinations>())
	,sensor_groups(std::make_unique<TelemetryModelDriven::SensorGroups>())
	,subscriptions(std::make_unique<TelemetryModelDriven::Subscriptions>())
{
    destinations->parent = this;
    children["destinations"] = destinations.get();

    sensor_groups->parent = this;
    children["sensor-groups"] = sensor_groups.get();

    subscriptions->parent = this;
    children["subscriptions"] = subscriptions.get();

    yang_name = "telemetry-model-driven"; yang_parent_name = "Cisco-IOS-XR-telemetry-model-driven-oper";
}

TelemetryModelDriven::~TelemetryModelDriven()
{
}

bool TelemetryModelDriven::has_data() const
{
    return (destinations !=  nullptr && destinations->has_data())
	|| (sensor_groups !=  nullptr && sensor_groups->has_data())
	|| (subscriptions !=  nullptr && subscriptions->has_data());
}

bool TelemetryModelDriven::has_operation() const
{
    return is_set(operation)
	|| (destinations !=  nullptr && destinations->has_operation())
	|| (sensor_groups !=  nullptr && sensor_groups->has_operation())
	|| (subscriptions !=  nullptr && subscriptions->has_operation());
}

std::string TelemetryModelDriven::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven";

    return path_buffer.str();

}

EntityPath TelemetryModelDriven::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetryModelDriven::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destinations")
    {
        if(destinations != nullptr)
        {
            children["destinations"] = destinations.get();
        }
        else
        {
            destinations = std::make_unique<TelemetryModelDriven::Destinations>();
            destinations->parent = this;
            children["destinations"] = destinations.get();
        }
        return children.at("destinations");
    }

    if(child_yang_name == "sensor-groups")
    {
        if(sensor_groups != nullptr)
        {
            children["sensor-groups"] = sensor_groups.get();
        }
        else
        {
            sensor_groups = std::make_unique<TelemetryModelDriven::SensorGroups>();
            sensor_groups->parent = this;
            children["sensor-groups"] = sensor_groups.get();
        }
        return children.at("sensor-groups");
    }

    if(child_yang_name == "subscriptions")
    {
        if(subscriptions != nullptr)
        {
            children["subscriptions"] = subscriptions.get();
        }
        else
        {
            subscriptions = std::make_unique<TelemetryModelDriven::Subscriptions>();
            subscriptions->parent = this;
            children["subscriptions"] = subscriptions.get();
        }
        return children.at("subscriptions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetryModelDriven::get_children()
{
    if(children.find("destinations") == children.end())
    {
        if(destinations != nullptr)
        {
            children["destinations"] = destinations.get();
        }
    }

    if(children.find("sensor-groups") == children.end())
    {
        if(sensor_groups != nullptr)
        {
            children["sensor-groups"] = sensor_groups.get();
        }
    }

    if(children.find("subscriptions") == children.end())
    {
        if(subscriptions != nullptr)
        {
            children["subscriptions"] = subscriptions.get();
        }
    }

    return children;
}

void TelemetryModelDriven::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> TelemetryModelDriven::clone_ptr()
{
    return std::make_unique<TelemetryModelDriven>();
}

const Enum::YLeaf MdtEncodingEnumEnum::not_set {0, "not-set"};
const Enum::YLeaf MdtEncodingEnumEnum::gpb {2, "gpb"};
const Enum::YLeaf MdtEncodingEnumEnum::self_describing_gpb {3, "self-describing-gpb"};
const Enum::YLeaf MdtEncodingEnumEnum::json {4, "json"};

const Enum::YLeaf MdtIpEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf MdtIpEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf MdtTransportEnumEnum::not_set {0, "not-set"};
const Enum::YLeaf MdtTransportEnumEnum::grpc {1, "grpc"};
const Enum::YLeaf MdtTransportEnumEnum::tcp {2, "tcp"};
const Enum::YLeaf MdtTransportEnumEnum::dialin {6, "dialin"};


}
}

