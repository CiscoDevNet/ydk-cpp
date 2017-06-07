
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_statsd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_statsd_oper {

InfraStatistics::InfraStatistics()
    :
    interfaces(std::make_shared<InfraStatistics::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "infra-statistics"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-oper";
}

InfraStatistics::~InfraStatistics()
{
}

bool InfraStatistics::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool InfraStatistics::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InfraStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics";

    return path_buffer.str();

}

const EntityPath InfraStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InfraStatistics::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void InfraStatistics::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraStatistics::clone_ptr() const
{
    return std::make_shared<InfraStatistics>();
}

std::string InfraStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraStatistics::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "infra-statistics";
}

InfraStatistics::Interfaces::~Interfaces()
{
}

bool InfraStatistics::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InfraStatistics::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InfraStatistics::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InfraStatistics::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    cache(std::make_shared<InfraStatistics::Interfaces::Interface::Cache>())
	,data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::DataRate>())
	,generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::GenericCounters>())
	,interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::InterfacesMibCounters>())
	,latest(std::make_shared<InfraStatistics::Interfaces::Interface::Latest>())
	,protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Protocols>())
	,total(std::make_shared<InfraStatistics::Interfaces::Interface::Total>())
{
    cache->parent = this;

    data_rate->parent = this;

    generic_counters->parent = this;

    interfaces_mib_counters->parent = this;

    latest->parent = this;

    protocols->parent = this;

    total->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

InfraStatistics::Interfaces::Interface::~Interface()
{
}

bool InfraStatistics::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (latest !=  nullptr && latest->has_data())
	|| (protocols !=  nullptr && protocols->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool InfraStatistics::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (cache !=  nullptr && cache->has_operation())
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (latest !=  nullptr && latest->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<InfraStatistics::Interfaces::Interface::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "latest")
    {
        if(latest == nullptr)
        {
            latest = std::make_shared<InfraStatistics::Interfaces::Interface::Latest>();
        }
        return latest;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<InfraStatistics::Interfaces::Interface::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(data_rate != nullptr)
    {
        children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(interfaces_mib_counters != nullptr)
    {
        children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(latest != nullptr)
    {
        children["latest"] = latest;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

InfraStatistics::Interfaces::Interface::Cache::Cache()
    :
    data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::DataRate>())
	,generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::GenericCounters>())
	,interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters>())
	,protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols>())
{
    data_rate->parent = this;

    generic_counters->parent = this;

    interfaces_mib_counters->parent = this;

    protocols->parent = this;

    yang_name = "cache"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::Cache::~Cache()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::has_data() const
{
    return (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool InfraStatistics::Interfaces::Interface::Cache::has_operation() const
{
    return is_set(operation)
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cache' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_rate != nullptr)
    {
        children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(interfaces_mib_counters != nullptr)
    {
        children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "cache";
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InfraStatistics::Interfaces::Interface::Cache::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocols' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    last_data_time{YType::uint32, "last-data-time"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"}
{
    yang_name = "protocol"; yang_parent_name = "protocols";
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| last_data_time.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| protocol.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(last_data_time.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(protocol.operation);
}

std::string InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::InterfacesMibCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "interfaces-mib-counters"; yang_parent_name = "cache";
}

InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacesMibCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Cache::DataRate::DataRate()
    :
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_load{YType::uint8, "input-load"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    load_interval{YType::uint32, "load-interval"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_load{YType::uint8, "output-load"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "data-rate"; yang_parent_name = "cache";
}

InfraStatistics::Interfaces::Interface::Cache::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::DataRate::has_data() const
{
    return bandwidth.is_set
	|| input_data_rate.is_set
	|| input_load.is_set
	|| input_packet_rate.is_set
	|| load_interval.is_set
	|| output_data_rate.is_set
	|| output_load.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::DataRate::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_load.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(load_interval.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_load.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(peak_input_data_rate.operation)
	|| is_set(peak_input_packet_rate.operation)
	|| is_set(peak_output_data_rate.operation)
	|| is_set(peak_output_packet_rate.operation)
	|| is_set(reliability.operation);
}

std::string InfraStatistics::Interfaces::Interface::Cache::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::DataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataRate' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.operation)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.operation)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.operation)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.operation)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.operation)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.operation)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::DataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-load")
    {
        input_load = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-load")
    {
        output_load = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

InfraStatistics::Interfaces::Interface::Cache::GenericCounters::GenericCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "generic-counters"; yang_parent_name = "cache";
}

InfraStatistics::Interfaces::Interface::Cache::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::GenericCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::GenericCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Cache::GenericCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Latest::Latest()
    :
    data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::DataRate>())
	,generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::GenericCounters>())
	,interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters>())
	,protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols>())
{
    data_rate->parent = this;

    generic_counters->parent = this;

    interfaces_mib_counters->parent = this;

    protocols->parent = this;

    yang_name = "latest"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::Latest::~Latest()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::has_data() const
{
    return (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool InfraStatistics::Interfaces::Interface::Latest::has_operation() const
{
    return is_set(operation)
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Latest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latest";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latest' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_rate != nullptr)
    {
        children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(interfaces_mib_counters != nullptr)
    {
        children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "latest";
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InfraStatistics::Interfaces::Interface::Latest::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocols' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    last_data_time{YType::uint32, "last-data-time"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"}
{
    yang_name = "protocol"; yang_parent_name = "protocols";
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| last_data_time.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| protocol.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(last_data_time.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(protocol.operation);
}

std::string InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::InterfacesMibCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "interfaces-mib-counters"; yang_parent_name = "latest";
}

InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacesMibCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Latest::DataRate::DataRate()
    :
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_load{YType::uint8, "input-load"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    load_interval{YType::uint32, "load-interval"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_load{YType::uint8, "output-load"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "data-rate"; yang_parent_name = "latest";
}

InfraStatistics::Interfaces::Interface::Latest::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::DataRate::has_data() const
{
    return bandwidth.is_set
	|| input_data_rate.is_set
	|| input_load.is_set
	|| input_packet_rate.is_set
	|| load_interval.is_set
	|| output_data_rate.is_set
	|| output_load.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::DataRate::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_load.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(load_interval.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_load.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(peak_input_data_rate.operation)
	|| is_set(peak_input_packet_rate.operation)
	|| is_set(peak_output_data_rate.operation)
	|| is_set(peak_output_packet_rate.operation)
	|| is_set(reliability.operation);
}

std::string InfraStatistics::Interfaces::Interface::Latest::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::DataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataRate' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.operation)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.operation)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.operation)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.operation)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.operation)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.operation)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::DataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-load")
    {
        input_load = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-load")
    {
        output_load = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

InfraStatistics::Interfaces::Interface::Latest::GenericCounters::GenericCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "generic-counters"; yang_parent_name = "latest";
}

InfraStatistics::Interfaces::Interface::Latest::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::GenericCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::GenericCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Latest::GenericCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Total::Total()
    :
    data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Total::DataRate>())
	,generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Total::GenericCounters>())
	,interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters>())
	,protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols>())
{
    data_rate->parent = this;

    generic_counters->parent = this;

    interfaces_mib_counters->parent = this;

    protocols->parent = this;

    yang_name = "total"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::Total::~Total()
{
}

bool InfraStatistics::Interfaces::Interface::Total::has_data() const
{
    return (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool InfraStatistics::Interfaces::Interface::Total::has_operation() const
{
    return is_set(operation)
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Total::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Total::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_rate != nullptr)
    {
        children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(interfaces_mib_counters != nullptr)
    {
        children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Total::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "total";
}

InfraStatistics::Interfaces::Interface::Total::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InfraStatistics::Interfaces::Interface::Total::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocols' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    last_data_time{YType::uint32, "last-data-time"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"}
{
    yang_name = "protocol"; yang_parent_name = "protocols";
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| last_data_time.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| protocol.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(last_data_time.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(protocol.operation);
}

std::string InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::InterfacesMibCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "interfaces-mib-counters"; yang_parent_name = "total";
}

InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacesMibCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Total::DataRate::DataRate()
    :
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_load{YType::uint8, "input-load"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    load_interval{YType::uint32, "load-interval"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_load{YType::uint8, "output-load"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "data-rate"; yang_parent_name = "total";
}

InfraStatistics::Interfaces::Interface::Total::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Total::DataRate::has_data() const
{
    return bandwidth.is_set
	|| input_data_rate.is_set
	|| input_load.is_set
	|| input_packet_rate.is_set
	|| load_interval.is_set
	|| output_data_rate.is_set
	|| output_load.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::DataRate::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_load.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(load_interval.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_load.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(peak_input_data_rate.operation)
	|| is_set(peak_input_packet_rate.operation)
	|| is_set(peak_output_data_rate.operation)
	|| is_set(peak_output_packet_rate.operation)
	|| is_set(reliability.operation);
}

std::string InfraStatistics::Interfaces::Interface::Total::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::DataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataRate' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.operation)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.operation)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.operation)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.operation)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.operation)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.operation)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Total::DataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-load")
    {
        input_load = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-load")
    {
        output_load = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

InfraStatistics::Interfaces::Interface::Total::GenericCounters::GenericCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "generic-counters"; yang_parent_name = "total";
}

InfraStatistics::Interfaces::Interface::Total::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Total::GenericCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::GenericCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Total::GenericCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InfraStatistics::Interfaces::Interface::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocols' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InfraStatistics::Interfaces::Interface::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InfraStatistics::Interfaces::Interface::Protocols::set_value(const std::string & value_path, std::string value)
{
}

InfraStatistics::Interfaces::Interface::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    last_data_time{YType::uint32, "last-data-time"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"}
{
    yang_name = "protocol"; yang_parent_name = "protocols";
}

InfraStatistics::Interfaces::Interface::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| last_data_time.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| protocol.is_set;
}

bool InfraStatistics::Interfaces::Interface::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(last_data_time.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(protocol.operation);
}

std::string InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

InfraStatistics::Interfaces::Interface::InterfacesMibCounters::InterfacesMibCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "interfaces-mib-counters"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::InterfacesMibCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::InterfacesMibCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacesMibCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::InterfacesMibCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}

InfraStatistics::Interfaces::Interface::DataRate::DataRate()
    :
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_load{YType::uint8, "input-load"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    load_interval{YType::uint32, "load-interval"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_load{YType::uint8, "output-load"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "data-rate"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::DataRate::has_data() const
{
    return bandwidth.is_set
	|| input_data_rate.is_set
	|| input_load.is_set
	|| input_packet_rate.is_set
	|| load_interval.is_set
	|| output_data_rate.is_set
	|| output_load.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::DataRate::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(input_data_rate.operation)
	|| is_set(input_load.operation)
	|| is_set(input_packet_rate.operation)
	|| is_set(load_interval.operation)
	|| is_set(output_data_rate.operation)
	|| is_set(output_load.operation)
	|| is_set(output_packet_rate.operation)
	|| is_set(peak_input_data_rate.operation)
	|| is_set(peak_input_packet_rate.operation)
	|| is_set(peak_output_data_rate.operation)
	|| is_set(peak_output_packet_rate.operation)
	|| is_set(reliability.operation);
}

std::string InfraStatistics::Interfaces::Interface::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::DataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataRate' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.operation)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.operation)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.operation)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.operation)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.operation)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.operation)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.operation)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.operation)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.operation)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.operation)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::DataRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
    }
    if(value_path == "input-load")
    {
        input_load = value;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
    }
    if(value_path == "output-load")
    {
        output_load = value;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

InfraStatistics::Interfaces::Interface::GenericCounters::GenericCounters()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "generic-counters"; yang_parent_name = "interface";
}

InfraStatistics::Interfaces::Interface::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::GenericCounters::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool InfraStatistics::Interfaces::Interface::GenericCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(applique.operation)
	|| is_set(availability_flag.operation)
	|| is_set(broadcast_packets_received.operation)
	|| is_set(broadcast_packets_sent.operation)
	|| is_set(bytes_received.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(carrier_transitions.operation)
	|| is_set(crc_errors.operation)
	|| is_set(framing_errors_received.operation)
	|| is_set(giant_packets_received.operation)
	|| is_set(input_aborts.operation)
	|| is_set(input_drops.operation)
	|| is_set(input_errors.operation)
	|| is_set(input_ignored_packets.operation)
	|| is_set(input_overruns.operation)
	|| is_set(input_queue_drops.operation)
	|| is_set(last_data_time.operation)
	|| is_set(last_discontinuity_time.operation)
	|| is_set(multicast_packets_received.operation)
	|| is_set(multicast_packets_sent.operation)
	|| is_set(output_buffer_failures.operation)
	|| is_set(output_buffers_swapped_out.operation)
	|| is_set(output_drops.operation)
	|| is_set(output_errors.operation)
	|| is_set(output_queue_drops.operation)
	|| is_set(output_underruns.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(parity_packets_received.operation)
	|| is_set(resets.operation)
	|| is_set(runt_packets_received.operation)
	|| is_set(seconds_since_last_clear_counters.operation)
	|| is_set(seconds_since_packet_received.operation)
	|| is_set(seconds_since_packet_sent.operation)
	|| is_set(throttled_packets_received.operation)
	|| is_set(unknown_protocol_packets_received.operation);
}

std::string InfraStatistics::Interfaces::Interface::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";

    return path_buffer.str();

}

const EntityPath InfraStatistics::Interfaces::Interface::GenericCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericCounters' in Cisco_IOS_XR_infra_statsd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.operation)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.operation)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.operation)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.operation)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.operation)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.operation)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.operation)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.operation)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.operation)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.operation)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.operation)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.operation)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.operation)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.operation)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.operation)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.operation)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.operation)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.operation)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.operation)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.operation)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.operation)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.operation)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.operation)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.operation)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.operation)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.operation)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.operation)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.operation)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.operation)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.operation)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.operation)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.operation)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.operation)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraStatistics::Interfaces::Interface::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraStatistics::Interfaces::Interface::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InfraStatistics::Interfaces::Interface::GenericCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applique")
    {
        applique = value;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
    }
    if(value_path == "resets")
    {
        resets = value;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
    }
}


}
}

