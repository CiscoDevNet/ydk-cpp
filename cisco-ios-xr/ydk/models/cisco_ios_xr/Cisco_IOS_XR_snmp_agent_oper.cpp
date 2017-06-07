
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_oper {

Snmp::Snmp()
    :
    correlator(std::make_shared<Snmp::Correlator>())
	,entity_mib(std::make_shared<Snmp::EntityMib>())
	,if_indexes(std::make_shared<Snmp::IfIndexes>())
	,information(std::make_shared<Snmp::Information>())
	,interface_indexes(std::make_shared<Snmp::InterfaceIndexes>())
	,interface_mib(std::make_shared<Snmp::InterfaceMib>())
	,interfaces(std::make_shared<Snmp::Interfaces>())
	,sensor_mib(std::make_shared<Snmp::SensorMib>())
	,trap_servers(std::make_shared<Snmp::TrapServers>())
{
    correlator->parent = this;

    entity_mib->parent = this;

    if_indexes->parent = this;

    information->parent = this;

    interface_indexes->parent = this;

    interface_mib->parent = this;

    interfaces->parent = this;

    sensor_mib->parent = this;

    trap_servers->parent = this;

    yang_name = "snmp"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-oper";
}

Snmp::~Snmp()
{
}

bool Snmp::has_data() const
{
    return (correlator !=  nullptr && correlator->has_data())
	|| (entity_mib !=  nullptr && entity_mib->has_data())
	|| (if_indexes !=  nullptr && if_indexes->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (interface_indexes !=  nullptr && interface_indexes->has_data())
	|| (interface_mib !=  nullptr && interface_mib->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (sensor_mib !=  nullptr && sensor_mib->has_data())
	|| (trap_servers !=  nullptr && trap_servers->has_data());
}

bool Snmp::has_operation() const
{
    return is_set(operation)
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (entity_mib !=  nullptr && entity_mib->has_operation())
	|| (if_indexes !=  nullptr && if_indexes->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (interface_indexes !=  nullptr && interface_indexes->has_operation())
	|| (interface_mib !=  nullptr && interface_mib->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (sensor_mib !=  nullptr && sensor_mib->has_operation())
	|| (trap_servers !=  nullptr && trap_servers->has_operation());
}

std::string Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp";

    return path_buffer.str();

}

const EntityPath Snmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Snmp::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "entity-mib")
    {
        if(entity_mib == nullptr)
        {
            entity_mib = std::make_shared<Snmp::EntityMib>();
        }
        return entity_mib;
    }

    if(child_yang_name == "if-indexes")
    {
        if(if_indexes == nullptr)
        {
            if_indexes = std::make_shared<Snmp::IfIndexes>();
        }
        return if_indexes;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Snmp::Information>();
        }
        return information;
    }

    if(child_yang_name == "interface-indexes")
    {
        if(interface_indexes == nullptr)
        {
            interface_indexes = std::make_shared<Snmp::InterfaceIndexes>();
        }
        return interface_indexes;
    }

    if(child_yang_name == "interface-mib")
    {
        if(interface_mib == nullptr)
        {
            interface_mib = std::make_shared<Snmp::InterfaceMib>();
        }
        return interface_mib;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Snmp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "sensor-mib")
    {
        if(sensor_mib == nullptr)
        {
            sensor_mib = std::make_shared<Snmp::SensorMib>();
        }
        return sensor_mib;
    }

    if(child_yang_name == "trap-servers")
    {
        if(trap_servers == nullptr)
        {
            trap_servers = std::make_shared<Snmp::TrapServers>();
        }
        return trap_servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(correlator != nullptr)
    {
        children["correlator"] = correlator;
    }

    if(entity_mib != nullptr)
    {
        children["entity-mib"] = entity_mib;
    }

    if(if_indexes != nullptr)
    {
        children["if-indexes"] = if_indexes;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(interface_indexes != nullptr)
    {
        children["interface-indexes"] = interface_indexes;
    }

    if(interface_mib != nullptr)
    {
        children["interface-mib"] = interface_mib;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(sensor_mib != nullptr)
    {
        children["sensor-mib"] = sensor_mib;
    }

    if(trap_servers != nullptr)
    {
        children["trap-servers"] = trap_servers;
    }

    return children;
}

void Snmp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Snmp::clone_ptr() const
{
    return std::make_shared<Snmp>();
}

std::string Snmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Snmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Snmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Snmp::TrapServers::TrapServers()
{
    yang_name = "trap-servers"; yang_parent_name = "snmp";
}

Snmp::TrapServers::~TrapServers()
{
}

bool Snmp::TrapServers::has_data() const
{
    for (std::size_t index=0; index<trap_server.size(); index++)
    {
        if(trap_server[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapServers::has_operation() const
{
    for (std::size_t index=0; index<trap_server.size(); index++)
    {
        if(trap_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::TrapServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-servers";

    return path_buffer.str();

}

const EntityPath Snmp::TrapServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-server")
    {
        for(auto const & c : trap_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapServers::TrapServer>();
        c->parent = this;
        trap_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapServers::set_value(const std::string & value_path, std::string value)
{
}

Snmp::TrapServers::TrapServer::TrapServer()
    :
    max_q_length_of_trap_q{YType::uint32, "max-q-length-of-trap-q"},
    number_of_pkts_dropped{YType::uint32, "number-of-pkts-dropped"},
    number_of_pkts_in_trap_q{YType::uint32, "number-of-pkts-in-trap-q"},
    number_of_pkts_sent{YType::uint32, "number-of-pkts-sent"},
    port{YType::uint16, "port"},
    trap_host{YType::str, "trap-host"}
{
    yang_name = "trap-server"; yang_parent_name = "trap-servers";
}

Snmp::TrapServers::TrapServer::~TrapServer()
{
}

bool Snmp::TrapServers::TrapServer::has_data() const
{
    return max_q_length_of_trap_q.is_set
	|| number_of_pkts_dropped.is_set
	|| number_of_pkts_in_trap_q.is_set
	|| number_of_pkts_sent.is_set
	|| port.is_set
	|| trap_host.is_set;
}

bool Snmp::TrapServers::TrapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(max_q_length_of_trap_q.operation)
	|| is_set(number_of_pkts_dropped.operation)
	|| is_set(number_of_pkts_in_trap_q.operation)
	|| is_set(number_of_pkts_sent.operation)
	|| is_set(port.operation)
	|| is_set(trap_host.operation);
}

std::string Snmp::TrapServers::TrapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-server";

    return path_buffer.str();

}

const EntityPath Snmp::TrapServers::TrapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/trap-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_q_length_of_trap_q.is_set || is_set(max_q_length_of_trap_q.operation)) leaf_name_data.push_back(max_q_length_of_trap_q.get_name_leafdata());
    if (number_of_pkts_dropped.is_set || is_set(number_of_pkts_dropped.operation)) leaf_name_data.push_back(number_of_pkts_dropped.get_name_leafdata());
    if (number_of_pkts_in_trap_q.is_set || is_set(number_of_pkts_in_trap_q.operation)) leaf_name_data.push_back(number_of_pkts_in_trap_q.get_name_leafdata());
    if (number_of_pkts_sent.is_set || is_set(number_of_pkts_sent.operation)) leaf_name_data.push_back(number_of_pkts_sent.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (trap_host.is_set || is_set(trap_host.operation)) leaf_name_data.push_back(trap_host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::TrapServers::TrapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapServers::TrapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapServers::TrapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-q-length-of-trap-q")
    {
        max_q_length_of_trap_q = value;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped = value;
    }
    if(value_path == "number-of-pkts-in-trap-q")
    {
        number_of_pkts_in_trap_q = value;
    }
    if(value_path == "number-of-pkts-sent")
    {
        number_of_pkts_sent = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "trap-host")
    {
        trap_host = value;
    }
}

Snmp::Information::Information()
    :
    bulk_stats_transfers(std::make_shared<Snmp::Information::BulkStatsTransfers>())
	,context_mapping(std::make_shared<Snmp::Information::ContextMapping>())
	,drop_nms_addresses(std::make_shared<Snmp::Information::DropNmsAddresses>())
	,duplicate_drop(std::make_shared<Snmp::Information::DuplicateDrop>())
	,engine_id(std::make_shared<Snmp::Information::EngineId>())
	,hosts(std::make_shared<Snmp::Information::Hosts>())
	,incoming_queue(std::make_shared<Snmp::Information::IncomingQueue>())
	,infom_details(std::make_shared<Snmp::Information::InfomDetails>())
	,mibs(std::make_shared<Snmp::Information::Mibs>())
	,nm_spackets(std::make_shared<Snmp::Information::NmSpackets>())
	,nms_addresses(std::make_shared<Snmp::Information::NmsAddresses>())
	,poll_oids(std::make_shared<Snmp::Information::PollOids>())
	,request_type_detail(std::make_shared<Snmp::Information::RequestTypeDetail>())
	,rx_queue(std::make_shared<Snmp::Information::RxQueue>())
	,serial_numbers(std::make_shared<Snmp::Information::SerialNumbers>())
	,statistics(std::make_shared<Snmp::Information::Statistics>())
	,system_descr(std::make_shared<Snmp::Information::SystemDescr>())
	,system_name(std::make_shared<Snmp::Information::SystemName>())
	,system_oid(std::make_shared<Snmp::Information::SystemOid>())
	,system_up_time(std::make_shared<Snmp::Information::SystemUpTime>())
	,tables(std::make_shared<Snmp::Information::Tables>())
	,trap_infos(std::make_shared<Snmp::Information::TrapInfos>())
	,trap_oids(std::make_shared<Snmp::Information::TrapOids>())
	,trap_queue(std::make_shared<Snmp::Information::TrapQueue>())
	,views(std::make_shared<Snmp::Information::Views>())
{
    bulk_stats_transfers->parent = this;

    context_mapping->parent = this;

    drop_nms_addresses->parent = this;

    duplicate_drop->parent = this;

    engine_id->parent = this;

    hosts->parent = this;

    incoming_queue->parent = this;

    infom_details->parent = this;

    mibs->parent = this;

    nm_spackets->parent = this;

    nms_addresses->parent = this;

    poll_oids->parent = this;

    request_type_detail->parent = this;

    rx_queue->parent = this;

    serial_numbers->parent = this;

    statistics->parent = this;

    system_descr->parent = this;

    system_name->parent = this;

    system_oid->parent = this;

    system_up_time->parent = this;

    tables->parent = this;

    trap_infos->parent = this;

    trap_oids->parent = this;

    trap_queue->parent = this;

    views->parent = this;

    yang_name = "information"; yang_parent_name = "snmp";
}

Snmp::Information::~Information()
{
}

bool Snmp::Information::has_data() const
{
    return (bulk_stats_transfers !=  nullptr && bulk_stats_transfers->has_data())
	|| (context_mapping !=  nullptr && context_mapping->has_data())
	|| (drop_nms_addresses !=  nullptr && drop_nms_addresses->has_data())
	|| (duplicate_drop !=  nullptr && duplicate_drop->has_data())
	|| (engine_id !=  nullptr && engine_id->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (incoming_queue !=  nullptr && incoming_queue->has_data())
	|| (infom_details !=  nullptr && infom_details->has_data())
	|| (mibs !=  nullptr && mibs->has_data())
	|| (nm_spackets !=  nullptr && nm_spackets->has_data())
	|| (nms_addresses !=  nullptr && nms_addresses->has_data())
	|| (poll_oids !=  nullptr && poll_oids->has_data())
	|| (request_type_detail !=  nullptr && request_type_detail->has_data())
	|| (rx_queue !=  nullptr && rx_queue->has_data())
	|| (serial_numbers !=  nullptr && serial_numbers->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (system_descr !=  nullptr && system_descr->has_data())
	|| (system_name !=  nullptr && system_name->has_data())
	|| (system_oid !=  nullptr && system_oid->has_data())
	|| (system_up_time !=  nullptr && system_up_time->has_data())
	|| (tables !=  nullptr && tables->has_data())
	|| (trap_infos !=  nullptr && trap_infos->has_data())
	|| (trap_oids !=  nullptr && trap_oids->has_data())
	|| (trap_queue !=  nullptr && trap_queue->has_data())
	|| (views !=  nullptr && views->has_data());
}

bool Snmp::Information::has_operation() const
{
    return is_set(operation)
	|| (bulk_stats_transfers !=  nullptr && bulk_stats_transfers->has_operation())
	|| (context_mapping !=  nullptr && context_mapping->has_operation())
	|| (drop_nms_addresses !=  nullptr && drop_nms_addresses->has_operation())
	|| (duplicate_drop !=  nullptr && duplicate_drop->has_operation())
	|| (engine_id !=  nullptr && engine_id->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (incoming_queue !=  nullptr && incoming_queue->has_operation())
	|| (infom_details !=  nullptr && infom_details->has_operation())
	|| (mibs !=  nullptr && mibs->has_operation())
	|| (nm_spackets !=  nullptr && nm_spackets->has_operation())
	|| (nms_addresses !=  nullptr && nms_addresses->has_operation())
	|| (poll_oids !=  nullptr && poll_oids->has_operation())
	|| (request_type_detail !=  nullptr && request_type_detail->has_operation())
	|| (rx_queue !=  nullptr && rx_queue->has_operation())
	|| (serial_numbers !=  nullptr && serial_numbers->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (system_descr !=  nullptr && system_descr->has_operation())
	|| (system_name !=  nullptr && system_name->has_operation())
	|| (system_oid !=  nullptr && system_oid->has_operation())
	|| (system_up_time !=  nullptr && system_up_time->has_operation())
	|| (tables !=  nullptr && tables->has_operation())
	|| (trap_infos !=  nullptr && trap_infos->has_operation())
	|| (trap_oids !=  nullptr && trap_oids->has_operation())
	|| (trap_queue !=  nullptr && trap_queue->has_operation())
	|| (views !=  nullptr && views->has_operation());
}

std::string Snmp::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Snmp::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk-stats-transfers")
    {
        if(bulk_stats_transfers == nullptr)
        {
            bulk_stats_transfers = std::make_shared<Snmp::Information::BulkStatsTransfers>();
        }
        return bulk_stats_transfers;
    }

    if(child_yang_name == "context-mapping")
    {
        if(context_mapping == nullptr)
        {
            context_mapping = std::make_shared<Snmp::Information::ContextMapping>();
        }
        return context_mapping;
    }

    if(child_yang_name == "drop-nms-addresses")
    {
        if(drop_nms_addresses == nullptr)
        {
            drop_nms_addresses = std::make_shared<Snmp::Information::DropNmsAddresses>();
        }
        return drop_nms_addresses;
    }

    if(child_yang_name == "duplicate-drop")
    {
        if(duplicate_drop == nullptr)
        {
            duplicate_drop = std::make_shared<Snmp::Information::DuplicateDrop>();
        }
        return duplicate_drop;
    }

    if(child_yang_name == "engine-id")
    {
        if(engine_id == nullptr)
        {
            engine_id = std::make_shared<Snmp::Information::EngineId>();
        }
        return engine_id;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Information::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "incoming-queue")
    {
        if(incoming_queue == nullptr)
        {
            incoming_queue = std::make_shared<Snmp::Information::IncomingQueue>();
        }
        return incoming_queue;
    }

    if(child_yang_name == "infom-details")
    {
        if(infom_details == nullptr)
        {
            infom_details = std::make_shared<Snmp::Information::InfomDetails>();
        }
        return infom_details;
    }

    if(child_yang_name == "mibs")
    {
        if(mibs == nullptr)
        {
            mibs = std::make_shared<Snmp::Information::Mibs>();
        }
        return mibs;
    }

    if(child_yang_name == "nm-spackets")
    {
        if(nm_spackets == nullptr)
        {
            nm_spackets = std::make_shared<Snmp::Information::NmSpackets>();
        }
        return nm_spackets;
    }

    if(child_yang_name == "nms-addresses")
    {
        if(nms_addresses == nullptr)
        {
            nms_addresses = std::make_shared<Snmp::Information::NmsAddresses>();
        }
        return nms_addresses;
    }

    if(child_yang_name == "poll-oids")
    {
        if(poll_oids == nullptr)
        {
            poll_oids = std::make_shared<Snmp::Information::PollOids>();
        }
        return poll_oids;
    }

    if(child_yang_name == "request-type-detail")
    {
        if(request_type_detail == nullptr)
        {
            request_type_detail = std::make_shared<Snmp::Information::RequestTypeDetail>();
        }
        return request_type_detail;
    }

    if(child_yang_name == "rx-queue")
    {
        if(rx_queue == nullptr)
        {
            rx_queue = std::make_shared<Snmp::Information::RxQueue>();
        }
        return rx_queue;
    }

    if(child_yang_name == "serial-numbers")
    {
        if(serial_numbers == nullptr)
        {
            serial_numbers = std::make_shared<Snmp::Information::SerialNumbers>();
        }
        return serial_numbers;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Snmp::Information::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "system-descr")
    {
        if(system_descr == nullptr)
        {
            system_descr = std::make_shared<Snmp::Information::SystemDescr>();
        }
        return system_descr;
    }

    if(child_yang_name == "system-name")
    {
        if(system_name == nullptr)
        {
            system_name = std::make_shared<Snmp::Information::SystemName>();
        }
        return system_name;
    }

    if(child_yang_name == "system-oid")
    {
        if(system_oid == nullptr)
        {
            system_oid = std::make_shared<Snmp::Information::SystemOid>();
        }
        return system_oid;
    }

    if(child_yang_name == "system-up-time")
    {
        if(system_up_time == nullptr)
        {
            system_up_time = std::make_shared<Snmp::Information::SystemUpTime>();
        }
        return system_up_time;
    }

    if(child_yang_name == "tables")
    {
        if(tables == nullptr)
        {
            tables = std::make_shared<Snmp::Information::Tables>();
        }
        return tables;
    }

    if(child_yang_name == "trap-infos")
    {
        if(trap_infos == nullptr)
        {
            trap_infos = std::make_shared<Snmp::Information::TrapInfos>();
        }
        return trap_infos;
    }

    if(child_yang_name == "trap-oids")
    {
        if(trap_oids == nullptr)
        {
            trap_oids = std::make_shared<Snmp::Information::TrapOids>();
        }
        return trap_oids;
    }

    if(child_yang_name == "trap-queue")
    {
        if(trap_queue == nullptr)
        {
            trap_queue = std::make_shared<Snmp::Information::TrapQueue>();
        }
        return trap_queue;
    }

    if(child_yang_name == "views")
    {
        if(views == nullptr)
        {
            views = std::make_shared<Snmp::Information::Views>();
        }
        return views;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulk_stats_transfers != nullptr)
    {
        children["bulk-stats-transfers"] = bulk_stats_transfers;
    }

    if(context_mapping != nullptr)
    {
        children["context-mapping"] = context_mapping;
    }

    if(drop_nms_addresses != nullptr)
    {
        children["drop-nms-addresses"] = drop_nms_addresses;
    }

    if(duplicate_drop != nullptr)
    {
        children["duplicate-drop"] = duplicate_drop;
    }

    if(engine_id != nullptr)
    {
        children["engine-id"] = engine_id;
    }

    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    if(incoming_queue != nullptr)
    {
        children["incoming-queue"] = incoming_queue;
    }

    if(infom_details != nullptr)
    {
        children["infom-details"] = infom_details;
    }

    if(mibs != nullptr)
    {
        children["mibs"] = mibs;
    }

    if(nm_spackets != nullptr)
    {
        children["nm-spackets"] = nm_spackets;
    }

    if(nms_addresses != nullptr)
    {
        children["nms-addresses"] = nms_addresses;
    }

    if(poll_oids != nullptr)
    {
        children["poll-oids"] = poll_oids;
    }

    if(request_type_detail != nullptr)
    {
        children["request-type-detail"] = request_type_detail;
    }

    if(rx_queue != nullptr)
    {
        children["rx-queue"] = rx_queue;
    }

    if(serial_numbers != nullptr)
    {
        children["serial-numbers"] = serial_numbers;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(system_descr != nullptr)
    {
        children["system-descr"] = system_descr;
    }

    if(system_name != nullptr)
    {
        children["system-name"] = system_name;
    }

    if(system_oid != nullptr)
    {
        children["system-oid"] = system_oid;
    }

    if(system_up_time != nullptr)
    {
        children["system-up-time"] = system_up_time;
    }

    if(tables != nullptr)
    {
        children["tables"] = tables;
    }

    if(trap_infos != nullptr)
    {
        children["trap-infos"] = trap_infos;
    }

    if(trap_oids != nullptr)
    {
        children["trap-oids"] = trap_oids;
    }

    if(trap_queue != nullptr)
    {
        children["trap-queue"] = trap_queue;
    }

    if(views != nullptr)
    {
        children["views"] = views;
    }

    return children;
}

void Snmp::Information::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "information";
}

Snmp::Information::Hosts::~Hosts()
{
}

bool Snmp::Information::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Hosts::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Hosts::Host::Host()
    :
    name{YType::str, "name"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

Snmp::Information::Hosts::Host::~Host()
{
}

bool Snmp::Information::Hosts::Host::has_data() const
{
    for (std::size_t index=0; index<host_information.size(); index++)
    {
        if(host_information[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Snmp::Information::Hosts::Host::has_operation() const
{
    for (std::size_t index=0; index<host_information.size(); index++)
    {
        if(host_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Snmp::Information::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/hosts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-information")
    {
        for(auto const & c : host_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Hosts::Host::HostInformation>();
        c->parent = this;
        host_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Information::Hosts::Host::HostInformation::HostInformation()
    :
    user{YType::str, "user"},
    snmp_target_address_port{YType::str, "snmp-target-address-port"},
    snmp_target_address_t_host{YType::str, "snmp-target-address-t-host"},
    snmp_target_addresstype{YType::str, "snmp-target-addresstype"},
    snmp_target_params_security_level{YType::str, "snmp-target-params-security-level"},
    snmp_target_params_security_model{YType::str, "snmp-target-params-security-model"},
    snmp_target_params_security_name{YType::str, "snmp-target-params-security-name"}
{
    yang_name = "host-information"; yang_parent_name = "host";
}

Snmp::Information::Hosts::Host::HostInformation::~HostInformation()
{
}

bool Snmp::Information::Hosts::Host::HostInformation::has_data() const
{
    return user.is_set
	|| snmp_target_address_port.is_set
	|| snmp_target_address_t_host.is_set
	|| snmp_target_addresstype.is_set
	|| snmp_target_params_security_level.is_set
	|| snmp_target_params_security_model.is_set
	|| snmp_target_params_security_name.is_set;
}

bool Snmp::Information::Hosts::Host::HostInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(user.operation)
	|| is_set(snmp_target_address_port.operation)
	|| is_set(snmp_target_address_t_host.operation)
	|| is_set(snmp_target_addresstype.operation)
	|| is_set(snmp_target_params_security_level.operation)
	|| is_set(snmp_target_params_security_model.operation)
	|| is_set(snmp_target_params_security_name.operation);
}

std::string Snmp::Information::Hosts::Host::HostInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-information" <<"[user='" <<user <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Hosts::Host::HostInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostInformation' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.operation)) leaf_name_data.push_back(user.get_name_leafdata());
    if (snmp_target_address_port.is_set || is_set(snmp_target_address_port.operation)) leaf_name_data.push_back(snmp_target_address_port.get_name_leafdata());
    if (snmp_target_address_t_host.is_set || is_set(snmp_target_address_t_host.operation)) leaf_name_data.push_back(snmp_target_address_t_host.get_name_leafdata());
    if (snmp_target_addresstype.is_set || is_set(snmp_target_addresstype.operation)) leaf_name_data.push_back(snmp_target_addresstype.get_name_leafdata());
    if (snmp_target_params_security_level.is_set || is_set(snmp_target_params_security_level.operation)) leaf_name_data.push_back(snmp_target_params_security_level.get_name_leafdata());
    if (snmp_target_params_security_model.is_set || is_set(snmp_target_params_security_model.operation)) leaf_name_data.push_back(snmp_target_params_security_model.get_name_leafdata());
    if (snmp_target_params_security_name.is_set || is_set(snmp_target_params_security_name.operation)) leaf_name_data.push_back(snmp_target_params_security_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Hosts::Host::HostInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Hosts::Host::HostInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Hosts::Host::HostInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user")
    {
        user = value;
    }
    if(value_path == "snmp-target-address-port")
    {
        snmp_target_address_port = value;
    }
    if(value_path == "snmp-target-address-t-host")
    {
        snmp_target_address_t_host = value;
    }
    if(value_path == "snmp-target-addresstype")
    {
        snmp_target_addresstype = value;
    }
    if(value_path == "snmp-target-params-security-level")
    {
        snmp_target_params_security_level = value;
    }
    if(value_path == "snmp-target-params-security-model")
    {
        snmp_target_params_security_model = value;
    }
    if(value_path == "snmp-target-params-security-name")
    {
        snmp_target_params_security_name = value;
    }
}

Snmp::Information::SystemUpTime::SystemUpTime()
    :
    system_up_time_edm{YType::str, "system-up-time-edm"}
{
    yang_name = "system-up-time"; yang_parent_name = "information";
}

Snmp::Information::SystemUpTime::~SystemUpTime()
{
}

bool Snmp::Information::SystemUpTime::has_data() const
{
    return system_up_time_edm.is_set;
}

bool Snmp::Information::SystemUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(system_up_time_edm.operation);
}

std::string Snmp::Information::SystemUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-up-time";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SystemUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_up_time_edm.is_set || is_set(system_up_time_edm.operation)) leaf_name_data.push_back(system_up_time_edm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SystemUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SystemUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::SystemUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-up-time-edm")
    {
        system_up_time_edm = value;
    }
}

Snmp::Information::NmsAddresses::NmsAddresses()
{
    yang_name = "nms-addresses"; yang_parent_name = "information";
}

Snmp::Information::NmsAddresses::~NmsAddresses()
{
}

bool Snmp::Information::NmsAddresses::has_data() const
{
    for (std::size_t index=0; index<nms_address.size(); index++)
    {
        if(nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::NmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<nms_address.size(); index++)
    {
        if(nms_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::NmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-addresses";

    return path_buffer.str();

}

const EntityPath Snmp::Information::NmsAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::NmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nms-address")
    {
        for(auto const & c : nms_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::NmsAddresses::NmsAddress>();
        c->parent = this;
        nms_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::NmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nms_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::NmsAddresses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::NmsAddresses::NmsAddress::NmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    get_request_count{YType::uint32, "get-request-count"},
    getbulk_request_count{YType::uint32, "getbulk-request-count"},
    getnext_request_count{YType::uint32, "getnext-request-count"},
    nms_address{YType::str, "nms-address"},
    set_request_count{YType::uint32, "set-request-count"},
    test_request_count{YType::uint32, "test-request-count"}
{
    yang_name = "nms-address"; yang_parent_name = "nms-addresses";
}

Snmp::Information::NmsAddresses::NmsAddress::~NmsAddress()
{
}

bool Snmp::Information::NmsAddresses::NmsAddress::has_data() const
{
    return nms_addr.is_set
	|| get_request_count.is_set
	|| getbulk_request_count.is_set
	|| getnext_request_count.is_set
	|| nms_address.is_set
	|| set_request_count.is_set
	|| test_request_count.is_set;
}

bool Snmp::Information::NmsAddresses::NmsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(nms_addr.operation)
	|| is_set(get_request_count.operation)
	|| is_set(getbulk_request_count.operation)
	|| is_set(getnext_request_count.operation)
	|| is_set(nms_address.operation)
	|| is_set(set_request_count.operation)
	|| is_set(test_request_count.operation);
}

std::string Snmp::Information::NmsAddresses::NmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-address" <<"[nms-addr='" <<nms_addr <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::NmsAddresses::NmsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/nms-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.operation)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (get_request_count.is_set || is_set(get_request_count.operation)) leaf_name_data.push_back(get_request_count.get_name_leafdata());
    if (getbulk_request_count.is_set || is_set(getbulk_request_count.operation)) leaf_name_data.push_back(getbulk_request_count.get_name_leafdata());
    if (getnext_request_count.is_set || is_set(getnext_request_count.operation)) leaf_name_data.push_back(getnext_request_count.get_name_leafdata());
    if (nms_address.is_set || is_set(nms_address.operation)) leaf_name_data.push_back(nms_address.get_name_leafdata());
    if (set_request_count.is_set || is_set(set_request_count.operation)) leaf_name_data.push_back(set_request_count.get_name_leafdata());
    if (test_request_count.is_set || is_set(test_request_count.operation)) leaf_name_data.push_back(test_request_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::NmsAddresses::NmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::NmsAddresses::NmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::NmsAddresses::NmsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
    }
    if(value_path == "get-request-count")
    {
        get_request_count = value;
    }
    if(value_path == "getbulk-request-count")
    {
        getbulk_request_count = value;
    }
    if(value_path == "getnext-request-count")
    {
        getnext_request_count = value;
    }
    if(value_path == "nms-address")
    {
        nms_address = value;
    }
    if(value_path == "set-request-count")
    {
        set_request_count = value;
    }
    if(value_path == "test-request-count")
    {
        test_request_count = value;
    }
}

Snmp::Information::EngineId::EngineId()
    :
    engine_id{YType::str, "engine-id"}
{
    yang_name = "engine-id"; yang_parent_name = "information";
}

Snmp::Information::EngineId::~EngineId()
{
}

bool Snmp::Information::EngineId::has_data() const
{
    return engine_id.is_set;
}

bool Snmp::Information::EngineId::has_operation() const
{
    return is_set(operation)
	|| is_set(engine_id.operation);
}

std::string Snmp::Information::EngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine-id";

    return path_buffer.str();

}

const EntityPath Snmp::Information::EngineId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.operation)) leaf_name_data.push_back(engine_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::EngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::EngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::EngineId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
    }
}

Snmp::Information::RxQueue::RxQueue()
    :
    in_avg{YType::uint32, "in-avg"},
    in_max{YType::uint32, "in-max"},
    in_min{YType::uint32, "in-min"},
    incoming_q{YType::str, "incoming-q"},
    pend_avg{YType::uint32, "pend-avg"},
    pend_max{YType::uint32, "pend-max"},
    pend_min{YType::uint32, "pend-min"},
    pending_q{YType::str, "pending-q"},
    qlen{YType::uint32, "qlen"}
{
    yang_name = "rx-queue"; yang_parent_name = "information";
}

Snmp::Information::RxQueue::~RxQueue()
{
}

bool Snmp::Information::RxQueue::has_data() const
{
    return in_avg.is_set
	|| in_max.is_set
	|| in_min.is_set
	|| incoming_q.is_set
	|| pend_avg.is_set
	|| pend_max.is_set
	|| pend_min.is_set
	|| pending_q.is_set
	|| qlen.is_set;
}

bool Snmp::Information::RxQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(in_avg.operation)
	|| is_set(in_max.operation)
	|| is_set(in_min.operation)
	|| is_set(incoming_q.operation)
	|| is_set(pend_avg.operation)
	|| is_set(pend_max.operation)
	|| is_set(pend_min.operation)
	|| is_set(pending_q.operation)
	|| is_set(qlen.operation);
}

std::string Snmp::Information::RxQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-queue";

    return path_buffer.str();

}

const EntityPath Snmp::Information::RxQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_avg.is_set || is_set(in_avg.operation)) leaf_name_data.push_back(in_avg.get_name_leafdata());
    if (in_max.is_set || is_set(in_max.operation)) leaf_name_data.push_back(in_max.get_name_leafdata());
    if (in_min.is_set || is_set(in_min.operation)) leaf_name_data.push_back(in_min.get_name_leafdata());
    if (incoming_q.is_set || is_set(incoming_q.operation)) leaf_name_data.push_back(incoming_q.get_name_leafdata());
    if (pend_avg.is_set || is_set(pend_avg.operation)) leaf_name_data.push_back(pend_avg.get_name_leafdata());
    if (pend_max.is_set || is_set(pend_max.operation)) leaf_name_data.push_back(pend_max.get_name_leafdata());
    if (pend_min.is_set || is_set(pend_min.operation)) leaf_name_data.push_back(pend_min.get_name_leafdata());
    if (pending_q.is_set || is_set(pending_q.operation)) leaf_name_data.push_back(pending_q.get_name_leafdata());
    if (qlen.is_set || is_set(qlen.operation)) leaf_name_data.push_back(qlen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::RxQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::RxQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::RxQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-avg")
    {
        in_avg = value;
    }
    if(value_path == "in-max")
    {
        in_max = value;
    }
    if(value_path == "in-min")
    {
        in_min = value;
    }
    if(value_path == "incoming-q")
    {
        incoming_q = value;
    }
    if(value_path == "pend-avg")
    {
        pend_avg = value;
    }
    if(value_path == "pend-max")
    {
        pend_max = value;
    }
    if(value_path == "pend-min")
    {
        pend_min = value;
    }
    if(value_path == "pending-q")
    {
        pending_q = value;
    }
    if(value_path == "qlen")
    {
        qlen = value;
    }
}

Snmp::Information::SystemName::SystemName()
    :
    system_name{YType::str, "system-name"}
{
    yang_name = "system-name"; yang_parent_name = "information";
}

Snmp::Information::SystemName::~SystemName()
{
}

bool Snmp::Information::SystemName::has_data() const
{
    return system_name.is_set;
}

bool Snmp::Information::SystemName::has_operation() const
{
    return is_set(operation)
	|| is_set(system_name.operation);
}

std::string Snmp::Information::SystemName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-name";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SystemName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SystemName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SystemName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::SystemName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-name")
    {
        system_name = value;
    }
}

Snmp::Information::RequestTypeDetail::RequestTypeDetail()
    :
    nms_addresses(std::make_shared<Snmp::Information::RequestTypeDetail::NmsAddresses>())
{
    nms_addresses->parent = this;

    yang_name = "request-type-detail"; yang_parent_name = "information";
}

Snmp::Information::RequestTypeDetail::~RequestTypeDetail()
{
}

bool Snmp::Information::RequestTypeDetail::has_data() const
{
    return (nms_addresses !=  nullptr && nms_addresses->has_data());
}

bool Snmp::Information::RequestTypeDetail::has_operation() const
{
    return is_set(operation)
	|| (nms_addresses !=  nullptr && nms_addresses->has_operation());
}

std::string Snmp::Information::RequestTypeDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-type-detail";

    return path_buffer.str();

}

const EntityPath Snmp::Information::RequestTypeDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::RequestTypeDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nms-addresses")
    {
        if(nms_addresses == nullptr)
        {
            nms_addresses = std::make_shared<Snmp::Information::RequestTypeDetail::NmsAddresses>();
        }
        return nms_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::RequestTypeDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nms_addresses != nullptr)
    {
        children["nms-addresses"] = nms_addresses;
    }

    return children;
}

void Snmp::Information::RequestTypeDetail::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddresses()
{
    yang_name = "nms-addresses"; yang_parent_name = "request-type-detail";
}

Snmp::Information::RequestTypeDetail::NmsAddresses::~NmsAddresses()
{
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::has_data() const
{
    for (std::size_t index=0; index<nms_address.size(); index++)
    {
        if(nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<nms_address.size(); index++)
    {
        if(nms_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-addresses";

    return path_buffer.str();

}

const EntityPath Snmp::Information::RequestTypeDetail::NmsAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/request-type-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::RequestTypeDetail::NmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nms-address")
    {
        for(auto const & c : nms_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress>();
        c->parent = this;
        nms_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::RequestTypeDetail::NmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nms_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::NmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    agent_request_count{YType::uint32, "agent-request-count"},
    entity_request_count{YType::uint32, "entity-request-count"},
    infra_request_count{YType::uint32, "infra-request-count"},
    interface_request_count{YType::uint32, "interface-request-count"},
    route_request_count{YType::uint32, "route-request-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "nms-address"; yang_parent_name = "nms-addresses";
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::~NmsAddress()
{
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::has_data() const
{
    return nms_addr.is_set
	|| agent_request_count.is_set
	|| entity_request_count.is_set
	|| infra_request_count.is_set
	|| interface_request_count.is_set
	|| route_request_count.is_set
	|| total_count.is_set;
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(nms_addr.operation)
	|| is_set(agent_request_count.operation)
	|| is_set(entity_request_count.operation)
	|| is_set(infra_request_count.operation)
	|| is_set(interface_request_count.operation)
	|| is_set(route_request_count.operation)
	|| is_set(total_count.operation);
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-address" <<"[nms-addr='" <<nms_addr <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/request-type-detail/nms-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.operation)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (agent_request_count.is_set || is_set(agent_request_count.operation)) leaf_name_data.push_back(agent_request_count.get_name_leafdata());
    if (entity_request_count.is_set || is_set(entity_request_count.operation)) leaf_name_data.push_back(entity_request_count.get_name_leafdata());
    if (infra_request_count.is_set || is_set(infra_request_count.operation)) leaf_name_data.push_back(infra_request_count.get_name_leafdata());
    if (interface_request_count.is_set || is_set(interface_request_count.operation)) leaf_name_data.push_back(interface_request_count.get_name_leafdata());
    if (route_request_count.is_set || is_set(route_request_count.operation)) leaf_name_data.push_back(route_request_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
    }
    if(value_path == "agent-request-count")
    {
        agent_request_count = value;
    }
    if(value_path == "entity-request-count")
    {
        entity_request_count = value;
    }
    if(value_path == "infra-request-count")
    {
        infra_request_count = value;
    }
    if(value_path == "interface-request-count")
    {
        interface_request_count = value;
    }
    if(value_path == "route-request-count")
    {
        route_request_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

Snmp::Information::DuplicateDrop::DuplicateDrop()
    :
    duplicate_drop_configured_timeout{YType::uint32, "duplicate-drop-configured-timeout"},
    duplicate_drop_disable_count{YType::uint32, "duplicate-drop-disable-count"},
    duplicate_drop_enable_count{YType::uint32, "duplicate-drop-enable-count"},
    duplicate_dropped_requests{YType::uint32, "duplicate-dropped-requests"},
    duplicate_request_latest_enable_time{YType::str, "duplicate-request-latest-enable-time"},
    duplicate_request_status{YType::enumeration, "duplicate-request-status"},
    first_enable_time{YType::str, "first-enable-time"},
    last_status_change_time{YType::str, "last-status-change-time"},
    latest_duplicate_dropped_requests{YType::uint32, "latest-duplicate-dropped-requests"},
    latest_retry_processed_requests{YType::uint32, "latest-retry-processed-requests"},
    retry_processed_requests{YType::uint32, "retry-processed-requests"}
{
    yang_name = "duplicate-drop"; yang_parent_name = "information";
}

Snmp::Information::DuplicateDrop::~DuplicateDrop()
{
}

bool Snmp::Information::DuplicateDrop::has_data() const
{
    return duplicate_drop_configured_timeout.is_set
	|| duplicate_drop_disable_count.is_set
	|| duplicate_drop_enable_count.is_set
	|| duplicate_dropped_requests.is_set
	|| duplicate_request_latest_enable_time.is_set
	|| duplicate_request_status.is_set
	|| first_enable_time.is_set
	|| last_status_change_time.is_set
	|| latest_duplicate_dropped_requests.is_set
	|| latest_retry_processed_requests.is_set
	|| retry_processed_requests.is_set;
}

bool Snmp::Information::DuplicateDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicate_drop_configured_timeout.operation)
	|| is_set(duplicate_drop_disable_count.operation)
	|| is_set(duplicate_drop_enable_count.operation)
	|| is_set(duplicate_dropped_requests.operation)
	|| is_set(duplicate_request_latest_enable_time.operation)
	|| is_set(duplicate_request_status.operation)
	|| is_set(first_enable_time.operation)
	|| is_set(last_status_change_time.operation)
	|| is_set(latest_duplicate_dropped_requests.operation)
	|| is_set(latest_retry_processed_requests.operation)
	|| is_set(retry_processed_requests.operation);
}

std::string Snmp::Information::DuplicateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-drop";

    return path_buffer.str();

}

const EntityPath Snmp::Information::DuplicateDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicate_drop_configured_timeout.is_set || is_set(duplicate_drop_configured_timeout.operation)) leaf_name_data.push_back(duplicate_drop_configured_timeout.get_name_leafdata());
    if (duplicate_drop_disable_count.is_set || is_set(duplicate_drop_disable_count.operation)) leaf_name_data.push_back(duplicate_drop_disable_count.get_name_leafdata());
    if (duplicate_drop_enable_count.is_set || is_set(duplicate_drop_enable_count.operation)) leaf_name_data.push_back(duplicate_drop_enable_count.get_name_leafdata());
    if (duplicate_dropped_requests.is_set || is_set(duplicate_dropped_requests.operation)) leaf_name_data.push_back(duplicate_dropped_requests.get_name_leafdata());
    if (duplicate_request_latest_enable_time.is_set || is_set(duplicate_request_latest_enable_time.operation)) leaf_name_data.push_back(duplicate_request_latest_enable_time.get_name_leafdata());
    if (duplicate_request_status.is_set || is_set(duplicate_request_status.operation)) leaf_name_data.push_back(duplicate_request_status.get_name_leafdata());
    if (first_enable_time.is_set || is_set(first_enable_time.operation)) leaf_name_data.push_back(first_enable_time.get_name_leafdata());
    if (last_status_change_time.is_set || is_set(last_status_change_time.operation)) leaf_name_data.push_back(last_status_change_time.get_name_leafdata());
    if (latest_duplicate_dropped_requests.is_set || is_set(latest_duplicate_dropped_requests.operation)) leaf_name_data.push_back(latest_duplicate_dropped_requests.get_name_leafdata());
    if (latest_retry_processed_requests.is_set || is_set(latest_retry_processed_requests.operation)) leaf_name_data.push_back(latest_retry_processed_requests.get_name_leafdata());
    if (retry_processed_requests.is_set || is_set(retry_processed_requests.operation)) leaf_name_data.push_back(retry_processed_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::DuplicateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::DuplicateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::DuplicateDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicate-drop-configured-timeout")
    {
        duplicate_drop_configured_timeout = value;
    }
    if(value_path == "duplicate-drop-disable-count")
    {
        duplicate_drop_disable_count = value;
    }
    if(value_path == "duplicate-drop-enable-count")
    {
        duplicate_drop_enable_count = value;
    }
    if(value_path == "duplicate-dropped-requests")
    {
        duplicate_dropped_requests = value;
    }
    if(value_path == "duplicate-request-latest-enable-time")
    {
        duplicate_request_latest_enable_time = value;
    }
    if(value_path == "duplicate-request-status")
    {
        duplicate_request_status = value;
    }
    if(value_path == "first-enable-time")
    {
        first_enable_time = value;
    }
    if(value_path == "last-status-change-time")
    {
        last_status_change_time = value;
    }
    if(value_path == "latest-duplicate-dropped-requests")
    {
        latest_duplicate_dropped_requests = value;
    }
    if(value_path == "latest-retry-processed-requests")
    {
        latest_retry_processed_requests = value;
    }
    if(value_path == "retry-processed-requests")
    {
        retry_processed_requests = value;
    }
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfers()
{
    yang_name = "bulk-stats-transfers"; yang_parent_name = "information";
}

Snmp::Information::BulkStatsTransfers::~BulkStatsTransfers()
{
}

bool Snmp::Information::BulkStatsTransfers::has_data() const
{
    for (std::size_t index=0; index<bulk_stats_transfer.size(); index++)
    {
        if(bulk_stats_transfer[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::BulkStatsTransfers::has_operation() const
{
    for (std::size_t index=0; index<bulk_stats_transfer.size(); index++)
    {
        if(bulk_stats_transfer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::BulkStatsTransfers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats-transfers";

    return path_buffer.str();

}

const EntityPath Snmp::Information::BulkStatsTransfers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::BulkStatsTransfers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk-stats-transfer")
    {
        for(auto const & c : bulk_stats_transfer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::BulkStatsTransfers::BulkStatsTransfer>();
        c->parent = this;
        bulk_stats_transfer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::BulkStatsTransfers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bulk_stats_transfer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::BulkStatsTransfers::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::BulkStatsTransfer()
    :
    transfer_name{YType::str, "transfer-name"},
    retained_file{YType::str, "retained-file"},
    retry_left{YType::uint32, "retry-left"},
    time_left{YType::uint32, "time-left"},
    transfer_name_xr{YType::str, "transfer-name-xr"},
    url_primary{YType::str, "url-primary"},
    url_secondary{YType::str, "url-secondary"}
{
    yang_name = "bulk-stats-transfer"; yang_parent_name = "bulk-stats-transfers";
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::~BulkStatsTransfer()
{
}

bool Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::has_data() const
{
    return transfer_name.is_set
	|| retained_file.is_set
	|| retry_left.is_set
	|| time_left.is_set
	|| transfer_name_xr.is_set
	|| url_primary.is_set
	|| url_secondary.is_set;
}

bool Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::has_operation() const
{
    return is_set(operation)
	|| is_set(transfer_name.operation)
	|| is_set(retained_file.operation)
	|| is_set(retry_left.operation)
	|| is_set(time_left.operation)
	|| is_set(transfer_name_xr.operation)
	|| is_set(url_primary.operation)
	|| is_set(url_secondary.operation);
}

std::string Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats-transfer" <<"[transfer-name='" <<transfer_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/bulk-stats-transfers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transfer_name.is_set || is_set(transfer_name.operation)) leaf_name_data.push_back(transfer_name.get_name_leafdata());
    if (retained_file.is_set || is_set(retained_file.operation)) leaf_name_data.push_back(retained_file.get_name_leafdata());
    if (retry_left.is_set || is_set(retry_left.operation)) leaf_name_data.push_back(retry_left.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.operation)) leaf_name_data.push_back(time_left.get_name_leafdata());
    if (transfer_name_xr.is_set || is_set(transfer_name_xr.operation)) leaf_name_data.push_back(transfer_name_xr.get_name_leafdata());
    if (url_primary.is_set || is_set(url_primary.operation)) leaf_name_data.push_back(url_primary.get_name_leafdata());
    if (url_secondary.is_set || is_set(url_secondary.operation)) leaf_name_data.push_back(url_secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transfer-name")
    {
        transfer_name = value;
    }
    if(value_path == "retained-file")
    {
        retained_file = value;
    }
    if(value_path == "retry-left")
    {
        retry_left = value;
    }
    if(value_path == "time-left")
    {
        time_left = value;
    }
    if(value_path == "transfer-name-xr")
    {
        transfer_name_xr = value;
    }
    if(value_path == "url-primary")
    {
        url_primary = value;
    }
    if(value_path == "url-secondary")
    {
        url_secondary = value;
    }
}

Snmp::Information::TrapInfos::TrapInfos()
{
    yang_name = "trap-infos"; yang_parent_name = "information";
}

Snmp::Information::TrapInfos::~TrapInfos()
{
}

bool Snmp::Information::TrapInfos::has_data() const
{
    for (std::size_t index=0; index<trap_info.size(); index++)
    {
        if(trap_info[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::TrapInfos::has_operation() const
{
    for (std::size_t index=0; index<trap_info.size(); index++)
    {
        if(trap_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::TrapInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-infos";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-info")
    {
        for(auto const & c : trap_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::TrapInfos::TrapInfo>();
        c->parent = this;
        trap_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::TrapInfos::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::TrapInfos::TrapInfo::TrapInfo()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"},
    port_xr{YType::uint16, "port-xr"},
    trap_host{YType::str, "trap-host"},
    trap_oid_count{YType::uint32, "trap-oid-count"}
{
    yang_name = "trap-info"; yang_parent_name = "trap-infos";
}

Snmp::Information::TrapInfos::TrapInfo::~TrapInfo()
{
}

bool Snmp::Information::TrapInfos::TrapInfo::has_data() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.size(); index++)
    {
        if(trap_oi_dinfo[index]->has_data())
            return true;
    }
    return host.is_set
	|| port.is_set
	|| port_xr.is_set
	|| trap_host.is_set
	|| trap_oid_count.is_set;
}

bool Snmp::Information::TrapInfos::TrapInfo::has_operation() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.size(); index++)
    {
        if(trap_oi_dinfo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(port.operation)
	|| is_set(port_xr.operation)
	|| is_set(trap_host.operation)
	|| is_set(trap_oid_count.operation);
}

std::string Snmp::Information::TrapInfos::TrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-info";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapInfos::TrapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.operation)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (trap_host.is_set || is_set(trap_host.operation)) leaf_name_data.push_back(trap_host.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.operation)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapInfos::TrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oi-dinfo")
    {
        for(auto const & c : trap_oi_dinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo>();
        c->parent = this;
        trap_oi_dinfo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapInfos::TrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_oi_dinfo)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::TrapInfos::TrapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
    }
    if(value_path == "trap-host")
    {
        trap_host = value;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
    }
}

Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::TrapOiDinfo()
    :
    count{YType::uint32, "count"},
    drop_count{YType::uint32, "drop-count"},
    lasrdrop_time{YType::str, "lasrdrop-time"},
    lastsent_time{YType::str, "lastsent-time"},
    retry_count{YType::uint32, "retry-count"},
    trap_oid{YType::str, "trap-oid"}
{
    yang_name = "trap-oi-dinfo"; yang_parent_name = "trap-info";
}

Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::~TrapOiDinfo()
{
}

bool Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::has_data() const
{
    return count.is_set
	|| drop_count.is_set
	|| lasrdrop_time.is_set
	|| lastsent_time.is_set
	|| retry_count.is_set
	|| trap_oid.is_set;
}

bool Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(drop_count.operation)
	|| is_set(lasrdrop_time.operation)
	|| is_set(lastsent_time.operation)
	|| is_set(retry_count.operation)
	|| is_set(trap_oid.operation);
}

std::string Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oi-dinfo";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-infos/trap-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (drop_count.is_set || is_set(drop_count.operation)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (lasrdrop_time.is_set || is_set(lasrdrop_time.operation)) leaf_name_data.push_back(lasrdrop_time.get_name_leafdata());
    if (lastsent_time.is_set || is_set(lastsent_time.operation)) leaf_name_data.push_back(lastsent_time.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.operation)) leaf_name_data.push_back(trap_oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "drop-count")
    {
        drop_count = value;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time = value;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "trap-oid")
    {
        trap_oid = value;
    }
}

Snmp::Information::PollOids::PollOids()
{
    yang_name = "poll-oids"; yang_parent_name = "information";
}

Snmp::Information::PollOids::~PollOids()
{
}

bool Snmp::Information::PollOids::has_data() const
{
    for (std::size_t index=0; index<poll_oid.size(); index++)
    {
        if(poll_oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::PollOids::has_operation() const
{
    for (std::size_t index=0; index<poll_oid.size(); index++)
    {
        if(poll_oid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::PollOids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poll-oids";

    return path_buffer.str();

}

const EntityPath Snmp::Information::PollOids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::PollOids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poll-oid")
    {
        for(auto const & c : poll_oid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::PollOids::PollOid>();
        c->parent = this;
        poll_oid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::PollOids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : poll_oid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::PollOids::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::PollOids::PollOid::PollOid()
    :
    object_id{YType::str, "object-id"},
    nms{YType::str, "nms"},
    nms_count{YType::uint32, "nms-count"},
    request_count{YType::uint32, "request-count"}
{
    yang_name = "poll-oid"; yang_parent_name = "poll-oids";
}

Snmp::Information::PollOids::PollOid::~PollOid()
{
}

bool Snmp::Information::PollOids::PollOid::has_data() const
{
    for (auto const & leaf : nms.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : request_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return object_id.is_set
	|| nms_count.is_set;
}

bool Snmp::Information::PollOids::PollOid::has_operation() const
{
    for (auto const & leaf : nms.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : request_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object_id.operation)
	|| is_set(nms.operation)
	|| is_set(nms_count.operation)
	|| is_set(request_count.operation);
}

std::string Snmp::Information::PollOids::PollOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poll-oid" <<"[object-id='" <<object_id <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::PollOids::PollOid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/poll-oids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.operation)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (nms_count.is_set || is_set(nms_count.operation)) leaf_name_data.push_back(nms_count.get_name_leafdata());

    auto nms_name_datas = nms.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nms_name_datas.begin(), nms_name_datas.end());
    auto request_count_name_datas = request_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), request_count_name_datas.begin(), request_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::PollOids::PollOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::PollOids::PollOid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::PollOids::PollOid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-id")
    {
        object_id = value;
    }
    if(value_path == "nms")
    {
        nms.append(value);
    }
    if(value_path == "nms-count")
    {
        nms_count = value;
    }
    if(value_path == "request-count")
    {
        request_count.append(value);
    }
}

Snmp::Information::InfomDetails::InfomDetails()
{
    yang_name = "infom-details"; yang_parent_name = "information";
}

Snmp::Information::InfomDetails::~InfomDetails()
{
}

bool Snmp::Information::InfomDetails::has_data() const
{
    for (std::size_t index=0; index<infom_detail.size(); index++)
    {
        if(infom_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::InfomDetails::has_operation() const
{
    for (std::size_t index=0; index<infom_detail.size(); index++)
    {
        if(infom_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::InfomDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infom-details";

    return path_buffer.str();

}

const EntityPath Snmp::Information::InfomDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::InfomDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "infom-detail")
    {
        for(auto const & c : infom_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::InfomDetails::InfomDetail>();
        c->parent = this;
        infom_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::InfomDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : infom_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::InfomDetails::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::InfomDetails::InfomDetail::InfomDetail()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"},
    port_xr{YType::uint16, "port-xr"},
    trap_host{YType::str, "trap-host"},
    trap_oid_count{YType::uint32, "trap-oid-count"}
{
    yang_name = "infom-detail"; yang_parent_name = "infom-details";
}

Snmp::Information::InfomDetails::InfomDetail::~InfomDetail()
{
}

bool Snmp::Information::InfomDetails::InfomDetail::has_data() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.size(); index++)
    {
        if(trap_oi_dinfo[index]->has_data())
            return true;
    }
    return host.is_set
	|| port.is_set
	|| port_xr.is_set
	|| trap_host.is_set
	|| trap_oid_count.is_set;
}

bool Snmp::Information::InfomDetails::InfomDetail::has_operation() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.size(); index++)
    {
        if(trap_oi_dinfo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(port.operation)
	|| is_set(port_xr.operation)
	|| is_set(trap_host.operation)
	|| is_set(trap_oid_count.operation);
}

std::string Snmp::Information::InfomDetails::InfomDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infom-detail";

    return path_buffer.str();

}

const EntityPath Snmp::Information::InfomDetails::InfomDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/infom-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.operation)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (trap_host.is_set || is_set(trap_host.operation)) leaf_name_data.push_back(trap_host.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.operation)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::InfomDetails::InfomDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oi-dinfo")
    {
        for(auto const & c : trap_oi_dinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo>();
        c->parent = this;
        trap_oi_dinfo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::InfomDetails::InfomDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_oi_dinfo)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::InfomDetails::InfomDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
    }
    if(value_path == "trap-host")
    {
        trap_host = value;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
    }
}

Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::TrapOiDinfo()
    :
    count{YType::uint32, "count"},
    drop_count{YType::uint32, "drop-count"},
    lasrdrop_time{YType::str, "lasrdrop-time"},
    lastsent_time{YType::str, "lastsent-time"},
    retry_count{YType::uint32, "retry-count"},
    trap_oid{YType::str, "trap-oid"}
{
    yang_name = "trap-oi-dinfo"; yang_parent_name = "infom-detail";
}

Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::~TrapOiDinfo()
{
}

bool Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::has_data() const
{
    return count.is_set
	|| drop_count.is_set
	|| lasrdrop_time.is_set
	|| lastsent_time.is_set
	|| retry_count.is_set
	|| trap_oid.is_set;
}

bool Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(drop_count.operation)
	|| is_set(lasrdrop_time.operation)
	|| is_set(lastsent_time.operation)
	|| is_set(retry_count.operation)
	|| is_set(trap_oid.operation);
}

std::string Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oi-dinfo";

    return path_buffer.str();

}

const EntityPath Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/infom-details/infom-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (drop_count.is_set || is_set(drop_count.operation)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (lasrdrop_time.is_set || is_set(lasrdrop_time.operation)) leaf_name_data.push_back(lasrdrop_time.get_name_leafdata());
    if (lastsent_time.is_set || is_set(lastsent_time.operation)) leaf_name_data.push_back(lastsent_time.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.operation)) leaf_name_data.push_back(trap_oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "drop-count")
    {
        drop_count = value;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time = value;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "trap-oid")
    {
        trap_oid = value;
    }
}

Snmp::Information::Statistics::Statistics()
    :
    asn_parse_errors_received{YType::uint32, "asn-parse-errors-received"},
    bad_community_names_received{YType::uint32, "bad-community-names-received"},
    bad_community_uses_received{YType::uint32, "bad-community-uses-received"},
    bad_values_received{YType::uint32, "bad-values-received"},
    bad_values_sent{YType::uint32, "bad-values-sent"},
    bad_versions_received{YType::uint32, "bad-versions-received"},
    general_errors_sent{YType::uint32, "general-errors-sent"},
    get_next_request_sent{YType::uint32, "get-next-request-sent"},
    get_next_requests_received{YType::uint32, "get-next-requests-received"},
    get_requests_received{YType::uint32, "get-requests-received"},
    get_requests_sent{YType::uint32, "get-requests-sent"},
    get_responses_received{YType::uint32, "get-responses-received"},
    get_responses_sent{YType::uint32, "get-responses-sent"},
    max_packet_size{YType::uint32, "max-packet-size"},
    no_such_names_received{YType::uint32, "no-such-names-received"},
    no_such_names_sent{YType::uint32, "no-such-names-sent"},
    packets_received{YType::uint32, "packets-received"},
    proxy_drop_count{YType::uint32, "proxy-drop-count"},
    read_only_received{YType::uint32, "read-only-received"},
    set_requests_received{YType::uint32, "set-requests-received"},
    set_requests_sent{YType::uint32, "set-requests-sent"},
    silent_drop_count{YType::uint32, "silent-drop-count"},
    too_big_packet_received{YType::uint32, "too-big-packet-received"},
    too_big_packets_sent{YType::uint32, "too-big-packets-sent"},
    total_general_errors{YType::uint32, "total-general-errors"},
    total_packets_sent{YType::uint32, "total-packets-sent"},
    total_requested_variables{YType::uint32, "total-requested-variables"},
    total_set_variables_received{YType::uint32, "total-set-variables-received"},
    traps_received{YType::uint32, "traps-received"},
    traps_sent{YType::uint32, "traps-sent"}
{
    yang_name = "statistics"; yang_parent_name = "information";
}

Snmp::Information::Statistics::~Statistics()
{
}

bool Snmp::Information::Statistics::has_data() const
{
    return asn_parse_errors_received.is_set
	|| bad_community_names_received.is_set
	|| bad_community_uses_received.is_set
	|| bad_values_received.is_set
	|| bad_values_sent.is_set
	|| bad_versions_received.is_set
	|| general_errors_sent.is_set
	|| get_next_request_sent.is_set
	|| get_next_requests_received.is_set
	|| get_requests_received.is_set
	|| get_requests_sent.is_set
	|| get_responses_received.is_set
	|| get_responses_sent.is_set
	|| max_packet_size.is_set
	|| no_such_names_received.is_set
	|| no_such_names_sent.is_set
	|| packets_received.is_set
	|| proxy_drop_count.is_set
	|| read_only_received.is_set
	|| set_requests_received.is_set
	|| set_requests_sent.is_set
	|| silent_drop_count.is_set
	|| too_big_packet_received.is_set
	|| too_big_packets_sent.is_set
	|| total_general_errors.is_set
	|| total_packets_sent.is_set
	|| total_requested_variables.is_set
	|| total_set_variables_received.is_set
	|| traps_received.is_set
	|| traps_sent.is_set;
}

bool Snmp::Information::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_parse_errors_received.operation)
	|| is_set(bad_community_names_received.operation)
	|| is_set(bad_community_uses_received.operation)
	|| is_set(bad_values_received.operation)
	|| is_set(bad_values_sent.operation)
	|| is_set(bad_versions_received.operation)
	|| is_set(general_errors_sent.operation)
	|| is_set(get_next_request_sent.operation)
	|| is_set(get_next_requests_received.operation)
	|| is_set(get_requests_received.operation)
	|| is_set(get_requests_sent.operation)
	|| is_set(get_responses_received.operation)
	|| is_set(get_responses_sent.operation)
	|| is_set(max_packet_size.operation)
	|| is_set(no_such_names_received.operation)
	|| is_set(no_such_names_sent.operation)
	|| is_set(packets_received.operation)
	|| is_set(proxy_drop_count.operation)
	|| is_set(read_only_received.operation)
	|| is_set(set_requests_received.operation)
	|| is_set(set_requests_sent.operation)
	|| is_set(silent_drop_count.operation)
	|| is_set(too_big_packet_received.operation)
	|| is_set(too_big_packets_sent.operation)
	|| is_set(total_general_errors.operation)
	|| is_set(total_packets_sent.operation)
	|| is_set(total_requested_variables.operation)
	|| is_set(total_set_variables_received.operation)
	|| is_set(traps_received.operation)
	|| is_set(traps_sent.operation);
}

std::string Snmp::Information::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_parse_errors_received.is_set || is_set(asn_parse_errors_received.operation)) leaf_name_data.push_back(asn_parse_errors_received.get_name_leafdata());
    if (bad_community_names_received.is_set || is_set(bad_community_names_received.operation)) leaf_name_data.push_back(bad_community_names_received.get_name_leafdata());
    if (bad_community_uses_received.is_set || is_set(bad_community_uses_received.operation)) leaf_name_data.push_back(bad_community_uses_received.get_name_leafdata());
    if (bad_values_received.is_set || is_set(bad_values_received.operation)) leaf_name_data.push_back(bad_values_received.get_name_leafdata());
    if (bad_values_sent.is_set || is_set(bad_values_sent.operation)) leaf_name_data.push_back(bad_values_sent.get_name_leafdata());
    if (bad_versions_received.is_set || is_set(bad_versions_received.operation)) leaf_name_data.push_back(bad_versions_received.get_name_leafdata());
    if (general_errors_sent.is_set || is_set(general_errors_sent.operation)) leaf_name_data.push_back(general_errors_sent.get_name_leafdata());
    if (get_next_request_sent.is_set || is_set(get_next_request_sent.operation)) leaf_name_data.push_back(get_next_request_sent.get_name_leafdata());
    if (get_next_requests_received.is_set || is_set(get_next_requests_received.operation)) leaf_name_data.push_back(get_next_requests_received.get_name_leafdata());
    if (get_requests_received.is_set || is_set(get_requests_received.operation)) leaf_name_data.push_back(get_requests_received.get_name_leafdata());
    if (get_requests_sent.is_set || is_set(get_requests_sent.operation)) leaf_name_data.push_back(get_requests_sent.get_name_leafdata());
    if (get_responses_received.is_set || is_set(get_responses_received.operation)) leaf_name_data.push_back(get_responses_received.get_name_leafdata());
    if (get_responses_sent.is_set || is_set(get_responses_sent.operation)) leaf_name_data.push_back(get_responses_sent.get_name_leafdata());
    if (max_packet_size.is_set || is_set(max_packet_size.operation)) leaf_name_data.push_back(max_packet_size.get_name_leafdata());
    if (no_such_names_received.is_set || is_set(no_such_names_received.operation)) leaf_name_data.push_back(no_such_names_received.get_name_leafdata());
    if (no_such_names_sent.is_set || is_set(no_such_names_sent.operation)) leaf_name_data.push_back(no_such_names_sent.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (proxy_drop_count.is_set || is_set(proxy_drop_count.operation)) leaf_name_data.push_back(proxy_drop_count.get_name_leafdata());
    if (read_only_received.is_set || is_set(read_only_received.operation)) leaf_name_data.push_back(read_only_received.get_name_leafdata());
    if (set_requests_received.is_set || is_set(set_requests_received.operation)) leaf_name_data.push_back(set_requests_received.get_name_leafdata());
    if (set_requests_sent.is_set || is_set(set_requests_sent.operation)) leaf_name_data.push_back(set_requests_sent.get_name_leafdata());
    if (silent_drop_count.is_set || is_set(silent_drop_count.operation)) leaf_name_data.push_back(silent_drop_count.get_name_leafdata());
    if (too_big_packet_received.is_set || is_set(too_big_packet_received.operation)) leaf_name_data.push_back(too_big_packet_received.get_name_leafdata());
    if (too_big_packets_sent.is_set || is_set(too_big_packets_sent.operation)) leaf_name_data.push_back(too_big_packets_sent.get_name_leafdata());
    if (total_general_errors.is_set || is_set(total_general_errors.operation)) leaf_name_data.push_back(total_general_errors.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.operation)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());
    if (total_requested_variables.is_set || is_set(total_requested_variables.operation)) leaf_name_data.push_back(total_requested_variables.get_name_leafdata());
    if (total_set_variables_received.is_set || is_set(total_set_variables_received.operation)) leaf_name_data.push_back(total_set_variables_received.get_name_leafdata());
    if (traps_received.is_set || is_set(traps_received.operation)) leaf_name_data.push_back(traps_received.get_name_leafdata());
    if (traps_sent.is_set || is_set(traps_sent.operation)) leaf_name_data.push_back(traps_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-parse-errors-received")
    {
        asn_parse_errors_received = value;
    }
    if(value_path == "bad-community-names-received")
    {
        bad_community_names_received = value;
    }
    if(value_path == "bad-community-uses-received")
    {
        bad_community_uses_received = value;
    }
    if(value_path == "bad-values-received")
    {
        bad_values_received = value;
    }
    if(value_path == "bad-values-sent")
    {
        bad_values_sent = value;
    }
    if(value_path == "bad-versions-received")
    {
        bad_versions_received = value;
    }
    if(value_path == "general-errors-sent")
    {
        general_errors_sent = value;
    }
    if(value_path == "get-next-request-sent")
    {
        get_next_request_sent = value;
    }
    if(value_path == "get-next-requests-received")
    {
        get_next_requests_received = value;
    }
    if(value_path == "get-requests-received")
    {
        get_requests_received = value;
    }
    if(value_path == "get-requests-sent")
    {
        get_requests_sent = value;
    }
    if(value_path == "get-responses-received")
    {
        get_responses_received = value;
    }
    if(value_path == "get-responses-sent")
    {
        get_responses_sent = value;
    }
    if(value_path == "max-packet-size")
    {
        max_packet_size = value;
    }
    if(value_path == "no-such-names-received")
    {
        no_such_names_received = value;
    }
    if(value_path == "no-such-names-sent")
    {
        no_such_names_sent = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "proxy-drop-count")
    {
        proxy_drop_count = value;
    }
    if(value_path == "read-only-received")
    {
        read_only_received = value;
    }
    if(value_path == "set-requests-received")
    {
        set_requests_received = value;
    }
    if(value_path == "set-requests-sent")
    {
        set_requests_sent = value;
    }
    if(value_path == "silent-drop-count")
    {
        silent_drop_count = value;
    }
    if(value_path == "too-big-packet-received")
    {
        too_big_packet_received = value;
    }
    if(value_path == "too-big-packets-sent")
    {
        too_big_packets_sent = value;
    }
    if(value_path == "total-general-errors")
    {
        total_general_errors = value;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
    }
    if(value_path == "total-requested-variables")
    {
        total_requested_variables = value;
    }
    if(value_path == "total-set-variables-received")
    {
        total_set_variables_received = value;
    }
    if(value_path == "traps-received")
    {
        traps_received = value;
    }
    if(value_path == "traps-sent")
    {
        traps_sent = value;
    }
}

Snmp::Information::IncomingQueue::IncomingQueue()
    :
    queue_count{YType::uint32, "queue-count"}
{
    yang_name = "incoming-queue"; yang_parent_name = "information";
}

Snmp::Information::IncomingQueue::~IncomingQueue()
{
}

bool Snmp::Information::IncomingQueue::has_data() const
{
    for (std::size_t index=0; index<inq_entry.size(); index++)
    {
        if(inq_entry[index]->has_data())
            return true;
    }
    return queue_count.is_set;
}

bool Snmp::Information::IncomingQueue::has_operation() const
{
    for (std::size_t index=0; index<inq_entry.size(); index++)
    {
        if(inq_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(queue_count.operation);
}

std::string Snmp::Information::IncomingQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-queue";

    return path_buffer.str();

}

const EntityPath Snmp::Information::IncomingQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_count.is_set || is_set(queue_count.operation)) leaf_name_data.push_back(queue_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::IncomingQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inq-entry")
    {
        for(auto const & c : inq_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::IncomingQueue::InqEntry>();
        c->parent = this;
        inq_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::IncomingQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inq_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::IncomingQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-count")
    {
        queue_count = value;
    }
}

Snmp::Information::IncomingQueue::InqEntry::InqEntry()
    :
    address_of_queue{YType::str, "address-of-queue"},
    last_access_time{YType::str, "last-access-time"},
    priority{YType::uint8, "priority"},
    processed_request_count{YType::uint32, "processed-request-count"},
    request_count{YType::uint32, "request-count"}
{
    yang_name = "inq-entry"; yang_parent_name = "incoming-queue";
}

Snmp::Information::IncomingQueue::InqEntry::~InqEntry()
{
}

bool Snmp::Information::IncomingQueue::InqEntry::has_data() const
{
    return address_of_queue.is_set
	|| last_access_time.is_set
	|| priority.is_set
	|| processed_request_count.is_set
	|| request_count.is_set;
}

bool Snmp::Information::IncomingQueue::InqEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(address_of_queue.operation)
	|| is_set(last_access_time.operation)
	|| is_set(priority.operation)
	|| is_set(processed_request_count.operation)
	|| is_set(request_count.operation);
}

std::string Snmp::Information::IncomingQueue::InqEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inq-entry";

    return path_buffer.str();

}

const EntityPath Snmp::Information::IncomingQueue::InqEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/incoming-queue/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_of_queue.is_set || is_set(address_of_queue.operation)) leaf_name_data.push_back(address_of_queue.get_name_leafdata());
    if (last_access_time.is_set || is_set(last_access_time.operation)) leaf_name_data.push_back(last_access_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (processed_request_count.is_set || is_set(processed_request_count.operation)) leaf_name_data.push_back(processed_request_count.get_name_leafdata());
    if (request_count.is_set || is_set(request_count.operation)) leaf_name_data.push_back(request_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::IncomingQueue::InqEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::IncomingQueue::InqEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::IncomingQueue::InqEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-of-queue")
    {
        address_of_queue = value;
    }
    if(value_path == "last-access-time")
    {
        last_access_time = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "processed-request-count")
    {
        processed_request_count = value;
    }
    if(value_path == "request-count")
    {
        request_count = value;
    }
}

Snmp::Information::ContextMapping::ContextMapping()
{
    yang_name = "context-mapping"; yang_parent_name = "information";
}

Snmp::Information::ContextMapping::~ContextMapping()
{
}

bool Snmp::Information::ContextMapping::has_data() const
{
    for (std::size_t index=0; index<contex_mapping.size(); index++)
    {
        if(contex_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::ContextMapping::has_operation() const
{
    for (std::size_t index=0; index<contex_mapping.size(); index++)
    {
        if(contex_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping";

    return path_buffer.str();

}

const EntityPath Snmp::Information::ContextMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contex-mapping")
    {
        for(auto const & c : contex_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::ContextMapping::ContexMapping>();
        c->parent = this;
        contex_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : contex_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::ContextMapping::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::ContextMapping::ContexMapping::ContexMapping()
    :
    context{YType::str, "context"},
    feature{YType::str, "feature"},
    feature_name{YType::str, "feature-name"},
    instance{YType::str, "instance"},
    topology{YType::str, "topology"}
{
    yang_name = "contex-mapping"; yang_parent_name = "context-mapping";
}

Snmp::Information::ContextMapping::ContexMapping::~ContexMapping()
{
}

bool Snmp::Information::ContextMapping::ContexMapping::has_data() const
{
    return context.is_set
	|| feature.is_set
	|| feature_name.is_set
	|| instance.is_set
	|| topology.is_set;
}

bool Snmp::Information::ContextMapping::ContexMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| is_set(feature.operation)
	|| is_set(feature_name.operation)
	|| is_set(instance.operation)
	|| is_set(topology.operation);
}

std::string Snmp::Information::ContextMapping::ContexMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contex-mapping";

    return path_buffer.str();

}

const EntityPath Snmp::Information::ContextMapping::ContexMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/context-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (feature.is_set || is_set(feature.operation)) leaf_name_data.push_back(feature.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.operation)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (topology.is_set || is_set(topology.operation)) leaf_name_data.push_back(topology.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::ContextMapping::ContexMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::ContextMapping::ContexMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::ContextMapping::ContexMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "feature")
    {
        feature = value;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "topology")
    {
        topology = value;
    }
}

Snmp::Information::TrapOids::TrapOids()
{
    yang_name = "trap-oids"; yang_parent_name = "information";
}

Snmp::Information::TrapOids::~TrapOids()
{
}

bool Snmp::Information::TrapOids::has_data() const
{
    for (std::size_t index=0; index<trap_oid.size(); index++)
    {
        if(trap_oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::TrapOids::has_operation() const
{
    for (std::size_t index=0; index<trap_oid.size(); index++)
    {
        if(trap_oid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::TrapOids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oids";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapOids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapOids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oid")
    {
        for(auto const & c : trap_oid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::TrapOids::TrapOid>();
        c->parent = this;
        trap_oid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapOids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_oid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::TrapOids::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::TrapOids::TrapOid::TrapOid()
    :
    trap_oid{YType::str, "trap-oid"},
    trap_oid_count{YType::uint32, "trap-oid-count"},
    trap_oid_xr{YType::str, "trap-oid-xr"}
{
    yang_name = "trap-oid"; yang_parent_name = "trap-oids";
}

Snmp::Information::TrapOids::TrapOid::~TrapOid()
{
}

bool Snmp::Information::TrapOids::TrapOid::has_data() const
{
    return trap_oid.is_set
	|| trap_oid_count.is_set
	|| trap_oid_xr.is_set;
}

bool Snmp::Information::TrapOids::TrapOid::has_operation() const
{
    return is_set(operation)
	|| is_set(trap_oid.operation)
	|| is_set(trap_oid_count.operation)
	|| is_set(trap_oid_xr.operation);
}

std::string Snmp::Information::TrapOids::TrapOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oid" <<"[trap-oid='" <<trap_oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapOids::TrapOid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-oids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.operation)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.operation)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());
    if (trap_oid_xr.is_set || is_set(trap_oid_xr.operation)) leaf_name_data.push_back(trap_oid_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapOids::TrapOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapOids::TrapOid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::TrapOids::TrapOid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
    }
    if(value_path == "trap-oid-xr")
    {
        trap_oid_xr = value;
    }
}

Snmp::Information::NmSpackets::NmSpackets()
{
    yang_name = "nm-spackets"; yang_parent_name = "information";
}

Snmp::Information::NmSpackets::~NmSpackets()
{
}

bool Snmp::Information::NmSpackets::has_data() const
{
    for (std::size_t index=0; index<nm_spacket.size(); index++)
    {
        if(nm_spacket[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::NmSpackets::has_operation() const
{
    for (std::size_t index=0; index<nm_spacket.size(); index++)
    {
        if(nm_spacket[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::NmSpackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nm-spackets";

    return path_buffer.str();

}

const EntityPath Snmp::Information::NmSpackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::NmSpackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nm-spacket")
    {
        for(auto const & c : nm_spacket)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::NmSpackets::NmSpacket>();
        c->parent = this;
        nm_spacket.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::NmSpackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nm_spacket)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::NmSpackets::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::NmSpackets::NmSpacket::NmSpacket()
    :
    packetcount{YType::str, "packetcount"},
    number_of_nmsq_pkts_dropped{YType::uint32, "number-of-nmsq-pkts-dropped"},
    number_of_pkts_dropped{YType::uint32, "number-of-pkts-dropped"},
    overload_end_time{YType::str, "overload-end-time"},
    overload_start_time{YType::str, "overload-start-time"}
{
    yang_name = "nm-spacket"; yang_parent_name = "nm-spackets";
}

Snmp::Information::NmSpackets::NmSpacket::~NmSpacket()
{
}

bool Snmp::Information::NmSpackets::NmSpacket::has_data() const
{
    return packetcount.is_set
	|| number_of_nmsq_pkts_dropped.is_set
	|| number_of_pkts_dropped.is_set
	|| overload_end_time.is_set
	|| overload_start_time.is_set;
}

bool Snmp::Information::NmSpackets::NmSpacket::has_operation() const
{
    return is_set(operation)
	|| is_set(packetcount.operation)
	|| is_set(number_of_nmsq_pkts_dropped.operation)
	|| is_set(number_of_pkts_dropped.operation)
	|| is_set(overload_end_time.operation)
	|| is_set(overload_start_time.operation);
}

std::string Snmp::Information::NmSpackets::NmSpacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nm-spacket" <<"[packetcount='" <<packetcount <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::NmSpackets::NmSpacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/nm-spackets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packetcount.is_set || is_set(packetcount.operation)) leaf_name_data.push_back(packetcount.get_name_leafdata());
    if (number_of_nmsq_pkts_dropped.is_set || is_set(number_of_nmsq_pkts_dropped.operation)) leaf_name_data.push_back(number_of_nmsq_pkts_dropped.get_name_leafdata());
    if (number_of_pkts_dropped.is_set || is_set(number_of_pkts_dropped.operation)) leaf_name_data.push_back(number_of_pkts_dropped.get_name_leafdata());
    if (overload_end_time.is_set || is_set(overload_end_time.operation)) leaf_name_data.push_back(overload_end_time.get_name_leafdata());
    if (overload_start_time.is_set || is_set(overload_start_time.operation)) leaf_name_data.push_back(overload_start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::NmSpackets::NmSpacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::NmSpackets::NmSpacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::NmSpackets::NmSpacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packetcount")
    {
        packetcount = value;
    }
    if(value_path == "number-of-nmsq-pkts-dropped")
    {
        number_of_nmsq_pkts_dropped = value;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped = value;
    }
    if(value_path == "overload-end-time")
    {
        overload_end_time = value;
    }
    if(value_path == "overload-start-time")
    {
        overload_start_time = value;
    }
}

Snmp::Information::Mibs::Mibs()
{
    yang_name = "mibs"; yang_parent_name = "information";
}

Snmp::Information::Mibs::~Mibs()
{
}

bool Snmp::Information::Mibs::has_data() const
{
    for (std::size_t index=0; index<mib.size(); index++)
    {
        if(mib[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Mibs::has_operation() const
{
    for (std::size_t index=0; index<mib.size(); index++)
    {
        if(mib[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Mibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mibs";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Mibs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Mibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib")
    {
        for(auto const & c : mib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Mibs::Mib>();
        c->parent = this;
        mib.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Mibs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mib)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Mibs::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Mibs::Mib::Mib()
    :
    name{YType::str, "name"}
    	,
    mib_information(std::make_shared<Snmp::Information::Mibs::Mib::MibInformation>())
	,oids(std::make_shared<Snmp::Information::Mibs::Mib::Oids>())
{
    mib_information->parent = this;

    oids->parent = this;

    yang_name = "mib"; yang_parent_name = "mibs";
}

Snmp::Information::Mibs::Mib::~Mib()
{
}

bool Snmp::Information::Mibs::Mib::has_data() const
{
    return name.is_set
	|| (mib_information !=  nullptr && mib_information->has_data())
	|| (oids !=  nullptr && oids->has_data());
}

bool Snmp::Information::Mibs::Mib::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (mib_information !=  nullptr && mib_information->has_operation())
	|| (oids !=  nullptr && oids->has_operation());
}

std::string Snmp::Information::Mibs::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Mibs::Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/mibs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Mibs::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-information")
    {
        if(mib_information == nullptr)
        {
            mib_information = std::make_shared<Snmp::Information::Mibs::Mib::MibInformation>();
        }
        return mib_information;
    }

    if(child_yang_name == "oids")
    {
        if(oids == nullptr)
        {
            oids = std::make_shared<Snmp::Information::Mibs::Mib::Oids>();
        }
        return oids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Mibs::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mib_information != nullptr)
    {
        children["mib-information"] = mib_information;
    }

    if(oids != nullptr)
    {
        children["oids"] = oids;
    }

    return children;
}

void Snmp::Information::Mibs::Mib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Information::Mibs::Mib::Oids::Oids()
{
    yang_name = "oids"; yang_parent_name = "mib";
}

Snmp::Information::Mibs::Mib::Oids::~Oids()
{
}

bool Snmp::Information::Mibs::Mib::Oids::has_data() const
{
    for (std::size_t index=0; index<oid.size(); index++)
    {
        if(oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Mibs::Mib::Oids::has_operation() const
{
    for (std::size_t index=0; index<oid.size(); index++)
    {
        if(oid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Mibs::Mib::Oids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oids";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Mibs::Mib::Oids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oids' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Mibs::Mib::Oids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oid")
    {
        for(auto const & c : oid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Mibs::Mib::Oids::Oid>();
        c->parent = this;
        oid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Mibs::Mib::Oids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Mibs::Mib::Oids::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Mibs::Mib::Oids::Oid::Oid()
    :
    oid{YType::str, "oid"},
    oid_name{YType::str, "oid-name"}
{
    yang_name = "oid"; yang_parent_name = "oids";
}

Snmp::Information::Mibs::Mib::Oids::Oid::~Oid()
{
}

bool Snmp::Information::Mibs::Mib::Oids::Oid::has_data() const
{
    return oid.is_set
	|| oid_name.is_set;
}

bool Snmp::Information::Mibs::Mib::Oids::Oid::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(oid_name.operation);
}

std::string Snmp::Information::Mibs::Mib::Oids::Oid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oid" <<"[oid='" <<oid <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Mibs::Mib::Oids::Oid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oid' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_name.is_set || is_set(oid_name.operation)) leaf_name_data.push_back(oid_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Mibs::Mib::Oids::Oid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Mibs::Mib::Oids::Oid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Mibs::Mib::Oids::Oid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "oid-name")
    {
        oid_name = value;
    }
}

Snmp::Information::Mibs::Mib::MibInformation::MibInformation()
    :
    dll_capabilities{YType::uint32, "dll-capabilities"},
    dll_name{YType::str, "dll-name"},
    is_mib_loaded{YType::boolean, "is-mib-loaded"},
    load_time{YType::uint32, "load-time"},
    mib_config_filename{YType::str, "mib-config-filename"},
    mib_name{YType::str, "mib-name"},
    timeout{YType::boolean, "timeout"},
    trap_strings{YType::str, "trap-strings"}
{
    yang_name = "mib-information"; yang_parent_name = "mib";
}

Snmp::Information::Mibs::Mib::MibInformation::~MibInformation()
{
}

bool Snmp::Information::Mibs::Mib::MibInformation::has_data() const
{
    return dll_capabilities.is_set
	|| dll_name.is_set
	|| is_mib_loaded.is_set
	|| load_time.is_set
	|| mib_config_filename.is_set
	|| mib_name.is_set
	|| timeout.is_set
	|| trap_strings.is_set;
}

bool Snmp::Information::Mibs::Mib::MibInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(dll_capabilities.operation)
	|| is_set(dll_name.operation)
	|| is_set(is_mib_loaded.operation)
	|| is_set(load_time.operation)
	|| is_set(mib_config_filename.operation)
	|| is_set(mib_name.operation)
	|| is_set(timeout.operation)
	|| is_set(trap_strings.operation);
}

std::string Snmp::Information::Mibs::Mib::MibInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-information";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Mibs::Mib::MibInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MibInformation' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dll_capabilities.is_set || is_set(dll_capabilities.operation)) leaf_name_data.push_back(dll_capabilities.get_name_leafdata());
    if (dll_name.is_set || is_set(dll_name.operation)) leaf_name_data.push_back(dll_name.get_name_leafdata());
    if (is_mib_loaded.is_set || is_set(is_mib_loaded.operation)) leaf_name_data.push_back(is_mib_loaded.get_name_leafdata());
    if (load_time.is_set || is_set(load_time.operation)) leaf_name_data.push_back(load_time.get_name_leafdata());
    if (mib_config_filename.is_set || is_set(mib_config_filename.operation)) leaf_name_data.push_back(mib_config_filename.get_name_leafdata());
    if (mib_name.is_set || is_set(mib_name.operation)) leaf_name_data.push_back(mib_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (trap_strings.is_set || is_set(trap_strings.operation)) leaf_name_data.push_back(trap_strings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Mibs::Mib::MibInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Mibs::Mib::MibInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Mibs::Mib::MibInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dll-capabilities")
    {
        dll_capabilities = value;
    }
    if(value_path == "dll-name")
    {
        dll_name = value;
    }
    if(value_path == "is-mib-loaded")
    {
        is_mib_loaded = value;
    }
    if(value_path == "load-time")
    {
        load_time = value;
    }
    if(value_path == "mib-config-filename")
    {
        mib_config_filename = value;
    }
    if(value_path == "mib-name")
    {
        mib_name = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "trap-strings")
    {
        trap_strings = value;
    }
}

Snmp::Information::SerialNumbers::SerialNumbers()
{
    yang_name = "serial-numbers"; yang_parent_name = "information";
}

Snmp::Information::SerialNumbers::~SerialNumbers()
{
}

bool Snmp::Information::SerialNumbers::has_data() const
{
    for (std::size_t index=0; index<serial_number.size(); index++)
    {
        if(serial_number[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::SerialNumbers::has_operation() const
{
    for (std::size_t index=0; index<serial_number.size(); index++)
    {
        if(serial_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::SerialNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-numbers";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SerialNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SerialNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serial-number")
    {
        for(auto const & c : serial_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::SerialNumbers::SerialNumber>();
        c->parent = this;
        serial_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SerialNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : serial_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::SerialNumbers::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::SerialNumbers::SerialNumber::SerialNumber()
    :
    error_status{YType::uint16, "error-status"},
    input_q{YType::str, "input-q"},
    nms{YType::str, "nms"},
    number{YType::str, "number"},
    output_q{YType::uint32, "output-q"},
    pdu_type{YType::uint16, "pdu-type"},
    pending_q{YType::uint32, "pending-q"},
    port{YType::uint16, "port"},
    port_xr{YType::uint16, "port-xr"},
    req_id{YType::int32, "req-id"},
    request_id{YType::uint32, "request-id"},
    response_out{YType::uint32, "response-out"},
    serial_num{YType::uint32, "serial-num"}
{
    yang_name = "serial-number"; yang_parent_name = "serial-numbers";
}

Snmp::Information::SerialNumbers::SerialNumber::~SerialNumber()
{
}

bool Snmp::Information::SerialNumbers::SerialNumber::has_data() const
{
    return error_status.is_set
	|| input_q.is_set
	|| nms.is_set
	|| number.is_set
	|| output_q.is_set
	|| pdu_type.is_set
	|| pending_q.is_set
	|| port.is_set
	|| port_xr.is_set
	|| req_id.is_set
	|| request_id.is_set
	|| response_out.is_set
	|| serial_num.is_set;
}

bool Snmp::Information::SerialNumbers::SerialNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(error_status.operation)
	|| is_set(input_q.operation)
	|| is_set(nms.operation)
	|| is_set(number.operation)
	|| is_set(output_q.operation)
	|| is_set(pdu_type.operation)
	|| is_set(pending_q.operation)
	|| is_set(port.operation)
	|| is_set(port_xr.operation)
	|| is_set(req_id.operation)
	|| is_set(request_id.operation)
	|| is_set(response_out.operation)
	|| is_set(serial_num.operation);
}

std::string Snmp::Information::SerialNumbers::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SerialNumbers::SerialNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/serial-numbers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_status.is_set || is_set(error_status.operation)) leaf_name_data.push_back(error_status.get_name_leafdata());
    if (input_q.is_set || is_set(input_q.operation)) leaf_name_data.push_back(input_q.get_name_leafdata());
    if (nms.is_set || is_set(nms.operation)) leaf_name_data.push_back(nms.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (output_q.is_set || is_set(output_q.operation)) leaf_name_data.push_back(output_q.get_name_leafdata());
    if (pdu_type.is_set || is_set(pdu_type.operation)) leaf_name_data.push_back(pdu_type.get_name_leafdata());
    if (pending_q.is_set || is_set(pending_q.operation)) leaf_name_data.push_back(pending_q.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.operation)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (req_id.is_set || is_set(req_id.operation)) leaf_name_data.push_back(req_id.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (response_out.is_set || is_set(response_out.operation)) leaf_name_data.push_back(response_out.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.operation)) leaf_name_data.push_back(serial_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SerialNumbers::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SerialNumbers::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::SerialNumbers::SerialNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-status")
    {
        error_status = value;
    }
    if(value_path == "input-q")
    {
        input_q = value;
    }
    if(value_path == "nms")
    {
        nms = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "output-q")
    {
        output_q = value;
    }
    if(value_path == "pdu-type")
    {
        pdu_type = value;
    }
    if(value_path == "pending-q")
    {
        pending_q = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
    }
    if(value_path == "req-id")
    {
        req_id = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "response-out")
    {
        response_out = value;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
    }
}

Snmp::Information::DropNmsAddresses::DropNmsAddresses()
{
    yang_name = "drop-nms-addresses"; yang_parent_name = "information";
}

Snmp::Information::DropNmsAddresses::~DropNmsAddresses()
{
}

bool Snmp::Information::DropNmsAddresses::has_data() const
{
    for (std::size_t index=0; index<drop_nms_address.size(); index++)
    {
        if(drop_nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::DropNmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<drop_nms_address.size(); index++)
    {
        if(drop_nms_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::DropNmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-nms-addresses";

    return path_buffer.str();

}

const EntityPath Snmp::Information::DropNmsAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::DropNmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-nms-address")
    {
        for(auto const & c : drop_nms_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::DropNmsAddresses::DropNmsAddress>();
        c->parent = this;
        drop_nms_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::DropNmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : drop_nms_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::DropNmsAddresses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::DropNmsAddresses::DropNmsAddress::DropNmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    aipc_count{YType::uint32, "aipc-count"},
    duplicate_count{YType::uint32, "duplicate-count"},
    encode_count{YType::uint32, "encode-count"},
    incoming_q_count{YType::uint32, "incoming-q-count"},
    internal_count{YType::uint32, "internal-count"},
    nms_address{YType::str, "nms-address"},
    overload_count{YType::uint32, "overload-count"},
    stack_count{YType::uint32, "stack-count"},
    threshold_incoming_q_count{YType::uint32, "threshold-incoming-q-count"},
    timeout_count{YType::uint32, "timeout-count"}
{
    yang_name = "drop-nms-address"; yang_parent_name = "drop-nms-addresses";
}

Snmp::Information::DropNmsAddresses::DropNmsAddress::~DropNmsAddress()
{
}

bool Snmp::Information::DropNmsAddresses::DropNmsAddress::has_data() const
{
    return nms_addr.is_set
	|| aipc_count.is_set
	|| duplicate_count.is_set
	|| encode_count.is_set
	|| incoming_q_count.is_set
	|| internal_count.is_set
	|| nms_address.is_set
	|| overload_count.is_set
	|| stack_count.is_set
	|| threshold_incoming_q_count.is_set
	|| timeout_count.is_set;
}

bool Snmp::Information::DropNmsAddresses::DropNmsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(nms_addr.operation)
	|| is_set(aipc_count.operation)
	|| is_set(duplicate_count.operation)
	|| is_set(encode_count.operation)
	|| is_set(incoming_q_count.operation)
	|| is_set(internal_count.operation)
	|| is_set(nms_address.operation)
	|| is_set(overload_count.operation)
	|| is_set(stack_count.operation)
	|| is_set(threshold_incoming_q_count.operation)
	|| is_set(timeout_count.operation);
}

std::string Snmp::Information::DropNmsAddresses::DropNmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-nms-address" <<"[nms-addr='" <<nms_addr <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::DropNmsAddresses::DropNmsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/drop-nms-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.operation)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (aipc_count.is_set || is_set(aipc_count.operation)) leaf_name_data.push_back(aipc_count.get_name_leafdata());
    if (duplicate_count.is_set || is_set(duplicate_count.operation)) leaf_name_data.push_back(duplicate_count.get_name_leafdata());
    if (encode_count.is_set || is_set(encode_count.operation)) leaf_name_data.push_back(encode_count.get_name_leafdata());
    if (incoming_q_count.is_set || is_set(incoming_q_count.operation)) leaf_name_data.push_back(incoming_q_count.get_name_leafdata());
    if (internal_count.is_set || is_set(internal_count.operation)) leaf_name_data.push_back(internal_count.get_name_leafdata());
    if (nms_address.is_set || is_set(nms_address.operation)) leaf_name_data.push_back(nms_address.get_name_leafdata());
    if (overload_count.is_set || is_set(overload_count.operation)) leaf_name_data.push_back(overload_count.get_name_leafdata());
    if (stack_count.is_set || is_set(stack_count.operation)) leaf_name_data.push_back(stack_count.get_name_leafdata());
    if (threshold_incoming_q_count.is_set || is_set(threshold_incoming_q_count.operation)) leaf_name_data.push_back(threshold_incoming_q_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.operation)) leaf_name_data.push_back(timeout_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::DropNmsAddresses::DropNmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::DropNmsAddresses::DropNmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::DropNmsAddresses::DropNmsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
    }
    if(value_path == "aipc-count")
    {
        aipc_count = value;
    }
    if(value_path == "duplicate-count")
    {
        duplicate_count = value;
    }
    if(value_path == "encode-count")
    {
        encode_count = value;
    }
    if(value_path == "incoming-q-count")
    {
        incoming_q_count = value;
    }
    if(value_path == "internal-count")
    {
        internal_count = value;
    }
    if(value_path == "nms-address")
    {
        nms_address = value;
    }
    if(value_path == "overload-count")
    {
        overload_count = value;
    }
    if(value_path == "stack-count")
    {
        stack_count = value;
    }
    if(value_path == "threshold-incoming-q-count")
    {
        threshold_incoming_q_count = value;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
    }
}

Snmp::Information::Views::Views()
{
    yang_name = "views"; yang_parent_name = "information";
}

Snmp::Information::Views::~Views()
{
}

bool Snmp::Information::Views::has_data() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Views::has_operation() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Views::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "views";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Views::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Views::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view")
    {
        for(auto const & c : view)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Views::View>();
        c->parent = this;
        view.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Views::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : view)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Views::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Views::View::View()
    :
    name{YType::str, "name"}
{
    yang_name = "view"; yang_parent_name = "views";
}

Snmp::Information::Views::View::~View()
{
}

bool Snmp::Information::Views::View::has_data() const
{
    for (std::size_t index=0; index<view_information.size(); index++)
    {
        if(view_information[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Snmp::Information::Views::View::has_operation() const
{
    for (std::size_t index=0; index<view_information.size(); index++)
    {
        if(view_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Snmp::Information::Views::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Views::View::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/views/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Views::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view-information")
    {
        for(auto const & c : view_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Views::View::ViewInformation>();
        c->parent = this;
        view_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Views::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : view_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Views::View::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Information::Views::View::ViewInformation::ViewInformation()
    :
    object_id{YType::str, "object-id"},
    snmp_view_family_status{YType::str, "snmp-view-family-status"},
    snmp_view_family_storage_type{YType::str, "snmp-view-family-storage-type"},
    snmp_view_family_type{YType::str, "snmp-view-family-type"}
{
    yang_name = "view-information"; yang_parent_name = "view";
}

Snmp::Information::Views::View::ViewInformation::~ViewInformation()
{
}

bool Snmp::Information::Views::View::ViewInformation::has_data() const
{
    return object_id.is_set
	|| snmp_view_family_status.is_set
	|| snmp_view_family_storage_type.is_set
	|| snmp_view_family_type.is_set;
}

bool Snmp::Information::Views::View::ViewInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(object_id.operation)
	|| is_set(snmp_view_family_status.operation)
	|| is_set(snmp_view_family_storage_type.operation)
	|| is_set(snmp_view_family_type.operation);
}

std::string Snmp::Information::Views::View::ViewInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view-information" <<"[object-id='" <<object_id <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Views::View::ViewInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ViewInformation' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.operation)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (snmp_view_family_status.is_set || is_set(snmp_view_family_status.operation)) leaf_name_data.push_back(snmp_view_family_status.get_name_leafdata());
    if (snmp_view_family_storage_type.is_set || is_set(snmp_view_family_storage_type.operation)) leaf_name_data.push_back(snmp_view_family_storage_type.get_name_leafdata());
    if (snmp_view_family_type.is_set || is_set(snmp_view_family_type.operation)) leaf_name_data.push_back(snmp_view_family_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Views::View::ViewInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Views::View::ViewInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Views::View::ViewInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-id")
    {
        object_id = value;
    }
    if(value_path == "snmp-view-family-status")
    {
        snmp_view_family_status = value;
    }
    if(value_path == "snmp-view-family-storage-type")
    {
        snmp_view_family_storage_type = value;
    }
    if(value_path == "snmp-view-family-type")
    {
        snmp_view_family_type = value;
    }
}

Snmp::Information::SystemDescr::SystemDescr()
    :
    sys_descr{YType::str, "sys-descr"}
{
    yang_name = "system-descr"; yang_parent_name = "information";
}

Snmp::Information::SystemDescr::~SystemDescr()
{
}

bool Snmp::Information::SystemDescr::has_data() const
{
    return sys_descr.is_set;
}

bool Snmp::Information::SystemDescr::has_operation() const
{
    return is_set(operation)
	|| is_set(sys_descr.operation);
}

std::string Snmp::Information::SystemDescr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-descr";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SystemDescr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_descr.is_set || is_set(sys_descr.operation)) leaf_name_data.push_back(sys_descr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SystemDescr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SystemDescr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::SystemDescr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sys-descr")
    {
        sys_descr = value;
    }
}

Snmp::Information::Tables::Tables()
    :
    groups(std::make_shared<Snmp::Information::Tables::Groups>())
	,user_engine_ids(std::make_shared<Snmp::Information::Tables::UserEngineIds>())
{
    groups->parent = this;

    user_engine_ids->parent = this;

    yang_name = "tables"; yang_parent_name = "information";
}

Snmp::Information::Tables::~Tables()
{
}

bool Snmp::Information::Tables::has_data() const
{
    return (groups !=  nullptr && groups->has_data())
	|| (user_engine_ids !=  nullptr && user_engine_ids->has_data());
}

bool Snmp::Information::Tables::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (user_engine_ids !=  nullptr && user_engine_ids->has_operation());
}

std::string Snmp::Information::Tables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tables";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Snmp::Information::Tables::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "user-engine-ids")
    {
        if(user_engine_ids == nullptr)
        {
            user_engine_ids = std::make_shared<Snmp::Information::Tables::UserEngineIds>();
        }
        return user_engine_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(user_engine_ids != nullptr)
    {
        children["user-engine-ids"] = user_engine_ids;
    }

    return children;
}

void Snmp::Information::Tables::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Tables::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "tables";
}

Snmp::Information::Tables::Groups::~Groups()
{
}

bool Snmp::Information::Tables::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Tables::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Tables::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Tables::Groups::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Tables::Groups::Group::Group()
    :
    name{YType::str, "name"}
    	,
    group_informations(std::make_shared<Snmp::Information::Tables::Groups::Group::GroupInformations>())
{
    group_informations->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Snmp::Information::Tables::Groups::Group::~Group()
{
}

bool Snmp::Information::Tables::Groups::Group::has_data() const
{
    return name.is_set
	|| (group_informations !=  nullptr && group_informations->has_data());
}

bool Snmp::Information::Tables::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (group_informations !=  nullptr && group_informations->has_operation());
}

std::string Snmp::Information::Tables::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-informations")
    {
        if(group_informations == nullptr)
        {
            group_informations = std::make_shared<Snmp::Information::Tables::Groups::Group::GroupInformations>();
        }
        return group_informations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_informations != nullptr)
    {
        children["group-informations"] = group_informations;
    }

    return children;
}

void Snmp::Information::Tables::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformations()
{
    yang_name = "group-informations"; yang_parent_name = "group";
}

Snmp::Information::Tables::Groups::Group::GroupInformations::~GroupInformations()
{
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::has_data() const
{
    for (std::size_t index=0; index<group_information.size(); index++)
    {
        if(group_information[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::has_operation() const
{
    for (std::size_t index=0; index<group_information.size(); index++)
    {
        if(group_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Tables::Groups::Group::GroupInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-informations";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::Groups::Group::GroupInformations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInformations' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::Groups::Group::GroupInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-information")
    {
        for(auto const & c : group_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation>();
        c->parent = this;
        group_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::Groups::Group::GroupInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::GroupInformation()
    :
    level{YType::str, "level"},
    modelnumber{YType::str, "modelnumber"},
    vacm_access_notify_view_name{YType::str, "vacm-access-notify-view-name"},
    vacm_access_read_view_name{YType::str, "vacm-access-read-view-name"},
    vacm_access_status{YType::uint32, "vacm-access-status"},
    vacm_access_write_view_name{YType::str, "vacm-access-write-view-name"}
{
    yang_name = "group-information"; yang_parent_name = "group-informations";
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::~GroupInformation()
{
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::has_data() const
{
    return level.is_set
	|| modelnumber.is_set
	|| vacm_access_notify_view_name.is_set
	|| vacm_access_read_view_name.is_set
	|| vacm_access_status.is_set
	|| vacm_access_write_view_name.is_set;
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(modelnumber.operation)
	|| is_set(vacm_access_notify_view_name.operation)
	|| is_set(vacm_access_read_view_name.operation)
	|| is_set(vacm_access_status.operation)
	|| is_set(vacm_access_write_view_name.operation);
}

std::string Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-information";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInformation' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (modelnumber.is_set || is_set(modelnumber.operation)) leaf_name_data.push_back(modelnumber.get_name_leafdata());
    if (vacm_access_notify_view_name.is_set || is_set(vacm_access_notify_view_name.operation)) leaf_name_data.push_back(vacm_access_notify_view_name.get_name_leafdata());
    if (vacm_access_read_view_name.is_set || is_set(vacm_access_read_view_name.operation)) leaf_name_data.push_back(vacm_access_read_view_name.get_name_leafdata());
    if (vacm_access_status.is_set || is_set(vacm_access_status.operation)) leaf_name_data.push_back(vacm_access_status.get_name_leafdata());
    if (vacm_access_write_view_name.is_set || is_set(vacm_access_write_view_name.operation)) leaf_name_data.push_back(vacm_access_write_view_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "modelnumber")
    {
        modelnumber = value;
    }
    if(value_path == "vacm-access-notify-view-name")
    {
        vacm_access_notify_view_name = value;
    }
    if(value_path == "vacm-access-read-view-name")
    {
        vacm_access_read_view_name = value;
    }
    if(value_path == "vacm-access-status")
    {
        vacm_access_status = value;
    }
    if(value_path == "vacm-access-write-view-name")
    {
        vacm_access_write_view_name = value;
    }
}

Snmp::Information::Tables::UserEngineIds::UserEngineIds()
{
    yang_name = "user-engine-ids"; yang_parent_name = "tables";
}

Snmp::Information::Tables::UserEngineIds::~UserEngineIds()
{
}

bool Snmp::Information::Tables::UserEngineIds::has_data() const
{
    for (std::size_t index=0; index<user_engine_id.size(); index++)
    {
        if(user_engine_id[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::UserEngineIds::has_operation() const
{
    for (std::size_t index=0; index<user_engine_id.size(); index++)
    {
        if(user_engine_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Information::Tables::UserEngineIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-engine-ids";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::UserEngineIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::UserEngineIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-engine-id")
    {
        for(auto const & c : user_engine_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Tables::UserEngineIds::UserEngineId>();
        c->parent = this;
        user_engine_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::UserEngineIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : user_engine_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Tables::UserEngineIds::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserEngineId()
    :
    engine_id{YType::str, "engine-id"}
{
    yang_name = "user-engine-id"; yang_parent_name = "user-engine-ids";
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::~UserEngineId()
{
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::has_data() const
{
    for (std::size_t index=0; index<user_name.size(); index++)
    {
        if(user_name[index]->has_data())
            return true;
    }
    return engine_id.is_set;
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::has_operation() const
{
    for (std::size_t index=0; index<user_name.size(); index++)
    {
        if(user_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(engine_id.operation);
}

std::string Snmp::Information::Tables::UserEngineIds::UserEngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-engine-id" <<"[engine-id='" <<engine_id <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::UserEngineIds::UserEngineId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/user-engine-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.operation)) leaf_name_data.push_back(engine_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::UserEngineIds::UserEngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-name")
    {
        for(auto const & c : user_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName>();
        c->parent = this;
        user_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::UserEngineIds::UserEngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : user_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
    }
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::UserName()
    :
    user_name{YType::str, "user-name"},
    usm_user_status{YType::uint32, "usm-user-status"},
    usm_user_storage_type{YType::uint32, "usm-user-storage-type"}
{
    yang_name = "user-name"; yang_parent_name = "user-engine-id";
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::~UserName()
{
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::has_data() const
{
    return user_name.is_set
	|| usm_user_status.is_set
	|| usm_user_storage_type.is_set;
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::has_operation() const
{
    return is_set(operation)
	|| is_set(user_name.operation)
	|| is_set(usm_user_status.operation)
	|| is_set(usm_user_storage_type.operation);
}

std::string Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name" <<"[user-name='" <<user_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserName' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (usm_user_status.is_set || is_set(usm_user_status.operation)) leaf_name_data.push_back(usm_user_status.get_name_leafdata());
    if (usm_user_storage_type.is_set || is_set(usm_user_storage_type.operation)) leaf_name_data.push_back(usm_user_storage_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-name")
    {
        user_name = value;
    }
    if(value_path == "usm-user-status")
    {
        usm_user_status = value;
    }
    if(value_path == "usm-user-storage-type")
    {
        usm_user_storage_type = value;
    }
}

Snmp::Information::SystemOid::SystemOid()
    :
    sys_obj_id{YType::str, "sys-obj-id"}
{
    yang_name = "system-oid"; yang_parent_name = "information";
}

Snmp::Information::SystemOid::~SystemOid()
{
}

bool Snmp::Information::SystemOid::has_data() const
{
    return sys_obj_id.is_set;
}

bool Snmp::Information::SystemOid::has_operation() const
{
    return is_set(operation)
	|| is_set(sys_obj_id.operation);
}

std::string Snmp::Information::SystemOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-oid";

    return path_buffer.str();

}

const EntityPath Snmp::Information::SystemOid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_obj_id.is_set || is_set(sys_obj_id.operation)) leaf_name_data.push_back(sys_obj_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::SystemOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::SystemOid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::SystemOid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sys-obj-id")
    {
        sys_obj_id = value;
    }
}

Snmp::Information::TrapQueue::TrapQueue()
    :
    trap_avg{YType::uint32, "trap-avg"},
    trap_max{YType::uint32, "trap-max"},
    trap_min{YType::uint32, "trap-min"},
    trap_q{YType::str, "trap-q"}
{
    yang_name = "trap-queue"; yang_parent_name = "information";
}

Snmp::Information::TrapQueue::~TrapQueue()
{
}

bool Snmp::Information::TrapQueue::has_data() const
{
    return trap_avg.is_set
	|| trap_max.is_set
	|| trap_min.is_set
	|| trap_q.is_set;
}

bool Snmp::Information::TrapQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(trap_avg.operation)
	|| is_set(trap_max.operation)
	|| is_set(trap_min.operation)
	|| is_set(trap_q.operation);
}

std::string Snmp::Information::TrapQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-queue";

    return path_buffer.str();

}

const EntityPath Snmp::Information::TrapQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_avg.is_set || is_set(trap_avg.operation)) leaf_name_data.push_back(trap_avg.get_name_leafdata());
    if (trap_max.is_set || is_set(trap_max.operation)) leaf_name_data.push_back(trap_max.get_name_leafdata());
    if (trap_min.is_set || is_set(trap_min.operation)) leaf_name_data.push_back(trap_min.get_name_leafdata());
    if (trap_q.is_set || is_set(trap_q.operation)) leaf_name_data.push_back(trap_q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Information::TrapQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Information::TrapQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Information::TrapQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trap-avg")
    {
        trap_avg = value;
    }
    if(value_path == "trap-max")
    {
        trap_max = value;
    }
    if(value_path == "trap-min")
    {
        trap_min = value;
    }
    if(value_path == "trap-q")
    {
        trap_q = value;
    }
}

Snmp::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "snmp";
}

Snmp::Interfaces::~Interfaces()
{
}

bool Snmp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Snmp::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Snmp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    interface_index{YType::int32, "interface-index"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Snmp::Interfaces::Interface::~Interface()
{
}

bool Snmp::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| interface_index.is_set;
}

bool Snmp::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(interface_index.operation);
}

std::string Snmp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
}

Snmp::Correlator::Correlator()
    :
    buffer_status(std::make_shared<Snmp::Correlator::BufferStatus>())
	,rule_details(std::make_shared<Snmp::Correlator::RuleDetails>())
	,rule_set_details(std::make_shared<Snmp::Correlator::RuleSetDetails>())
	,traps(std::make_shared<Snmp::Correlator::Traps>())
{
    buffer_status->parent = this;

    rule_details->parent = this;

    rule_set_details->parent = this;

    traps->parent = this;

    yang_name = "correlator"; yang_parent_name = "snmp";
}

Snmp::Correlator::~Correlator()
{
}

bool Snmp::Correlator::has_data() const
{
    return (buffer_status !=  nullptr && buffer_status->has_data())
	|| (rule_details !=  nullptr && rule_details->has_data())
	|| (rule_set_details !=  nullptr && rule_set_details->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Snmp::Correlator::has_operation() const
{
    return is_set(operation)
	|| (buffer_status !=  nullptr && buffer_status->has_operation())
	|| (rule_details !=  nullptr && rule_details->has_operation())
	|| (rule_set_details !=  nullptr && rule_set_details->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Snmp::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "correlator";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-status")
    {
        if(buffer_status == nullptr)
        {
            buffer_status = std::make_shared<Snmp::Correlator::BufferStatus>();
        }
        return buffer_status;
    }

    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Snmp::Correlator::RuleDetails>();
        }
        return rule_details;
    }

    if(child_yang_name == "rule-set-details")
    {
        if(rule_set_details == nullptr)
        {
            rule_set_details = std::make_shared<Snmp::Correlator::RuleSetDetails>();
        }
        return rule_set_details;
    }

    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Snmp::Correlator::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_status != nullptr)
    {
        children["buffer-status"] = buffer_status;
    }

    if(rule_details != nullptr)
    {
        children["rule-details"] = rule_details;
    }

    if(rule_set_details != nullptr)
    {
        children["rule-set-details"] = rule_set_details;
    }

    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Snmp::Correlator::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleDetails::RuleDetails()
{
    yang_name = "rule-details"; yang_parent_name = "correlator";
}

Snmp::Correlator::RuleDetails::~RuleDetails()
{
}

bool Snmp::Correlator::RuleDetails::has_data() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.size(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        for(auto const & c : rule_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail>();
        c->parent = this;
        rule_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleDetails::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    timeout{YType::uint32, "timeout"}
    	,
    root_cause(std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause>())
	,rule_summary(std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary>())
{
    root_cause->parent = this;

    rule_summary->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details";
}

Snmp::Correlator::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::has_data() const
{
    for (std::size_t index=0; index<apply_host.size(); index++)
    {
        if(apply_host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<non_rootcaus.size(); index++)
    {
        if(non_rootcaus[index]->has_data())
            return true;
    }
    return rule_name.is_set
	|| timeout.is_set
	|| (root_cause !=  nullptr && root_cause->has_data())
	|| (rule_summary !=  nullptr && rule_summary->has_data());
}

bool Snmp::Correlator::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<apply_host.size(); index++)
    {
        if(apply_host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<non_rootcaus.size(); index++)
    {
        if(non_rootcaus[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| is_set(timeout.operation)
	|| (root_cause !=  nullptr && root_cause->has_operation())
	|| (rule_summary !=  nullptr && rule_summary->has_operation());
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/rule-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apply-host")
    {
        for(auto const & c : apply_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost>();
        c->parent = this;
        apply_host.push_back(c);
        return c;
    }

    if(child_yang_name == "non-rootcaus")
    {
        for(auto const & c : non_rootcaus)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus>();
        c->parent = this;
        non_rootcaus.push_back(c);
        return c;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause>();
        }
        return root_cause;
    }

    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : apply_host)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : non_rootcaus)
    {
        children[c->get_segment_path()] = c;
    }

    if(root_cause != nullptr)
    {
        children["root-cause"] = root_cause;
    }

    if(rule_summary != nullptr)
    {
        children["rule-summary"] = rule_summary;
    }

    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    buffered_traps_count{YType::uint32, "buffered-traps-count"},
    rule_name{YType::str, "rule-name"},
    rule_state{YType::enumeration, "rule-state"}
{
    yang_name = "rule-summary"; yang_parent_name = "rule-detail";
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    return buffered_traps_count.is_set
	|| rule_name.is_set
	|| rule_state.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(buffered_traps_count.operation)
	|| is_set(rule_name.operation)
	|| is_set(rule_state.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RuleSummary' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_traps_count.is_set || is_set(buffered_traps_count.operation)) leaf_name_data.push_back(buffered_traps_count.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count = value;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::RootCause()
    :
    oid{YType::str, "oid"}
{
    yang_name = "root-cause"; yang_parent_name = "rule-detail";
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::~RootCause()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return oid.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(oid.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RootCause' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::VarBind()
    :
    match_type{YType::enumeration, "match-type"},
    oid{YType::str, "oid"},
    reg_exp{YType::str, "reg-exp"}
{
    yang_name = "var-bind"; yang_parent_name = "root-cause";
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::~VarBind()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::has_data() const
{
    return match_type.is_set
	|| oid.is_set
	|| reg_exp.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::has_operation() const
{
    return is_set(operation)
	|| is_set(match_type.operation)
	|| is_set(oid.operation)
	|| is_set(reg_exp.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBind' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_type.is_set || is_set(match_type.operation)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (reg_exp.is_set || is_set(reg_exp.operation)) leaf_name_data.push_back(reg_exp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-type")
    {
        match_type = value;
    }
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "reg-exp")
    {
        reg_exp = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::NonRootcaus()
    :
    oid{YType::str, "oid"}
{
    yang_name = "non-rootcaus"; yang_parent_name = "rule-detail";
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::~NonRootcaus()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return oid.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(oid.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-rootcaus";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonRootcaus' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::VarBind()
    :
    match_type{YType::enumeration, "match-type"},
    oid{YType::str, "oid"},
    reg_exp{YType::str, "reg-exp"}
{
    yang_name = "var-bind"; yang_parent_name = "non-rootcaus";
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::~VarBind()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::has_data() const
{
    return match_type.is_set
	|| oid.is_set
	|| reg_exp.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::has_operation() const
{
    return is_set(operation)
	|| is_set(match_type.operation)
	|| is_set(oid.operation)
	|| is_set(reg_exp.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBind' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_type.is_set || is_set(match_type.operation)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (reg_exp.is_set || is_set(reg_exp.operation)) leaf_name_data.push_back(reg_exp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-type")
    {
        match_type = value;
    }
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "reg-exp")
    {
        reg_exp = value;
    }
}

Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::ApplyHost()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{
    yang_name = "apply-host"; yang_parent_name = "rule-detail";
}

Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::~ApplyHost()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::has_data() const
{
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(port.operation);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-host";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplyHost' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Snmp::Correlator::BufferStatus::BufferStatus()
    :
    configured_size{YType::uint32, "configured-size"},
    current_size{YType::uint32, "current-size"}
{
    yang_name = "buffer-status"; yang_parent_name = "correlator";
}

Snmp::Correlator::BufferStatus::~BufferStatus()
{
}

bool Snmp::Correlator::BufferStatus::has_data() const
{
    return configured_size.is_set
	|| current_size.is_set;
}

bool Snmp::Correlator::BufferStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_size.operation)
	|| is_set(current_size.operation);
}

std::string Snmp::Correlator::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::BufferStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_size.is_set || is_set(configured_size.operation)) leaf_name_data.push_back(configured_size.get_name_leafdata());
    if (current_size.is_set || is_set(current_size.operation)) leaf_name_data.push_back(current_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::BufferStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::BufferStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-size")
    {
        configured_size = value;
    }
    if(value_path == "current-size")
    {
        current_size = value;
    }
}

Snmp::Correlator::RuleSetDetails::RuleSetDetails()
{
    yang_name = "rule-set-details"; yang_parent_name = "correlator";
}

Snmp::Correlator::RuleSetDetails::~RuleSetDetails()
{
}

bool Snmp::Correlator::RuleSetDetails::has_data() const
{
    for (std::size_t index=0; index<rule_set_detail.size(); index++)
    {
        if(rule_set_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSetDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_set_detail.size(); index++)
    {
        if(rule_set_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::RuleSetDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-details";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSetDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-detail")
    {
        for(auto const & c : rule_set_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSetDetails::RuleSetDetail>();
        c->parent = this;
        rule_set_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSetDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSetDetails::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::RuleSetDetail()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
{
    yang_name = "rule-set-detail"; yang_parent_name = "rule-set-details";
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::~RuleSetDetail()
{
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::has_data() const
{
    for (std::size_t index=0; index<rules.size(); index++)
    {
        if(rules[index]->has_data())
            return true;
    }
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::has_operation() const
{
    for (std::size_t index=0; index<rules.size(); index++)
    {
        if(rules[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rule_set_name.operation)
	|| is_set(rule_set_name_xr.operation);
}

std::string Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-detail" <<"[rule-set-name='" <<rule_set_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/rule-set-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.operation)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.operation)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        for(auto const & c : rules)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules>();
        c->parent = this;
        rules.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rules)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
    }
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::Rules()
    :
    buffered_traps_count{YType::uint32, "buffered-traps-count"},
    rule_name{YType::str, "rule-name"},
    rule_state{YType::enumeration, "rule-state"}
{
    yang_name = "rules"; yang_parent_name = "rule-set-detail";
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::~Rules()
{
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::has_data() const
{
    return buffered_traps_count.is_set
	|| rule_name.is_set
	|| rule_state.is_set;
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::has_operation() const
{
    return is_set(operation)
	|| is_set(buffered_traps_count.operation)
	|| is_set(rule_name.operation)
	|| is_set(rule_state.operation);
}

std::string Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rules' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffered_traps_count.is_set || is_set(buffered_traps_count.operation)) leaf_name_data.push_back(buffered_traps_count.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.operation)) leaf_name_data.push_back(rule_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count = value;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
    }
}

Snmp::Correlator::Traps::Traps()
{
    yang_name = "traps"; yang_parent_name = "correlator";
}

Snmp::Correlator::Traps::~Traps()
{
}

bool Snmp::Correlator::Traps::has_data() const
{
    for (std::size_t index=0; index<trap.size(); index++)
    {
        if(trap[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Traps::has_operation() const
{
    for (std::size_t index=0; index<trap.size(); index++)
    {
        if(trap[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::Correlator::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Traps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        for(auto const & c : trap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Traps::Trap>();
        c->parent = this;
        trap.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Traps::set_value(const std::string & value_path, std::string value)
{
}

Snmp::Correlator::Traps::Trap::Trap()
    :
    entry_id{YType::int32, "entry-id"},
    correlation_id{YType::uint32, "correlation-id"},
    is_root_cause{YType::boolean, "is-root-cause"},
    rule_name{YType::str, "rule-name"}
    	,
    trap_info(std::make_shared<Snmp::Correlator::Traps::Trap::TrapInfo>())
{
    trap_info->parent = this;

    yang_name = "trap"; yang_parent_name = "traps";
}

Snmp::Correlator::Traps::Trap::~Trap()
{
}

bool Snmp::Correlator::Traps::Trap::has_data() const
{
    return entry_id.is_set
	|| correlation_id.is_set
	|| is_root_cause.is_set
	|| rule_name.is_set
	|| (trap_info !=  nullptr && trap_info->has_data());
}

bool Snmp::Correlator::Traps::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_id.operation)
	|| is_set(correlation_id.operation)
	|| is_set(is_root_cause.operation)
	|| is_set(rule_name.operation)
	|| (trap_info !=  nullptr && trap_info->has_operation());
}

std::string Snmp::Correlator::Traps::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap" <<"[entry-id='" <<entry_id <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Traps::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.operation)) leaf_name_data.push_back(entry_id.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.operation)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (is_root_cause.is_set || is_set(is_root_cause.operation)) leaf_name_data.push_back(is_root_cause.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Traps::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-info")
    {
        if(trap_info == nullptr)
        {
            trap_info = std::make_shared<Snmp::Correlator::Traps::Trap::TrapInfo>();
        }
        return trap_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Traps::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_info != nullptr)
    {
        children["trap-info"] = trap_info;
    }

    return children;
}

void Snmp::Correlator::Traps::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
    }
    if(value_path == "is-root-cause")
    {
        is_root_cause = value;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
}

Snmp::Correlator::Traps::Trap::TrapInfo::TrapInfo()
    :
    oid{YType::str, "oid"},
    relative_timestamp{YType::uint32, "relative-timestamp"},
    timestamp{YType::uint64, "timestamp"}
{
    yang_name = "trap-info"; yang_parent_name = "trap";
}

Snmp::Correlator::Traps::Trap::TrapInfo::~TrapInfo()
{
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return oid.is_set
	|| relative_timestamp.is_set
	|| timestamp.is_set;
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(relative_timestamp.operation)
	|| is_set(timestamp.operation);
}

std::string Snmp::Correlator::Traps::Trap::TrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-info";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Traps::Trap::TrapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapInfo' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (relative_timestamp.is_set || is_set(relative_timestamp.operation)) leaf_name_data.push_back(relative_timestamp.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Traps::Trap::TrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Traps::Trap::TrapInfo::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Traps::Trap::TrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Traps::Trap::TrapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "relative-timestamp")
    {
        relative_timestamp = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::VarBind()
    :
    oid{YType::str, "oid"},
    value_{YType::str, "value"}
{
    yang_name = "var-bind"; yang_parent_name = "trap-info";
}

Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::has_data() const
{
    return oid.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(value_.operation);
}

std::string Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";

    return path_buffer.str();

}

const EntityPath Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VarBind' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Snmp::InterfaceIndexes::InterfaceIndexes()
{
    yang_name = "interface-indexes"; yang_parent_name = "snmp";
}

Snmp::InterfaceIndexes::~InterfaceIndexes()
{
}

bool Snmp::InterfaceIndexes::has_data() const
{
    for (std::size_t index=0; index<interface_index.size(); index++)
    {
        if(interface_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceIndexes::has_operation() const
{
    for (std::size_t index=0; index<interface_index.size(); index++)
    {
        if(interface_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-index")
    {
        for(auto const & c : interface_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::InterfaceIndexes::InterfaceIndex>();
        c->parent = this;
        interface_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceIndexes::InterfaceIndex::InterfaceIndex()
    :
    interface_index{YType::int32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-index"; yang_parent_name = "interface-indexes";
}

Snmp::InterfaceIndexes::InterfaceIndex::~InterfaceIndex()
{
}

bool Snmp::InterfaceIndexes::InterfaceIndex::has_data() const
{
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Snmp::InterfaceIndexes::InterfaceIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(interface_name.operation);
}

std::string Snmp::InterfaceIndexes::InterfaceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-index" <<"[interface-index='" <<interface_index <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceIndexes::InterfaceIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/interface-indexes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceIndexes::InterfaceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceIndexes::InterfaceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceIndexes::InterfaceIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Snmp::IfIndexes::IfIndexes()
{
    yang_name = "if-indexes"; yang_parent_name = "snmp";
}

Snmp::IfIndexes::~IfIndexes()
{
}

bool Snmp::IfIndexes::has_data() const
{
    for (std::size_t index=0; index<if_index.size(); index++)
    {
        if(if_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::IfIndexes::has_operation() const
{
    for (std::size_t index=0; index<if_index.size(); index++)
    {
        if(if_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::IfIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::IfIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::IfIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-index")
    {
        for(auto const & c : if_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::IfIndexes::IfIndex>();
        c->parent = this;
        if_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::IfIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::IfIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::IfIndexes::IfIndex::IfIndex()
    :
    interface_index{YType::int32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "if-index"; yang_parent_name = "if-indexes";
}

Snmp::IfIndexes::IfIndex::~IfIndex()
{
}

bool Snmp::IfIndexes::IfIndex::has_data() const
{
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Snmp::IfIndexes::IfIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(interface_name.operation);
}

std::string Snmp::IfIndexes::IfIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-index" <<"[interface-index='" <<interface_index <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::IfIndexes::IfIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/if-indexes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::IfIndexes::IfIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::IfIndexes::IfIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::IfIndexes::IfIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Snmp::EntityMib::EntityMib()
    :
    entity_physical_indexes(std::make_shared<Snmp::EntityMib::EntityPhysicalIndexes>())
{
    entity_physical_indexes->parent = this;

    yang_name = "entity-mib"; yang_parent_name = "snmp";
}

Snmp::EntityMib::~EntityMib()
{
}

bool Snmp::EntityMib::has_data() const
{
    return (entity_physical_indexes !=  nullptr && entity_physical_indexes->has_data());
}

bool Snmp::EntityMib::has_operation() const
{
    return is_set(operation)
	|| (entity_physical_indexes !=  nullptr && entity_physical_indexes->has_operation());
}

std::string Snmp::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-oper:entity-mib";

    return path_buffer.str();

}

const EntityPath Snmp::EntityMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entity-physical-indexes")
    {
        if(entity_physical_indexes == nullptr)
        {
            entity_physical_indexes = std::make_shared<Snmp::EntityMib::EntityPhysicalIndexes>();
        }
        return entity_physical_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EntityMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entity_physical_indexes != nullptr)
    {
        children["entity-physical-indexes"] = entity_physical_indexes;
    }

    return children;
}

void Snmp::EntityMib::set_value(const std::string & value_path, std::string value)
{
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndexes()
{
    yang_name = "entity-physical-indexes"; yang_parent_name = "entity-mib";
}

Snmp::EntityMib::EntityPhysicalIndexes::~EntityPhysicalIndexes()
{
}

bool Snmp::EntityMib::EntityPhysicalIndexes::has_data() const
{
    for (std::size_t index=0; index<entity_physical_index.size(); index++)
    {
        if(entity_physical_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::EntityMib::EntityPhysicalIndexes::has_operation() const
{
    for (std::size_t index=0; index<entity_physical_index.size(); index++)
    {
        if(entity_physical_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-physical-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::EntityMib::EntityPhysicalIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-entitymib-oper:entity-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::EntityMib::EntityPhysicalIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entity-physical-index")
    {
        for(auto const & c : entity_physical_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex>();
        c->parent = this;
        entity_physical_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EntityMib::EntityPhysicalIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entity_physical_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::EntityMib::EntityPhysicalIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::EntityPhysicalIndex()
    :
    entity_phynum{YType::str, "entity-phynum"},
    ent_physical_descr{YType::str, "ent-physical-descr"},
    ent_physical_firmware_rev{YType::str, "ent-physical-firmware-rev"},
    ent_physical_hardware_rev{YType::str, "ent-physical-hardware-rev"},
    ent_physical_mfg_name{YType::str, "ent-physical-mfg-name"},
    ent_physical_modelname{YType::str, "ent-physical-modelname"},
    ent_physical_name{YType::str, "ent-physical-name"},
    ent_physical_serial_num{YType::str, "ent-physical-serial-num"},
    ent_physical_software_rev{YType::str, "ent-physical-software-rev"},
    location{YType::str, "location"},
    physical_index{YType::uint32, "physical-index"}
{
    yang_name = "entity-physical-index"; yang_parent_name = "entity-physical-indexes";
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::~EntityPhysicalIndex()
{
}

bool Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::has_data() const
{
    return entity_phynum.is_set
	|| ent_physical_descr.is_set
	|| ent_physical_firmware_rev.is_set
	|| ent_physical_hardware_rev.is_set
	|| ent_physical_mfg_name.is_set
	|| ent_physical_modelname.is_set
	|| ent_physical_name.is_set
	|| ent_physical_serial_num.is_set
	|| ent_physical_software_rev.is_set
	|| location.is_set
	|| physical_index.is_set;
}

bool Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(entity_phynum.operation)
	|| is_set(ent_physical_descr.operation)
	|| is_set(ent_physical_firmware_rev.operation)
	|| is_set(ent_physical_hardware_rev.operation)
	|| is_set(ent_physical_mfg_name.operation)
	|| is_set(ent_physical_modelname.operation)
	|| is_set(ent_physical_name.operation)
	|| is_set(ent_physical_serial_num.operation)
	|| is_set(ent_physical_software_rev.operation)
	|| is_set(location.operation)
	|| is_set(physical_index.operation);
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-physical-index" <<"[entity-phynum='" <<entity_phynum <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-entitymib-oper:entity-mib/entity-physical-indexes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_phynum.is_set || is_set(entity_phynum.operation)) leaf_name_data.push_back(entity_phynum.get_name_leafdata());
    if (ent_physical_descr.is_set || is_set(ent_physical_descr.operation)) leaf_name_data.push_back(ent_physical_descr.get_name_leafdata());
    if (ent_physical_firmware_rev.is_set || is_set(ent_physical_firmware_rev.operation)) leaf_name_data.push_back(ent_physical_firmware_rev.get_name_leafdata());
    if (ent_physical_hardware_rev.is_set || is_set(ent_physical_hardware_rev.operation)) leaf_name_data.push_back(ent_physical_hardware_rev.get_name_leafdata());
    if (ent_physical_mfg_name.is_set || is_set(ent_physical_mfg_name.operation)) leaf_name_data.push_back(ent_physical_mfg_name.get_name_leafdata());
    if (ent_physical_modelname.is_set || is_set(ent_physical_modelname.operation)) leaf_name_data.push_back(ent_physical_modelname.get_name_leafdata());
    if (ent_physical_name.is_set || is_set(ent_physical_name.operation)) leaf_name_data.push_back(ent_physical_name.get_name_leafdata());
    if (ent_physical_serial_num.is_set || is_set(ent_physical_serial_num.operation)) leaf_name_data.push_back(ent_physical_serial_num.get_name_leafdata());
    if (ent_physical_software_rev.is_set || is_set(ent_physical_software_rev.operation)) leaf_name_data.push_back(ent_physical_software_rev.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (physical_index.is_set || is_set(physical_index.operation)) leaf_name_data.push_back(physical_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entity-phynum")
    {
        entity_phynum = value;
    }
    if(value_path == "ent-physical-descr")
    {
        ent_physical_descr = value;
    }
    if(value_path == "ent-physical-firmware-rev")
    {
        ent_physical_firmware_rev = value;
    }
    if(value_path == "ent-physical-hardware-rev")
    {
        ent_physical_hardware_rev = value;
    }
    if(value_path == "ent-physical-mfg-name")
    {
        ent_physical_mfg_name = value;
    }
    if(value_path == "ent-physical-modelname")
    {
        ent_physical_modelname = value;
    }
    if(value_path == "ent-physical-name")
    {
        ent_physical_name = value;
    }
    if(value_path == "ent-physical-serial-num")
    {
        ent_physical_serial_num = value;
    }
    if(value_path == "ent-physical-software-rev")
    {
        ent_physical_software_rev = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "physical-index")
    {
        physical_index = value;
    }
}

Snmp::InterfaceMib::InterfaceMib()
    :
    interface_aliases(std::make_shared<Snmp::InterfaceMib::InterfaceAliases>())
	,interface_connectors(std::make_shared<Snmp::InterfaceMib::InterfaceConnectors>())
	,interface_stack_statuses(std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses>())
	,interfaces(std::make_shared<Snmp::InterfaceMib::Interfaces>())
	,notification_interfaces(std::make_shared<Snmp::InterfaceMib::NotificationInterfaces>())
{
    interface_aliases->parent = this;

    interface_connectors->parent = this;

    interface_stack_statuses->parent = this;

    interfaces->parent = this;

    notification_interfaces->parent = this;

    yang_name = "interface-mib"; yang_parent_name = "snmp";
}

Snmp::InterfaceMib::~InterfaceMib()
{
}

bool Snmp::InterfaceMib::has_data() const
{
    return (interface_aliases !=  nullptr && interface_aliases->has_data())
	|| (interface_connectors !=  nullptr && interface_connectors->has_data())
	|| (interface_stack_statuses !=  nullptr && interface_stack_statuses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (notification_interfaces !=  nullptr && notification_interfaces->has_data());
}

bool Snmp::InterfaceMib::has_operation() const
{
    return is_set(operation)
	|| (interface_aliases !=  nullptr && interface_aliases->has_operation())
	|| (interface_connectors !=  nullptr && interface_connectors->has_operation())
	|| (interface_stack_statuses !=  nullptr && interface_stack_statuses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (notification_interfaces !=  nullptr && notification_interfaces->has_operation());
}

std::string Snmp::InterfaceMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ifmib-oper:interface-mib";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-aliases")
    {
        if(interface_aliases == nullptr)
        {
            interface_aliases = std::make_shared<Snmp::InterfaceMib::InterfaceAliases>();
        }
        return interface_aliases;
    }

    if(child_yang_name == "interface-connectors")
    {
        if(interface_connectors == nullptr)
        {
            interface_connectors = std::make_shared<Snmp::InterfaceMib::InterfaceConnectors>();
        }
        return interface_connectors;
    }

    if(child_yang_name == "interface-stack-statuses")
    {
        if(interface_stack_statuses == nullptr)
        {
            interface_stack_statuses = std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses>();
        }
        return interface_stack_statuses;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Snmp::InterfaceMib::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "notification-interfaces")
    {
        if(notification_interfaces == nullptr)
        {
            notification_interfaces = std::make_shared<Snmp::InterfaceMib::NotificationInterfaces>();
        }
        return notification_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_aliases != nullptr)
    {
        children["interface-aliases"] = interface_aliases;
    }

    if(interface_connectors != nullptr)
    {
        children["interface-connectors"] = interface_connectors;
    }

    if(interface_stack_statuses != nullptr)
    {
        children["interface-stack-statuses"] = interface_stack_statuses;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(notification_interfaces != nullptr)
    {
        children["notification-interfaces"] = notification_interfaces;
    }

    return children;
}

void Snmp::InterfaceMib::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-mib";
}

Snmp::InterfaceMib::Interfaces::~Interfaces()
{
}

bool Snmp::InterfaceMib::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Snmp::InterfaceMib::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceMib::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    if_index{YType::uint32, "if-index"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Snmp::InterfaceMib::Interfaces::Interface::~Interface()
{
}

bool Snmp::InterfaceMib::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| if_index.is_set;
}

bool Snmp::InterfaceMib::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(if_index.operation);
}

std::string Snmp::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceMib::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnectors()
{
    yang_name = "interface-connectors"; yang_parent_name = "interface-mib";
}

Snmp::InterfaceMib::InterfaceConnectors::~InterfaceConnectors()
{
}

bool Snmp::InterfaceMib::InterfaceConnectors::has_data() const
{
    for (std::size_t index=0; index<interface_connector.size(); index++)
    {
        if(interface_connector[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceConnectors::has_operation() const
{
    for (std::size_t index=0; index<interface_connector.size(); index++)
    {
        if(interface_connector[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceMib::InterfaceConnectors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-connectors";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceConnectors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceConnectors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-connector")
    {
        for(auto const & c : interface_connector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector>();
        c->parent = this;
        interface_connector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceConnectors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_connector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceMib::InterfaceConnectors::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::InterfaceConnector()
    :
    interface_name{YType::str, "interface-name"},
    if_connector_present{YType::str, "if-connector-present"}
{
    yang_name = "interface-connector"; yang_parent_name = "interface-connectors";
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::~InterfaceConnector()
{
}

bool Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::has_data() const
{
    return interface_name.is_set
	|| if_connector_present.is_set;
}

bool Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(if_connector_present.operation);
}

std::string Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-connector" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-connectors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_connector_present.is_set || is_set(if_connector_present.operation)) leaf_name_data.push_back(if_connector_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "if-connector-present")
    {
        if_connector_present = value;
    }
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAliases()
{
    yang_name = "interface-aliases"; yang_parent_name = "interface-mib";
}

Snmp::InterfaceMib::InterfaceAliases::~InterfaceAliases()
{
}

bool Snmp::InterfaceMib::InterfaceAliases::has_data() const
{
    for (std::size_t index=0; index<interface_alias.size(); index++)
    {
        if(interface_alias[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceAliases::has_operation() const
{
    for (std::size_t index=0; index<interface_alias.size(); index++)
    {
        if(interface_alias[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceMib::InterfaceAliases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-aliases";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceAliases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceAliases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-alias")
    {
        for(auto const & c : interface_alias)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias>();
        c->parent = this;
        interface_alias.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceAliases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_alias)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceMib::InterfaceAliases::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::InterfaceAlias()
    :
    interface_name{YType::str, "interface-name"},
    if_alias{YType::str, "if-alias"}
{
    yang_name = "interface-alias"; yang_parent_name = "interface-aliases";
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::~InterfaceAlias()
{
}

bool Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::has_data() const
{
    return interface_name.is_set
	|| if_alias.is_set;
}

bool Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(if_alias.operation);
}

std::string Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-alias" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-aliases/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_alias.is_set || is_set(if_alias.operation)) leaf_name_data.push_back(if_alias.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "if-alias")
    {
        if_alias = value;
    }
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterfaces()
{
    yang_name = "notification-interfaces"; yang_parent_name = "interface-mib";
}

Snmp::InterfaceMib::NotificationInterfaces::~NotificationInterfaces()
{
}

bool Snmp::InterfaceMib::NotificationInterfaces::has_data() const
{
    for (std::size_t index=0; index<notification_interface.size(); index++)
    {
        if(notification_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::NotificationInterfaces::has_operation() const
{
    for (std::size_t index=0; index<notification_interface.size(); index++)
    {
        if(notification_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceMib::NotificationInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-interfaces";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::NotificationInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::NotificationInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification-interface")
    {
        for(auto const & c : notification_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface>();
        c->parent = this;
        notification_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::NotificationInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceMib::NotificationInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::NotificationInterface()
    :
    interface_name{YType::str, "interface-name"},
    link_up_down_notif_status{YType::enumeration, "link-up-down-notif-status"}
{
    yang_name = "notification-interface"; yang_parent_name = "notification-interfaces";
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::~NotificationInterface()
{
}

bool Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::has_data() const
{
    return interface_name.is_set
	|| link_up_down_notif_status.is_set;
}

bool Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(link_up_down_notif_status.operation);
}

std::string Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/notification-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_up_down_notif_status.is_set || is_set(link_up_down_notif_status.operation)) leaf_name_data.push_back(link_up_down_notif_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-up-down-notif-status")
    {
        link_up_down_notif_status = value;
    }
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatuses()
{
    yang_name = "interface-stack-statuses"; yang_parent_name = "interface-mib";
}

Snmp::InterfaceMib::InterfaceStackStatuses::~InterfaceStackStatuses()
{
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::has_data() const
{
    for (std::size_t index=0; index<interface_stack_status.size(); index++)
    {
        if(interface_stack_status[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::has_operation() const
{
    for (std::size_t index=0; index<interface_stack_status.size(); index++)
    {
        if(interface_stack_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stack-statuses";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceStackStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceStackStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stack-status")
    {
        for(auto const & c : interface_stack_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus>();
        c->parent = this;
        interface_stack_status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceStackStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stack_status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::InterfaceMib::InterfaceStackStatuses::set_value(const std::string & value_path, std::string value)
{
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::InterfaceStackStatus()
    :
    interface_stack_status{YType::str, "interface-stack-status"},
    if_stack_higher_layer{YType::str, "if-stack-higher-layer"},
    if_stack_lower_layer{YType::str, "if-stack-lower-layer"},
    if_stack_status{YType::str, "if-stack-status"}
{
    yang_name = "interface-stack-status"; yang_parent_name = "interface-stack-statuses";
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::~InterfaceStackStatus()
{
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::has_data() const
{
    return interface_stack_status.is_set
	|| if_stack_higher_layer.is_set
	|| if_stack_lower_layer.is_set
	|| if_stack_status.is_set;
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_stack_status.operation)
	|| is_set(if_stack_higher_layer.operation)
	|| is_set(if_stack_lower_layer.operation)
	|| is_set(if_stack_status.operation);
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stack-status" <<"[interface-stack-status='" <<interface_stack_status <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-stack-statuses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_stack_status.is_set || is_set(interface_stack_status.operation)) leaf_name_data.push_back(interface_stack_status.get_name_leafdata());
    if (if_stack_higher_layer.is_set || is_set(if_stack_higher_layer.operation)) leaf_name_data.push_back(if_stack_higher_layer.get_name_leafdata());
    if (if_stack_lower_layer.is_set || is_set(if_stack_lower_layer.operation)) leaf_name_data.push_back(if_stack_lower_layer.get_name_leafdata());
    if (if_stack_status.is_set || is_set(if_stack_status.operation)) leaf_name_data.push_back(if_stack_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-stack-status")
    {
        interface_stack_status = value;
    }
    if(value_path == "if-stack-higher-layer")
    {
        if_stack_higher_layer = value;
    }
    if(value_path == "if-stack-lower-layer")
    {
        if_stack_lower_layer = value;
    }
    if(value_path == "if-stack-status")
    {
        if_stack_status = value;
    }
}

Snmp::SensorMib::SensorMib()
    :
    ent_phy_indexes(std::make_shared<Snmp::SensorMib::EntPhyIndexes>())
	,physical_indexes(std::make_shared<Snmp::SensorMib::PhysicalIndexes>())
{
    ent_phy_indexes->parent = this;

    physical_indexes->parent = this;

    yang_name = "sensor-mib"; yang_parent_name = "snmp";
}

Snmp::SensorMib::~SensorMib()
{
}

bool Snmp::SensorMib::has_data() const
{
    return (ent_phy_indexes !=  nullptr && ent_phy_indexes->has_data())
	|| (physical_indexes !=  nullptr && physical_indexes->has_data());
}

bool Snmp::SensorMib::has_operation() const
{
    return is_set(operation)
	|| (ent_phy_indexes !=  nullptr && ent_phy_indexes->has_operation())
	|| (physical_indexes !=  nullptr && physical_indexes->has_operation());
}

std::string Snmp::SensorMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-phy-indexes")
    {
        if(ent_phy_indexes == nullptr)
        {
            ent_phy_indexes = std::make_shared<Snmp::SensorMib::EntPhyIndexes>();
        }
        return ent_phy_indexes;
    }

    if(child_yang_name == "physical-indexes")
    {
        if(physical_indexes == nullptr)
        {
            physical_indexes = std::make_shared<Snmp::SensorMib::PhysicalIndexes>();
        }
        return physical_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ent_phy_indexes != nullptr)
    {
        children["ent-phy-indexes"] = ent_phy_indexes;
    }

    if(physical_indexes != nullptr)
    {
        children["physical-indexes"] = physical_indexes;
    }

    return children;
}

void Snmp::SensorMib::set_value(const std::string & value_path, std::string value)
{
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndexes()
{
    yang_name = "physical-indexes"; yang_parent_name = "sensor-mib";
}

Snmp::SensorMib::PhysicalIndexes::~PhysicalIndexes()
{
}

bool Snmp::SensorMib::PhysicalIndexes::has_data() const
{
    for (std::size_t index=0; index<physical_index.size(); index++)
    {
        if(physical_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::PhysicalIndexes::has_operation() const
{
    for (std::size_t index=0; index<physical_index.size(); index++)
    {
        if(physical_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::SensorMib::PhysicalIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physical-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::PhysicalIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::PhysicalIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physical-index")
    {
        for(auto const & c : physical_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex>();
        c->parent = this;
        physical_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::PhysicalIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : physical_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::SensorMib::PhysicalIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::PhysicalIndex()
    :
    index_{YType::str, "index"}
    	,
    threshold_indexes(std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes>())
{
    threshold_indexes->parent = this;

    yang_name = "physical-index"; yang_parent_name = "physical-indexes";
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::~PhysicalIndex()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::has_data() const
{
    return index_.is_set
	|| (threshold_indexes !=  nullptr && threshold_indexes->has_data());
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (threshold_indexes !=  nullptr && threshold_indexes->has_operation());
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physical-index" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/physical-indexes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-indexes")
    {
        if(threshold_indexes == nullptr)
        {
            threshold_indexes = std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes>();
        }
        return threshold_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_indexes != nullptr)
    {
        children["threshold-indexes"] = threshold_indexes;
    }

    return children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndexes()
{
    yang_name = "threshold-indexes"; yang_parent_name = "physical-index";
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::~ThresholdIndexes()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::has_data() const
{
    for (std::size_t index=0; index<threshold_index.size(); index++)
    {
        if(threshold_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::has_operation() const
{
    for (std::size_t index=0; index<threshold_index.size(); index++)
    {
        if(threshold_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdIndexes' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-index")
    {
        for(auto const & c : threshold_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex>();
        c->parent = this;
        threshold_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : threshold_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::ThresholdIndex()
    :
    phy_index{YType::str, "phy-index"},
    thre_index{YType::str, "thre-index"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "threshold-index"; yang_parent_name = "threshold-indexes";
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::~ThresholdIndex()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::has_data() const
{
    return phy_index.is_set
	|| thre_index.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set
	|| threshold_relation.is_set
	|| threshold_severity.is_set
	|| threshold_value.is_set;
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(phy_index.operation)
	|| is_set(thre_index.operation)
	|| is_set(threshold_evaluation.operation)
	|| is_set(threshold_notification_enabled.operation)
	|| is_set(threshold_relation.operation)
	|| is_set(threshold_severity.operation)
	|| is_set(threshold_value.operation);
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-index";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdIndex' in Cisco_IOS_XR_snmp_agent_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phy_index.is_set || is_set(phy_index.operation)) leaf_name_data.push_back(phy_index.get_name_leafdata());
    if (thre_index.is_set || is_set(thre_index.operation)) leaf_name_data.push_back(thre_index.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.operation)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.operation)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.operation)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.operation)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "phy-index")
    {
        phy_index = value;
    }
    if(value_path == "thre-index")
    {
        thre_index = value;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndexes()
{
    yang_name = "ent-phy-indexes"; yang_parent_name = "sensor-mib";
}

Snmp::SensorMib::EntPhyIndexes::~EntPhyIndexes()
{
}

bool Snmp::SensorMib::EntPhyIndexes::has_data() const
{
    for (std::size_t index=0; index<ent_phy_index.size(); index++)
    {
        if(ent_phy_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::EntPhyIndexes::has_operation() const
{
    for (std::size_t index=0; index<ent_phy_index.size(); index++)
    {
        if(ent_phy_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmp::SensorMib::EntPhyIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-phy-indexes";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::EntPhyIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::EntPhyIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-phy-index")
    {
        for(auto const & c : ent_phy_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::SensorMib::EntPhyIndexes::EntPhyIndex>();
        c->parent = this;
        ent_phy_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::EntPhyIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ent_phy_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::SensorMib::EntPhyIndexes::set_value(const std::string & value_path, std::string value)
{
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::EntPhyIndex()
    :
    index_{YType::str, "index"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    device_description{YType::str, "device-description"},
    device_id{YType::uint32, "device-id"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    measured_entity{YType::uint32, "measured-entity"},
    precision{YType::uint32, "precision"},
    scale{YType::uint32, "scale"},
    status{YType::uint32, "status"},
    units{YType::str, "units"},
    update_rate{YType::uint32, "update-rate"},
    value_{YType::uint32, "value"}
{
    yang_name = "ent-phy-index"; yang_parent_name = "ent-phy-indexes";
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::~EntPhyIndex()
{
}

bool Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::has_data() const
{
    return index_.is_set
	|| age_time_stamp.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| device_description.is_set
	|| device_id.is_set
	|| field_validity_bitmap.is_set
	|| measured_entity.is_set
	|| precision.is_set
	|| scale.is_set
	|| status.is_set
	|| units.is_set
	|| update_rate.is_set
	|| value_.is_set;
}

bool Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(age_time_stamp.operation)
	|| is_set(alarm_type.operation)
	|| is_set(data_type.operation)
	|| is_set(device_description.operation)
	|| is_set(device_id.operation)
	|| is_set(field_validity_bitmap.operation)
	|| is_set(measured_entity.operation)
	|| is_set(precision.operation)
	|| is_set(scale.operation)
	|| is_set(status.operation)
	|| is_set(units.operation)
	|| is_set(update_rate.operation)
	|| is_set(value_.operation);
}

std::string Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-phy-index" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/ent-phy-indexes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.operation)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.operation)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.operation)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.operation)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (measured_entity.is_set || is_set(measured_entity.operation)) leaf_name_data.push_back(measured_entity.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (scale.is_set || is_set(scale.operation)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.operation)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "device-description")
    {
        device_description = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
    }
    if(value_path == "measured-entity")
    {
        measured_entity = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "scale")
    {
        scale = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

const Enum::YLeaf SnmpCorrVbindMatchEnum::index_ {0, "index"};
const Enum::YLeaf SnmpCorrVbindMatchEnum::value_ {1, "value"};

const Enum::YLeaf SnmpCorrRuleStateEnum::rule_unapplied {0, "rule-unapplied"};
const Enum::YLeaf SnmpCorrRuleStateEnum::rule_applied {1, "rule-applied"};
const Enum::YLeaf SnmpCorrRuleStateEnum::rule_applied_all {2, "rule-applied-all"};

const Enum::YLeaf DupReqDropStatusEnum::disabled {0, "disabled"};
const Enum::YLeaf DupReqDropStatusEnum::enabled {1, "enabled"};


}
}

