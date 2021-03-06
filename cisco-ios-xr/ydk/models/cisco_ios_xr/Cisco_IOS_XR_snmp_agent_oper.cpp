
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_oper {

Snmp::Snmp()
    :
    trap_servers(std::make_shared<Snmp::TrapServers>())
    , information(std::make_shared<Snmp::Information>())
    , interfaces(std::make_shared<Snmp::Interfaces>())
    , correlator(std::make_shared<Snmp::Correlator>())
    , interface_indexes(std::make_shared<Snmp::InterfaceIndexes>())
    , if_indexes(std::make_shared<Snmp::IfIndexes>())
    , entity_mib(std::make_shared<Snmp::EntityMib>())
    , interface_mib(std::make_shared<Snmp::InterfaceMib>())
    , sensor_mib(std::make_shared<Snmp::SensorMib>())
{
    trap_servers->parent = this;
    information->parent = this;
    interfaces->parent = this;
    correlator->parent = this;
    interface_indexes->parent = this;
    if_indexes->parent = this;
    entity_mib->parent = this;
    interface_mib->parent = this;
    sensor_mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Snmp::~Snmp()
{
}

bool Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (trap_servers !=  nullptr && trap_servers->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (interface_indexes !=  nullptr && interface_indexes->has_data())
	|| (if_indexes !=  nullptr && if_indexes->has_data())
	|| (entity_mib !=  nullptr && entity_mib->has_data())
	|| (interface_mib !=  nullptr && interface_mib->has_data())
	|| (sensor_mib !=  nullptr && sensor_mib->has_data());
}

bool Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap_servers !=  nullptr && trap_servers->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (interface_indexes !=  nullptr && interface_indexes->has_operation())
	|| (if_indexes !=  nullptr && if_indexes->has_operation())
	|| (entity_mib !=  nullptr && entity_mib->has_operation())
	|| (interface_mib !=  nullptr && interface_mib->has_operation())
	|| (sensor_mib !=  nullptr && sensor_mib->has_operation());
}

std::string Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-servers")
    {
        if(trap_servers == nullptr)
        {
            trap_servers = std::make_shared<Snmp::TrapServers>();
        }
        return trap_servers;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Snmp::Information>();
        }
        return information;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Snmp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Snmp::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "interface-indexes")
    {
        if(interface_indexes == nullptr)
        {
            interface_indexes = std::make_shared<Snmp::InterfaceIndexes>();
        }
        return interface_indexes;
    }

    if(child_yang_name == "if-indexes")
    {
        if(if_indexes == nullptr)
        {
            if_indexes = std::make_shared<Snmp::IfIndexes>();
        }
        return if_indexes;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-entitymib-oper:entity-mib")
    {
        if(entity_mib == nullptr)
        {
            entity_mib = std::make_shared<Snmp::EntityMib>();
        }
        return entity_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-ifmib-oper:interface-mib")
    {
        if(interface_mib == nullptr)
        {
            interface_mib = std::make_shared<Snmp::InterfaceMib>();
        }
        return interface_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib")
    {
        if(sensor_mib == nullptr)
        {
            sensor_mib = std::make_shared<Snmp::SensorMib>();
        }
        return sensor_mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap_servers != nullptr)
    {
        _children["trap-servers"] = trap_servers;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(correlator != nullptr)
    {
        _children["correlator"] = correlator;
    }

    if(interface_indexes != nullptr)
    {
        _children["interface-indexes"] = interface_indexes;
    }

    if(if_indexes != nullptr)
    {
        _children["if-indexes"] = if_indexes;
    }

    if(entity_mib != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-entitymib-oper:entity-mib"] = entity_mib;
    }

    if(interface_mib != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-ifmib-oper:interface-mib"] = interface_mib;
    }

    if(sensor_mib != nullptr)
    {
        _children["Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib"] = sensor_mib;
    }

    return _children;
}

void Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Snmp::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Snmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-servers" || name == "information" || name == "interfaces" || name == "correlator" || name == "interface-indexes" || name == "if-indexes" || name == "entity-mib" || name == "interface-mib" || name == "sensor-mib")
        return true;
    return false;
}

Snmp::TrapServers::TrapServers()
    :
    trap_server(this, {})
{

    yang_name = "trap-servers"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::TrapServers::~TrapServers()
{
}

bool Snmp::TrapServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_server.len(); index++)
    {
        if(trap_server[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapServers::has_operation() const
{
    for (std::size_t index=0; index<trap_server.len(); index++)
    {
        if(trap_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapServers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-server")
    {
        auto ent_ = std::make_shared<Snmp::TrapServers::TrapServer>();
        ent_->parent = this;
        trap_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::TrapServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-server")
        return true;
    return false;
}

Snmp::TrapServers::TrapServer::TrapServer()
    :
    trap_host{YType::str, "trap-host"},
    port{YType::uint16, "port"},
    number_of_pkts_in_trap_q{YType::uint32, "number-of-pkts-in-trap-q"},
    max_q_length_of_trap_q{YType::uint32, "max-q-length-of-trap-q"},
    number_of_pkts_sent{YType::uint32, "number-of-pkts-sent"},
    number_of_pkts_dropped{YType::uint32, "number-of-pkts-dropped"}
{

    yang_name = "trap-server"; yang_parent_name = "trap-servers"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::TrapServers::TrapServer::~TrapServer()
{
}

bool Snmp::TrapServers::TrapServer::has_data() const
{
    if (is_presence_container) return true;
    return trap_host.is_set
	|| port.is_set
	|| number_of_pkts_in_trap_q.is_set
	|| max_q_length_of_trap_q.is_set
	|| number_of_pkts_sent.is_set
	|| number_of_pkts_dropped.is_set;
}

bool Snmp::TrapServers::TrapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_host.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(number_of_pkts_in_trap_q.yfilter)
	|| ydk::is_set(max_q_length_of_trap_q.yfilter)
	|| ydk::is_set(number_of_pkts_sent.yfilter)
	|| ydk::is_set(number_of_pkts_dropped.yfilter);
}

std::string Snmp::TrapServers::TrapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/trap-servers/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapServers::TrapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-server";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapServers::TrapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_host.is_set || is_set(trap_host.yfilter)) leaf_name_data.push_back(trap_host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (number_of_pkts_in_trap_q.is_set || is_set(number_of_pkts_in_trap_q.yfilter)) leaf_name_data.push_back(number_of_pkts_in_trap_q.get_name_leafdata());
    if (max_q_length_of_trap_q.is_set || is_set(max_q_length_of_trap_q.yfilter)) leaf_name_data.push_back(max_q_length_of_trap_q.get_name_leafdata());
    if (number_of_pkts_sent.is_set || is_set(number_of_pkts_sent.yfilter)) leaf_name_data.push_back(number_of_pkts_sent.get_name_leafdata());
    if (number_of_pkts_dropped.is_set || is_set(number_of_pkts_dropped.yfilter)) leaf_name_data.push_back(number_of_pkts_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::TrapServers::TrapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::TrapServers::TrapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::TrapServers::TrapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-host")
    {
        trap_host = value;
        trap_host.value_namespace = name_space;
        trap_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-pkts-in-trap-q")
    {
        number_of_pkts_in_trap_q = value;
        number_of_pkts_in_trap_q.value_namespace = name_space;
        number_of_pkts_in_trap_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-q-length-of-trap-q")
    {
        max_q_length_of_trap_q = value;
        max_q_length_of_trap_q.value_namespace = name_space;
        max_q_length_of_trap_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-pkts-sent")
    {
        number_of_pkts_sent = value;
        number_of_pkts_sent.value_namespace = name_space;
        number_of_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped = value;
        number_of_pkts_dropped.value_namespace = name_space;
        number_of_pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapServers::TrapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-host")
    {
        trap_host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "number-of-pkts-in-trap-q")
    {
        number_of_pkts_in_trap_q.yfilter = yfilter;
    }
    if(value_path == "max-q-length-of-trap-q")
    {
        max_q_length_of_trap_q.yfilter = yfilter;
    }
    if(value_path == "number-of-pkts-sent")
    {
        number_of_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped.yfilter = yfilter;
    }
}

bool Snmp::TrapServers::TrapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-host" || name == "port" || name == "number-of-pkts-in-trap-q" || name == "max-q-length-of-trap-q" || name == "number-of-pkts-sent" || name == "number-of-pkts-dropped")
        return true;
    return false;
}

Snmp::Information::Information()
    :
    hosts(std::make_shared<Snmp::Information::Hosts>())
    , system_up_time(std::make_shared<Snmp::Information::SystemUpTime>())
    , nms_addresses(std::make_shared<Snmp::Information::NmsAddresses>())
    , engine_id(std::make_shared<Snmp::Information::EngineId>())
    , rx_queue(std::make_shared<Snmp::Information::RxQueue>())
    , system_name(std::make_shared<Snmp::Information::SystemName>())
    , request_type_detail(std::make_shared<Snmp::Information::RequestTypeDetail>())
    , duplicate_drop(std::make_shared<Snmp::Information::DuplicateDrop>())
    , bulk_stats_transfers(std::make_shared<Snmp::Information::BulkStatsTransfers>())
    , trap_infos(std::make_shared<Snmp::Information::TrapInfos>())
    , poll_oids(std::make_shared<Snmp::Information::PollOids>())
    , infom_details(std::make_shared<Snmp::Information::InfomDetails>())
    , statistics(std::make_shared<Snmp::Information::Statistics>())
    , incoming_queue(std::make_shared<Snmp::Information::IncomingQueue>())
    , context_mapping(std::make_shared<Snmp::Information::ContextMapping>())
    , trap_oids(std::make_shared<Snmp::Information::TrapOids>())
    , nm_spackets(std::make_shared<Snmp::Information::NmSpackets>())
    , mibs(std::make_shared<Snmp::Information::Mibs>())
    , serial_numbers(std::make_shared<Snmp::Information::SerialNumbers>())
    , drop_nms_addresses(std::make_shared<Snmp::Information::DropNmsAddresses>())
    , views(std::make_shared<Snmp::Information::Views>())
    , system_descr(std::make_shared<Snmp::Information::SystemDescr>())
    , tables(std::make_shared<Snmp::Information::Tables>())
    , system_oid(std::make_shared<Snmp::Information::SystemOid>())
    , trap_queue(std::make_shared<Snmp::Information::TrapQueue>())
{
    hosts->parent = this;
    system_up_time->parent = this;
    nms_addresses->parent = this;
    engine_id->parent = this;
    rx_queue->parent = this;
    system_name->parent = this;
    request_type_detail->parent = this;
    duplicate_drop->parent = this;
    bulk_stats_transfers->parent = this;
    trap_infos->parent = this;
    poll_oids->parent = this;
    infom_details->parent = this;
    statistics->parent = this;
    incoming_queue->parent = this;
    context_mapping->parent = this;
    trap_oids->parent = this;
    nm_spackets->parent = this;
    mibs->parent = this;
    serial_numbers->parent = this;
    drop_nms_addresses->parent = this;
    views->parent = this;
    system_descr->parent = this;
    tables->parent = this;
    system_oid->parent = this;
    trap_queue->parent = this;

    yang_name = "information"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::~Information()
{
}

bool Snmp::Information::has_data() const
{
    if (is_presence_container) return true;
    return (hosts !=  nullptr && hosts->has_data())
	|| (system_up_time !=  nullptr && system_up_time->has_data())
	|| (nms_addresses !=  nullptr && nms_addresses->has_data())
	|| (engine_id !=  nullptr && engine_id->has_data())
	|| (rx_queue !=  nullptr && rx_queue->has_data())
	|| (system_name !=  nullptr && system_name->has_data())
	|| (request_type_detail !=  nullptr && request_type_detail->has_data())
	|| (duplicate_drop !=  nullptr && duplicate_drop->has_data())
	|| (bulk_stats_transfers !=  nullptr && bulk_stats_transfers->has_data())
	|| (trap_infos !=  nullptr && trap_infos->has_data())
	|| (poll_oids !=  nullptr && poll_oids->has_data())
	|| (infom_details !=  nullptr && infom_details->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (incoming_queue !=  nullptr && incoming_queue->has_data())
	|| (context_mapping !=  nullptr && context_mapping->has_data())
	|| (trap_oids !=  nullptr && trap_oids->has_data())
	|| (nm_spackets !=  nullptr && nm_spackets->has_data())
	|| (mibs !=  nullptr && mibs->has_data())
	|| (serial_numbers !=  nullptr && serial_numbers->has_data())
	|| (drop_nms_addresses !=  nullptr && drop_nms_addresses->has_data())
	|| (views !=  nullptr && views->has_data())
	|| (system_descr !=  nullptr && system_descr->has_data())
	|| (tables !=  nullptr && tables->has_data())
	|| (system_oid !=  nullptr && system_oid->has_data())
	|| (trap_queue !=  nullptr && trap_queue->has_data());
}

bool Snmp::Information::has_operation() const
{
    return is_set(yfilter)
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (system_up_time !=  nullptr && system_up_time->has_operation())
	|| (nms_addresses !=  nullptr && nms_addresses->has_operation())
	|| (engine_id !=  nullptr && engine_id->has_operation())
	|| (rx_queue !=  nullptr && rx_queue->has_operation())
	|| (system_name !=  nullptr && system_name->has_operation())
	|| (request_type_detail !=  nullptr && request_type_detail->has_operation())
	|| (duplicate_drop !=  nullptr && duplicate_drop->has_operation())
	|| (bulk_stats_transfers !=  nullptr && bulk_stats_transfers->has_operation())
	|| (trap_infos !=  nullptr && trap_infos->has_operation())
	|| (poll_oids !=  nullptr && poll_oids->has_operation())
	|| (infom_details !=  nullptr && infom_details->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (incoming_queue !=  nullptr && incoming_queue->has_operation())
	|| (context_mapping !=  nullptr && context_mapping->has_operation())
	|| (trap_oids !=  nullptr && trap_oids->has_operation())
	|| (nm_spackets !=  nullptr && nm_spackets->has_operation())
	|| (mibs !=  nullptr && mibs->has_operation())
	|| (serial_numbers !=  nullptr && serial_numbers->has_operation())
	|| (drop_nms_addresses !=  nullptr && drop_nms_addresses->has_operation())
	|| (views !=  nullptr && views->has_operation())
	|| (system_descr !=  nullptr && system_descr->has_operation())
	|| (tables !=  nullptr && tables->has_operation())
	|| (system_oid !=  nullptr && system_oid->has_operation())
	|| (trap_queue !=  nullptr && trap_queue->has_operation());
}

std::string Snmp::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Information::Hosts>();
        }
        return hosts;
    }

    if(child_yang_name == "system-up-time")
    {
        if(system_up_time == nullptr)
        {
            system_up_time = std::make_shared<Snmp::Information::SystemUpTime>();
        }
        return system_up_time;
    }

    if(child_yang_name == "nms-addresses")
    {
        if(nms_addresses == nullptr)
        {
            nms_addresses = std::make_shared<Snmp::Information::NmsAddresses>();
        }
        return nms_addresses;
    }

    if(child_yang_name == "engine-id")
    {
        if(engine_id == nullptr)
        {
            engine_id = std::make_shared<Snmp::Information::EngineId>();
        }
        return engine_id;
    }

    if(child_yang_name == "rx-queue")
    {
        if(rx_queue == nullptr)
        {
            rx_queue = std::make_shared<Snmp::Information::RxQueue>();
        }
        return rx_queue;
    }

    if(child_yang_name == "system-name")
    {
        if(system_name == nullptr)
        {
            system_name = std::make_shared<Snmp::Information::SystemName>();
        }
        return system_name;
    }

    if(child_yang_name == "request-type-detail")
    {
        if(request_type_detail == nullptr)
        {
            request_type_detail = std::make_shared<Snmp::Information::RequestTypeDetail>();
        }
        return request_type_detail;
    }

    if(child_yang_name == "duplicate-drop")
    {
        if(duplicate_drop == nullptr)
        {
            duplicate_drop = std::make_shared<Snmp::Information::DuplicateDrop>();
        }
        return duplicate_drop;
    }

    if(child_yang_name == "bulk-stats-transfers")
    {
        if(bulk_stats_transfers == nullptr)
        {
            bulk_stats_transfers = std::make_shared<Snmp::Information::BulkStatsTransfers>();
        }
        return bulk_stats_transfers;
    }

    if(child_yang_name == "trap-infos")
    {
        if(trap_infos == nullptr)
        {
            trap_infos = std::make_shared<Snmp::Information::TrapInfos>();
        }
        return trap_infos;
    }

    if(child_yang_name == "poll-oids")
    {
        if(poll_oids == nullptr)
        {
            poll_oids = std::make_shared<Snmp::Information::PollOids>();
        }
        return poll_oids;
    }

    if(child_yang_name == "infom-details")
    {
        if(infom_details == nullptr)
        {
            infom_details = std::make_shared<Snmp::Information::InfomDetails>();
        }
        return infom_details;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Snmp::Information::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "incoming-queue")
    {
        if(incoming_queue == nullptr)
        {
            incoming_queue = std::make_shared<Snmp::Information::IncomingQueue>();
        }
        return incoming_queue;
    }

    if(child_yang_name == "context-mapping")
    {
        if(context_mapping == nullptr)
        {
            context_mapping = std::make_shared<Snmp::Information::ContextMapping>();
        }
        return context_mapping;
    }

    if(child_yang_name == "trap-oids")
    {
        if(trap_oids == nullptr)
        {
            trap_oids = std::make_shared<Snmp::Information::TrapOids>();
        }
        return trap_oids;
    }

    if(child_yang_name == "nm-spackets")
    {
        if(nm_spackets == nullptr)
        {
            nm_spackets = std::make_shared<Snmp::Information::NmSpackets>();
        }
        return nm_spackets;
    }

    if(child_yang_name == "mibs")
    {
        if(mibs == nullptr)
        {
            mibs = std::make_shared<Snmp::Information::Mibs>();
        }
        return mibs;
    }

    if(child_yang_name == "serial-numbers")
    {
        if(serial_numbers == nullptr)
        {
            serial_numbers = std::make_shared<Snmp::Information::SerialNumbers>();
        }
        return serial_numbers;
    }

    if(child_yang_name == "drop-nms-addresses")
    {
        if(drop_nms_addresses == nullptr)
        {
            drop_nms_addresses = std::make_shared<Snmp::Information::DropNmsAddresses>();
        }
        return drop_nms_addresses;
    }

    if(child_yang_name == "views")
    {
        if(views == nullptr)
        {
            views = std::make_shared<Snmp::Information::Views>();
        }
        return views;
    }

    if(child_yang_name == "system-descr")
    {
        if(system_descr == nullptr)
        {
            system_descr = std::make_shared<Snmp::Information::SystemDescr>();
        }
        return system_descr;
    }

    if(child_yang_name == "tables")
    {
        if(tables == nullptr)
        {
            tables = std::make_shared<Snmp::Information::Tables>();
        }
        return tables;
    }

    if(child_yang_name == "system-oid")
    {
        if(system_oid == nullptr)
        {
            system_oid = std::make_shared<Snmp::Information::SystemOid>();
        }
        return system_oid;
    }

    if(child_yang_name == "trap-queue")
    {
        if(trap_queue == nullptr)
        {
            trap_queue = std::make_shared<Snmp::Information::TrapQueue>();
        }
        return trap_queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    if(system_up_time != nullptr)
    {
        _children["system-up-time"] = system_up_time;
    }

    if(nms_addresses != nullptr)
    {
        _children["nms-addresses"] = nms_addresses;
    }

    if(engine_id != nullptr)
    {
        _children["engine-id"] = engine_id;
    }

    if(rx_queue != nullptr)
    {
        _children["rx-queue"] = rx_queue;
    }

    if(system_name != nullptr)
    {
        _children["system-name"] = system_name;
    }

    if(request_type_detail != nullptr)
    {
        _children["request-type-detail"] = request_type_detail;
    }

    if(duplicate_drop != nullptr)
    {
        _children["duplicate-drop"] = duplicate_drop;
    }

    if(bulk_stats_transfers != nullptr)
    {
        _children["bulk-stats-transfers"] = bulk_stats_transfers;
    }

    if(trap_infos != nullptr)
    {
        _children["trap-infos"] = trap_infos;
    }

    if(poll_oids != nullptr)
    {
        _children["poll-oids"] = poll_oids;
    }

    if(infom_details != nullptr)
    {
        _children["infom-details"] = infom_details;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(incoming_queue != nullptr)
    {
        _children["incoming-queue"] = incoming_queue;
    }

    if(context_mapping != nullptr)
    {
        _children["context-mapping"] = context_mapping;
    }

    if(trap_oids != nullptr)
    {
        _children["trap-oids"] = trap_oids;
    }

    if(nm_spackets != nullptr)
    {
        _children["nm-spackets"] = nm_spackets;
    }

    if(mibs != nullptr)
    {
        _children["mibs"] = mibs;
    }

    if(serial_numbers != nullptr)
    {
        _children["serial-numbers"] = serial_numbers;
    }

    if(drop_nms_addresses != nullptr)
    {
        _children["drop-nms-addresses"] = drop_nms_addresses;
    }

    if(views != nullptr)
    {
        _children["views"] = views;
    }

    if(system_descr != nullptr)
    {
        _children["system-descr"] = system_descr;
    }

    if(tables != nullptr)
    {
        _children["tables"] = tables;
    }

    if(system_oid != nullptr)
    {
        _children["system-oid"] = system_oid;
    }

    if(trap_queue != nullptr)
    {
        _children["trap-queue"] = trap_queue;
    }

    return _children;
}

void Snmp::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "system-up-time" || name == "nms-addresses" || name == "engine-id" || name == "rx-queue" || name == "system-name" || name == "request-type-detail" || name == "duplicate-drop" || name == "bulk-stats-transfers" || name == "trap-infos" || name == "poll-oids" || name == "infom-details" || name == "statistics" || name == "incoming-queue" || name == "context-mapping" || name == "trap-oids" || name == "nm-spackets" || name == "mibs" || name == "serial-numbers" || name == "drop-nms-addresses" || name == "views" || name == "system-descr" || name == "tables" || name == "system-oid" || name == "trap-queue")
        return true;
    return false;
}

Snmp::Information::Hosts::Hosts()
    :
    host(this, {"name"})
{

    yang_name = "hosts"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Hosts::~Hosts()
{
}

bool Snmp::Information::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Hosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Snmp::Information::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Snmp::Information::Hosts::Host::Host()
    :
    name{YType::str, "name"}
        ,
    host_information(this, {"user"})
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Hosts::Host::~Host()
{
}

bool Snmp::Information::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_information.len(); index++)
    {
        if(host_information[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Snmp::Information::Hosts::Host::has_operation() const
{
    for (std::size_t index=0; index<host_information.len(); index++)
    {
        if(host_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Snmp::Information::Hosts::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/hosts/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-information")
    {
        auto ent_ = std::make_shared<Snmp::Information::Hosts::Host::HostInformation>();
        ent_->parent = this;
        host_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Information::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-information" || name == "name")
        return true;
    return false;
}

Snmp::Information::Hosts::Host::HostInformation::HostInformation()
    :
    user{YType::str, "user"},
    snmp_target_address_t_host{YType::str, "snmp-target-address-t-host"},
    snmp_target_address_port{YType::str, "snmp-target-address-port"},
    snmp_target_addresstype{YType::str, "snmp-target-addresstype"},
    snmp_target_params_security_model{YType::str, "snmp-target-params-security-model"},
    snmp_target_params_security_name{YType::str, "snmp-target-params-security-name"},
    snmp_target_params_security_level{YType::str, "snmp-target-params-security-level"}
{

    yang_name = "host-information"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Hosts::Host::HostInformation::~HostInformation()
{
}

bool Snmp::Information::Hosts::Host::HostInformation::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| snmp_target_address_t_host.is_set
	|| snmp_target_address_port.is_set
	|| snmp_target_addresstype.is_set
	|| snmp_target_params_security_model.is_set
	|| snmp_target_params_security_name.is_set
	|| snmp_target_params_security_level.is_set;
}

bool Snmp::Information::Hosts::Host::HostInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(snmp_target_address_t_host.yfilter)
	|| ydk::is_set(snmp_target_address_port.yfilter)
	|| ydk::is_set(snmp_target_addresstype.yfilter)
	|| ydk::is_set(snmp_target_params_security_model.yfilter)
	|| ydk::is_set(snmp_target_params_security_name.yfilter)
	|| ydk::is_set(snmp_target_params_security_level.yfilter);
}

std::string Snmp::Information::Hosts::Host::HostInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-information";
    ADD_KEY_TOKEN(user, "user");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Hosts::Host::HostInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (snmp_target_address_t_host.is_set || is_set(snmp_target_address_t_host.yfilter)) leaf_name_data.push_back(snmp_target_address_t_host.get_name_leafdata());
    if (snmp_target_address_port.is_set || is_set(snmp_target_address_port.yfilter)) leaf_name_data.push_back(snmp_target_address_port.get_name_leafdata());
    if (snmp_target_addresstype.is_set || is_set(snmp_target_addresstype.yfilter)) leaf_name_data.push_back(snmp_target_addresstype.get_name_leafdata());
    if (snmp_target_params_security_model.is_set || is_set(snmp_target_params_security_model.yfilter)) leaf_name_data.push_back(snmp_target_params_security_model.get_name_leafdata());
    if (snmp_target_params_security_name.is_set || is_set(snmp_target_params_security_name.yfilter)) leaf_name_data.push_back(snmp_target_params_security_name.get_name_leafdata());
    if (snmp_target_params_security_level.is_set || is_set(snmp_target_params_security_level.yfilter)) leaf_name_data.push_back(snmp_target_params_security_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Hosts::Host::HostInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Hosts::Host::HostInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Hosts::Host::HostInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-address-t-host")
    {
        snmp_target_address_t_host = value;
        snmp_target_address_t_host.value_namespace = name_space;
        snmp_target_address_t_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-address-port")
    {
        snmp_target_address_port = value;
        snmp_target_address_port.value_namespace = name_space;
        snmp_target_address_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-addresstype")
    {
        snmp_target_addresstype = value;
        snmp_target_addresstype.value_namespace = name_space;
        snmp_target_addresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-params-security-model")
    {
        snmp_target_params_security_model = value;
        snmp_target_params_security_model.value_namespace = name_space;
        snmp_target_params_security_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-params-security-name")
    {
        snmp_target_params_security_name = value;
        snmp_target_params_security_name.value_namespace = name_space;
        snmp_target_params_security_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-target-params-security-level")
    {
        snmp_target_params_security_level = value;
        snmp_target_params_security_level.value_namespace = name_space;
        snmp_target_params_security_level.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Hosts::Host::HostInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "snmp-target-address-t-host")
    {
        snmp_target_address_t_host.yfilter = yfilter;
    }
    if(value_path == "snmp-target-address-port")
    {
        snmp_target_address_port.yfilter = yfilter;
    }
    if(value_path == "snmp-target-addresstype")
    {
        snmp_target_addresstype.yfilter = yfilter;
    }
    if(value_path == "snmp-target-params-security-model")
    {
        snmp_target_params_security_model.yfilter = yfilter;
    }
    if(value_path == "snmp-target-params-security-name")
    {
        snmp_target_params_security_name.yfilter = yfilter;
    }
    if(value_path == "snmp-target-params-security-level")
    {
        snmp_target_params_security_level.yfilter = yfilter;
    }
}

bool Snmp::Information::Hosts::Host::HostInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "snmp-target-address-t-host" || name == "snmp-target-address-port" || name == "snmp-target-addresstype" || name == "snmp-target-params-security-model" || name == "snmp-target-params-security-name" || name == "snmp-target-params-security-level")
        return true;
    return false;
}

Snmp::Information::SystemUpTime::SystemUpTime()
    :
    system_up_time_edm{YType::str, "system-up-time-edm"}
{

    yang_name = "system-up-time"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SystemUpTime::~SystemUpTime()
{
}

bool Snmp::Information::SystemUpTime::has_data() const
{
    if (is_presence_container) return true;
    return system_up_time_edm.is_set;
}

bool Snmp::Information::SystemUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_up_time_edm.yfilter);
}

std::string Snmp::Information::SystemUpTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SystemUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SystemUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_up_time_edm.is_set || is_set(system_up_time_edm.yfilter)) leaf_name_data.push_back(system_up_time_edm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SystemUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SystemUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::SystemUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-up-time-edm")
    {
        system_up_time_edm = value;
        system_up_time_edm.value_namespace = name_space;
        system_up_time_edm.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::SystemUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-up-time-edm")
    {
        system_up_time_edm.yfilter = yfilter;
    }
}

bool Snmp::Information::SystemUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-up-time-edm")
        return true;
    return false;
}

Snmp::Information::NmsAddresses::NmsAddresses()
    :
    nms_address(this, {"nms_addr"})
{

    yang_name = "nms-addresses"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::NmsAddresses::~NmsAddresses()
{
}

bool Snmp::Information::NmsAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nms_address.len(); index++)
    {
        if(nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::NmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<nms_address.len(); index++)
    {
        if(nms_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::NmsAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::NmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::NmsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::NmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nms-address")
    {
        auto ent_ = std::make_shared<Snmp::Information::NmsAddresses::NmsAddress>();
        ent_->parent = this;
        nms_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::NmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nms_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::NmsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::NmsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::NmsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-address")
        return true;
    return false;
}

Snmp::Information::NmsAddresses::NmsAddress::NmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    nms_address{YType::str, "nms-address"},
    get_request_count{YType::uint32, "get-request-count"},
    getnext_request_count{YType::uint32, "getnext-request-count"},
    getbulk_request_count{YType::uint32, "getbulk-request-count"},
    set_request_count{YType::uint32, "set-request-count"},
    test_request_count{YType::uint32, "test-request-count"}
{

    yang_name = "nms-address"; yang_parent_name = "nms-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::NmsAddresses::NmsAddress::~NmsAddress()
{
}

bool Snmp::Information::NmsAddresses::NmsAddress::has_data() const
{
    if (is_presence_container) return true;
    return nms_addr.is_set
	|| nms_address.is_set
	|| get_request_count.is_set
	|| getnext_request_count.is_set
	|| getbulk_request_count.is_set
	|| set_request_count.is_set
	|| test_request_count.is_set;
}

bool Snmp::Information::NmsAddresses::NmsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nms_addr.yfilter)
	|| ydk::is_set(nms_address.yfilter)
	|| ydk::is_set(get_request_count.yfilter)
	|| ydk::is_set(getnext_request_count.yfilter)
	|| ydk::is_set(getbulk_request_count.yfilter)
	|| ydk::is_set(set_request_count.yfilter)
	|| ydk::is_set(test_request_count.yfilter);
}

std::string Snmp::Information::NmsAddresses::NmsAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/nms-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::NmsAddresses::NmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-address";
    ADD_KEY_TOKEN(nms_addr, "nms-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::NmsAddresses::NmsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.yfilter)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (nms_address.is_set || is_set(nms_address.yfilter)) leaf_name_data.push_back(nms_address.get_name_leafdata());
    if (get_request_count.is_set || is_set(get_request_count.yfilter)) leaf_name_data.push_back(get_request_count.get_name_leafdata());
    if (getnext_request_count.is_set || is_set(getnext_request_count.yfilter)) leaf_name_data.push_back(getnext_request_count.get_name_leafdata());
    if (getbulk_request_count.is_set || is_set(getbulk_request_count.yfilter)) leaf_name_data.push_back(getbulk_request_count.get_name_leafdata());
    if (set_request_count.is_set || is_set(set_request_count.yfilter)) leaf_name_data.push_back(set_request_count.get_name_leafdata());
    if (test_request_count.is_set || is_set(test_request_count.yfilter)) leaf_name_data.push_back(test_request_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::NmsAddresses::NmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::NmsAddresses::NmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::NmsAddresses::NmsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
        nms_addr.value_namespace = name_space;
        nms_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nms-address")
    {
        nms_address = value;
        nms_address.value_namespace = name_space;
        nms_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-request-count")
    {
        get_request_count = value;
        get_request_count.value_namespace = name_space;
        get_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "getnext-request-count")
    {
        getnext_request_count = value;
        getnext_request_count.value_namespace = name_space;
        getnext_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "getbulk-request-count")
    {
        getbulk_request_count = value;
        getbulk_request_count.value_namespace = name_space;
        getbulk_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-request-count")
    {
        set_request_count = value;
        set_request_count.value_namespace = name_space;
        set_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-request-count")
    {
        test_request_count = value;
        test_request_count.value_namespace = name_space;
        test_request_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::NmsAddresses::NmsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nms-addr")
    {
        nms_addr.yfilter = yfilter;
    }
    if(value_path == "nms-address")
    {
        nms_address.yfilter = yfilter;
    }
    if(value_path == "get-request-count")
    {
        get_request_count.yfilter = yfilter;
    }
    if(value_path == "getnext-request-count")
    {
        getnext_request_count.yfilter = yfilter;
    }
    if(value_path == "getbulk-request-count")
    {
        getbulk_request_count.yfilter = yfilter;
    }
    if(value_path == "set-request-count")
    {
        set_request_count.yfilter = yfilter;
    }
    if(value_path == "test-request-count")
    {
        test_request_count.yfilter = yfilter;
    }
}

bool Snmp::Information::NmsAddresses::NmsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-addr" || name == "nms-address" || name == "get-request-count" || name == "getnext-request-count" || name == "getbulk-request-count" || name == "set-request-count" || name == "test-request-count")
        return true;
    return false;
}

Snmp::Information::EngineId::EngineId()
    :
    engine_id{YType::str, "engine-id"}
{

    yang_name = "engine-id"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::EngineId::~EngineId()
{
}

bool Snmp::Information::EngineId::has_data() const
{
    if (is_presence_container) return true;
    return engine_id.is_set;
}

bool Snmp::Information::EngineId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(engine_id.yfilter);
}

std::string Snmp::Information::EngineId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::EngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::EngineId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.yfilter)) leaf_name_data.push_back(engine_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::EngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::EngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::EngineId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
        engine_id.value_namespace = name_space;
        engine_id.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::EngineId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "engine-id")
    {
        engine_id.yfilter = yfilter;
    }
}

bool Snmp::Information::EngineId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine-id")
        return true;
    return false;
}

Snmp::Information::RxQueue::RxQueue()
    :
    qlen{YType::uint32, "qlen"},
    in_min{YType::uint32, "in-min"},
    in_avg{YType::uint32, "in-avg"},
    in_max{YType::uint32, "in-max"},
    pend_min{YType::uint32, "pend-min"},
    pend_avg{YType::uint32, "pend-avg"},
    pend_max{YType::uint32, "pend-max"}
        ,
    incoming_q(this, {})
    , pending_q(this, {})
{

    yang_name = "rx-queue"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RxQueue::~RxQueue()
{
}

bool Snmp::Information::RxQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<incoming_q.len(); index++)
    {
        if(incoming_q[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pending_q.len(); index++)
    {
        if(pending_q[index]->has_data())
            return true;
    }
    return qlen.is_set
	|| in_min.is_set
	|| in_avg.is_set
	|| in_max.is_set
	|| pend_min.is_set
	|| pend_avg.is_set
	|| pend_max.is_set;
}

bool Snmp::Information::RxQueue::has_operation() const
{
    for (std::size_t index=0; index<incoming_q.len(); index++)
    {
        if(incoming_q[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pending_q.len(); index++)
    {
        if(pending_q[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(qlen.yfilter)
	|| ydk::is_set(in_min.yfilter)
	|| ydk::is_set(in_avg.yfilter)
	|| ydk::is_set(in_max.yfilter)
	|| ydk::is_set(pend_min.yfilter)
	|| ydk::is_set(pend_avg.yfilter)
	|| ydk::is_set(pend_max.yfilter);
}

std::string Snmp::Information::RxQueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RxQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RxQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qlen.is_set || is_set(qlen.yfilter)) leaf_name_data.push_back(qlen.get_name_leafdata());
    if (in_min.is_set || is_set(in_min.yfilter)) leaf_name_data.push_back(in_min.get_name_leafdata());
    if (in_avg.is_set || is_set(in_avg.yfilter)) leaf_name_data.push_back(in_avg.get_name_leafdata());
    if (in_max.is_set || is_set(in_max.yfilter)) leaf_name_data.push_back(in_max.get_name_leafdata());
    if (pend_min.is_set || is_set(pend_min.yfilter)) leaf_name_data.push_back(pend_min.get_name_leafdata());
    if (pend_avg.is_set || is_set(pend_avg.yfilter)) leaf_name_data.push_back(pend_avg.get_name_leafdata());
    if (pend_max.is_set || is_set(pend_max.yfilter)) leaf_name_data.push_back(pend_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RxQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-q")
    {
        auto ent_ = std::make_shared<Snmp::Information::RxQueue::IncomingQ>();
        ent_->parent = this;
        incoming_q.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pending-q")
    {
        auto ent_ = std::make_shared<Snmp::Information::RxQueue::PendingQ>();
        ent_->parent = this;
        pending_q.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RxQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : incoming_q.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pending_q.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::RxQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qlen")
    {
        qlen = value;
        qlen.value_namespace = name_space;
        qlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-min")
    {
        in_min = value;
        in_min.value_namespace = name_space;
        in_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-avg")
    {
        in_avg = value;
        in_avg.value_namespace = name_space;
        in_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-max")
    {
        in_max = value;
        in_max.value_namespace = name_space;
        in_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pend-min")
    {
        pend_min = value;
        pend_min.value_namespace = name_space;
        pend_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pend-avg")
    {
        pend_avg = value;
        pend_avg.value_namespace = name_space;
        pend_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pend-max")
    {
        pend_max = value;
        pend_max.value_namespace = name_space;
        pend_max.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::RxQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qlen")
    {
        qlen.yfilter = yfilter;
    }
    if(value_path == "in-min")
    {
        in_min.yfilter = yfilter;
    }
    if(value_path == "in-avg")
    {
        in_avg.yfilter = yfilter;
    }
    if(value_path == "in-max")
    {
        in_max.yfilter = yfilter;
    }
    if(value_path == "pend-min")
    {
        pend_min.yfilter = yfilter;
    }
    if(value_path == "pend-avg")
    {
        pend_avg.yfilter = yfilter;
    }
    if(value_path == "pend-max")
    {
        pend_max.yfilter = yfilter;
    }
}

bool Snmp::Information::RxQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-q" || name == "pending-q" || name == "qlen" || name == "in-min" || name == "in-avg" || name == "in-max" || name == "pend-min" || name == "pend-avg" || name == "pend-max")
        return true;
    return false;
}

Snmp::Information::RxQueue::IncomingQ::IncomingQ()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"}
{

    yang_name = "incoming-q"; yang_parent_name = "rx-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RxQueue::IncomingQ::~IncomingQ()
{
}

bool Snmp::Information::RxQueue::IncomingQ::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set;
}

bool Snmp::Information::RxQueue::IncomingQ::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Snmp::Information::RxQueue::IncomingQ::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/rx-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RxQueue::IncomingQ::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-q";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RxQueue::IncomingQ::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RxQueue::IncomingQ::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RxQueue::IncomingQ::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::RxQueue::IncomingQ::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::RxQueue::IncomingQ::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Snmp::Information::RxQueue::IncomingQ::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max")
        return true;
    return false;
}

Snmp::Information::RxQueue::PendingQ::PendingQ()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"}
{

    yang_name = "pending-q"; yang_parent_name = "rx-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RxQueue::PendingQ::~PendingQ()
{
}

bool Snmp::Information::RxQueue::PendingQ::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set;
}

bool Snmp::Information::RxQueue::PendingQ::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Snmp::Information::RxQueue::PendingQ::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/rx-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RxQueue::PendingQ::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-q";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RxQueue::PendingQ::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RxQueue::PendingQ::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RxQueue::PendingQ::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::RxQueue::PendingQ::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::RxQueue::PendingQ::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Snmp::Information::RxQueue::PendingQ::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max")
        return true;
    return false;
}

Snmp::Information::SystemName::SystemName()
    :
    system_name{YType::str, "system-name"}
{

    yang_name = "system-name"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SystemName::~SystemName()
{
}

bool Snmp::Information::SystemName::has_data() const
{
    if (is_presence_container) return true;
    return system_name.is_set;
}

bool Snmp::Information::SystemName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_name.yfilter);
}

std::string Snmp::Information::SystemName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SystemName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SystemName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SystemName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SystemName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::SystemName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::SystemName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
}

bool Snmp::Information::SystemName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-name")
        return true;
    return false;
}

Snmp::Information::RequestTypeDetail::RequestTypeDetail()
    :
    nms_addresses(std::make_shared<Snmp::Information::RequestTypeDetail::NmsAddresses>())
{
    nms_addresses->parent = this;

    yang_name = "request-type-detail"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RequestTypeDetail::~RequestTypeDetail()
{
}

bool Snmp::Information::RequestTypeDetail::has_data() const
{
    if (is_presence_container) return true;
    return (nms_addresses !=  nullptr && nms_addresses->has_data());
}

bool Snmp::Information::RequestTypeDetail::has_operation() const
{
    return is_set(yfilter)
	|| (nms_addresses !=  nullptr && nms_addresses->has_operation());
}

std::string Snmp::Information::RequestTypeDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RequestTypeDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-type-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RequestTypeDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RequestTypeDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RequestTypeDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nms_addresses != nullptr)
    {
        _children["nms-addresses"] = nms_addresses;
    }

    return _children;
}

void Snmp::Information::RequestTypeDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::RequestTypeDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::RequestTypeDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-addresses")
        return true;
    return false;
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddresses()
    :
    nms_address(this, {"nms_addr"})
{

    yang_name = "nms-addresses"; yang_parent_name = "request-type-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RequestTypeDetail::NmsAddresses::~NmsAddresses()
{
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nms_address.len(); index++)
    {
        if(nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<nms_address.len(); index++)
    {
        if(nms_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/request-type-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RequestTypeDetail::NmsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RequestTypeDetail::NmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nms-address")
    {
        auto ent_ = std::make_shared<Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress>();
        ent_->parent = this;
        nms_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RequestTypeDetail::NmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nms_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-address")
        return true;
    return false;
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::NmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    total_count{YType::uint32, "total-count"},
    agent_request_count{YType::uint32, "agent-request-count"},
    interface_request_count{YType::uint32, "interface-request-count"},
    entity_request_count{YType::uint32, "entity-request-count"},
    route_request_count{YType::uint32, "route-request-count"},
    infra_request_count{YType::uint32, "infra-request-count"}
{

    yang_name = "nms-address"; yang_parent_name = "nms-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::~NmsAddress()
{
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::has_data() const
{
    if (is_presence_container) return true;
    return nms_addr.is_set
	|| total_count.is_set
	|| agent_request_count.is_set
	|| interface_request_count.is_set
	|| entity_request_count.is_set
	|| route_request_count.is_set
	|| infra_request_count.is_set;
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nms_addr.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(agent_request_count.yfilter)
	|| ydk::is_set(interface_request_count.yfilter)
	|| ydk::is_set(entity_request_count.yfilter)
	|| ydk::is_set(route_request_count.yfilter)
	|| ydk::is_set(infra_request_count.yfilter);
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/request-type-detail/nms-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nms-address";
    ADD_KEY_TOKEN(nms_addr, "nms-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.yfilter)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (agent_request_count.is_set || is_set(agent_request_count.yfilter)) leaf_name_data.push_back(agent_request_count.get_name_leafdata());
    if (interface_request_count.is_set || is_set(interface_request_count.yfilter)) leaf_name_data.push_back(interface_request_count.get_name_leafdata());
    if (entity_request_count.is_set || is_set(entity_request_count.yfilter)) leaf_name_data.push_back(entity_request_count.get_name_leafdata());
    if (route_request_count.is_set || is_set(route_request_count.yfilter)) leaf_name_data.push_back(route_request_count.get_name_leafdata());
    if (infra_request_count.is_set || is_set(infra_request_count.yfilter)) leaf_name_data.push_back(infra_request_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
        nms_addr.value_namespace = name_space;
        nms_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-request-count")
    {
        agent_request_count = value;
        agent_request_count.value_namespace = name_space;
        agent_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-request-count")
    {
        interface_request_count = value;
        interface_request_count.value_namespace = name_space;
        interface_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-request-count")
    {
        entity_request_count = value;
        entity_request_count.value_namespace = name_space;
        entity_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-request-count")
    {
        route_request_count = value;
        route_request_count.value_namespace = name_space;
        route_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infra-request-count")
    {
        infra_request_count = value;
        infra_request_count.value_namespace = name_space;
        infra_request_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nms-addr")
    {
        nms_addr.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "agent-request-count")
    {
        agent_request_count.yfilter = yfilter;
    }
    if(value_path == "interface-request-count")
    {
        interface_request_count.yfilter = yfilter;
    }
    if(value_path == "entity-request-count")
    {
        entity_request_count.yfilter = yfilter;
    }
    if(value_path == "route-request-count")
    {
        route_request_count.yfilter = yfilter;
    }
    if(value_path == "infra-request-count")
    {
        infra_request_count.yfilter = yfilter;
    }
}

bool Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-addr" || name == "total-count" || name == "agent-request-count" || name == "interface-request-count" || name == "entity-request-count" || name == "route-request-count" || name == "infra-request-count")
        return true;
    return false;
}

Snmp::Information::DuplicateDrop::DuplicateDrop()
    :
    duplicate_request_status{YType::enumeration, "duplicate-request-status"},
    last_status_change_time{YType::str, "last-status-change-time"},
    duplicate_drop_configured_timeout{YType::uint32, "duplicate-drop-configured-timeout"},
    duplicate_dropped_requests{YType::uint32, "duplicate-dropped-requests"},
    retry_processed_requests{YType::uint32, "retry-processed-requests"},
    first_enable_time{YType::str, "first-enable-time"},
    latest_duplicate_dropped_requests{YType::uint32, "latest-duplicate-dropped-requests"},
    latest_retry_processed_requests{YType::uint32, "latest-retry-processed-requests"},
    duplicate_request_latest_enable_time{YType::str, "duplicate-request-latest-enable-time"},
    duplicate_drop_enable_count{YType::uint32, "duplicate-drop-enable-count"},
    duplicate_drop_disable_count{YType::uint32, "duplicate-drop-disable-count"}
{

    yang_name = "duplicate-drop"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::DuplicateDrop::~DuplicateDrop()
{
}

bool Snmp::Information::DuplicateDrop::has_data() const
{
    if (is_presence_container) return true;
    return duplicate_request_status.is_set
	|| last_status_change_time.is_set
	|| duplicate_drop_configured_timeout.is_set
	|| duplicate_dropped_requests.is_set
	|| retry_processed_requests.is_set
	|| first_enable_time.is_set
	|| latest_duplicate_dropped_requests.is_set
	|| latest_retry_processed_requests.is_set
	|| duplicate_request_latest_enable_time.is_set
	|| duplicate_drop_enable_count.is_set
	|| duplicate_drop_disable_count.is_set;
}

bool Snmp::Information::DuplicateDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicate_request_status.yfilter)
	|| ydk::is_set(last_status_change_time.yfilter)
	|| ydk::is_set(duplicate_drop_configured_timeout.yfilter)
	|| ydk::is_set(duplicate_dropped_requests.yfilter)
	|| ydk::is_set(retry_processed_requests.yfilter)
	|| ydk::is_set(first_enable_time.yfilter)
	|| ydk::is_set(latest_duplicate_dropped_requests.yfilter)
	|| ydk::is_set(latest_retry_processed_requests.yfilter)
	|| ydk::is_set(duplicate_request_latest_enable_time.yfilter)
	|| ydk::is_set(duplicate_drop_enable_count.yfilter)
	|| ydk::is_set(duplicate_drop_disable_count.yfilter);
}

std::string Snmp::Information::DuplicateDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::DuplicateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::DuplicateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicate_request_status.is_set || is_set(duplicate_request_status.yfilter)) leaf_name_data.push_back(duplicate_request_status.get_name_leafdata());
    if (last_status_change_time.is_set || is_set(last_status_change_time.yfilter)) leaf_name_data.push_back(last_status_change_time.get_name_leafdata());
    if (duplicate_drop_configured_timeout.is_set || is_set(duplicate_drop_configured_timeout.yfilter)) leaf_name_data.push_back(duplicate_drop_configured_timeout.get_name_leafdata());
    if (duplicate_dropped_requests.is_set || is_set(duplicate_dropped_requests.yfilter)) leaf_name_data.push_back(duplicate_dropped_requests.get_name_leafdata());
    if (retry_processed_requests.is_set || is_set(retry_processed_requests.yfilter)) leaf_name_data.push_back(retry_processed_requests.get_name_leafdata());
    if (first_enable_time.is_set || is_set(first_enable_time.yfilter)) leaf_name_data.push_back(first_enable_time.get_name_leafdata());
    if (latest_duplicate_dropped_requests.is_set || is_set(latest_duplicate_dropped_requests.yfilter)) leaf_name_data.push_back(latest_duplicate_dropped_requests.get_name_leafdata());
    if (latest_retry_processed_requests.is_set || is_set(latest_retry_processed_requests.yfilter)) leaf_name_data.push_back(latest_retry_processed_requests.get_name_leafdata());
    if (duplicate_request_latest_enable_time.is_set || is_set(duplicate_request_latest_enable_time.yfilter)) leaf_name_data.push_back(duplicate_request_latest_enable_time.get_name_leafdata());
    if (duplicate_drop_enable_count.is_set || is_set(duplicate_drop_enable_count.yfilter)) leaf_name_data.push_back(duplicate_drop_enable_count.get_name_leafdata());
    if (duplicate_drop_disable_count.is_set || is_set(duplicate_drop_disable_count.yfilter)) leaf_name_data.push_back(duplicate_drop_disable_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::DuplicateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::DuplicateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::DuplicateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicate-request-status")
    {
        duplicate_request_status = value;
        duplicate_request_status.value_namespace = name_space;
        duplicate_request_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-status-change-time")
    {
        last_status_change_time = value;
        last_status_change_time.value_namespace = name_space;
        last_status_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-drop-configured-timeout")
    {
        duplicate_drop_configured_timeout = value;
        duplicate_drop_configured_timeout.value_namespace = name_space;
        duplicate_drop_configured_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-dropped-requests")
    {
        duplicate_dropped_requests = value;
        duplicate_dropped_requests.value_namespace = name_space;
        duplicate_dropped_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-processed-requests")
    {
        retry_processed_requests = value;
        retry_processed_requests.value_namespace = name_space;
        retry_processed_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-enable-time")
    {
        first_enable_time = value;
        first_enable_time.value_namespace = name_space;
        first_enable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-duplicate-dropped-requests")
    {
        latest_duplicate_dropped_requests = value;
        latest_duplicate_dropped_requests.value_namespace = name_space;
        latest_duplicate_dropped_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-retry-processed-requests")
    {
        latest_retry_processed_requests = value;
        latest_retry_processed_requests.value_namespace = name_space;
        latest_retry_processed_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-request-latest-enable-time")
    {
        duplicate_request_latest_enable_time = value;
        duplicate_request_latest_enable_time.value_namespace = name_space;
        duplicate_request_latest_enable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-drop-enable-count")
    {
        duplicate_drop_enable_count = value;
        duplicate_drop_enable_count.value_namespace = name_space;
        duplicate_drop_enable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-drop-disable-count")
    {
        duplicate_drop_disable_count = value;
        duplicate_drop_disable_count.value_namespace = name_space;
        duplicate_drop_disable_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::DuplicateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicate-request-status")
    {
        duplicate_request_status.yfilter = yfilter;
    }
    if(value_path == "last-status-change-time")
    {
        last_status_change_time.yfilter = yfilter;
    }
    if(value_path == "duplicate-drop-configured-timeout")
    {
        duplicate_drop_configured_timeout.yfilter = yfilter;
    }
    if(value_path == "duplicate-dropped-requests")
    {
        duplicate_dropped_requests.yfilter = yfilter;
    }
    if(value_path == "retry-processed-requests")
    {
        retry_processed_requests.yfilter = yfilter;
    }
    if(value_path == "first-enable-time")
    {
        first_enable_time.yfilter = yfilter;
    }
    if(value_path == "latest-duplicate-dropped-requests")
    {
        latest_duplicate_dropped_requests.yfilter = yfilter;
    }
    if(value_path == "latest-retry-processed-requests")
    {
        latest_retry_processed_requests.yfilter = yfilter;
    }
    if(value_path == "duplicate-request-latest-enable-time")
    {
        duplicate_request_latest_enable_time.yfilter = yfilter;
    }
    if(value_path == "duplicate-drop-enable-count")
    {
        duplicate_drop_enable_count.yfilter = yfilter;
    }
    if(value_path == "duplicate-drop-disable-count")
    {
        duplicate_drop_disable_count.yfilter = yfilter;
    }
}

bool Snmp::Information::DuplicateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicate-request-status" || name == "last-status-change-time" || name == "duplicate-drop-configured-timeout" || name == "duplicate-dropped-requests" || name == "retry-processed-requests" || name == "first-enable-time" || name == "latest-duplicate-dropped-requests" || name == "latest-retry-processed-requests" || name == "duplicate-request-latest-enable-time" || name == "duplicate-drop-enable-count" || name == "duplicate-drop-disable-count")
        return true;
    return false;
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfers()
    :
    bulk_stats_transfer(this, {"transfer_name"})
{

    yang_name = "bulk-stats-transfers"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::BulkStatsTransfers::~BulkStatsTransfers()
{
}

bool Snmp::Information::BulkStatsTransfers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bulk_stats_transfer.len(); index++)
    {
        if(bulk_stats_transfer[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::BulkStatsTransfers::has_operation() const
{
    for (std::size_t index=0; index<bulk_stats_transfer.len(); index++)
    {
        if(bulk_stats_transfer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::BulkStatsTransfers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::BulkStatsTransfers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats-transfers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::BulkStatsTransfers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::BulkStatsTransfers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk-stats-transfer")
    {
        auto ent_ = std::make_shared<Snmp::Information::BulkStatsTransfers::BulkStatsTransfer>();
        ent_->parent = this;
        bulk_stats_transfer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::BulkStatsTransfers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bulk_stats_transfer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::BulkStatsTransfers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::BulkStatsTransfers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::BulkStatsTransfers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk-stats-transfer")
        return true;
    return false;
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::BulkStatsTransfer()
    :
    transfer_name{YType::str, "transfer-name"},
    transfer_name_xr{YType::str, "transfer-name-xr"},
    url_primary{YType::str, "url-primary"},
    url_secondary{YType::str, "url-secondary"},
    retained_file{YType::str, "retained-file"},
    time_left{YType::uint32, "time-left"},
    retry_left{YType::uint32, "retry-left"}
{

    yang_name = "bulk-stats-transfer"; yang_parent_name = "bulk-stats-transfers"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::~BulkStatsTransfer()
{
}

bool Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::has_data() const
{
    if (is_presence_container) return true;
    return transfer_name.is_set
	|| transfer_name_xr.is_set
	|| url_primary.is_set
	|| url_secondary.is_set
	|| retained_file.is_set
	|| time_left.is_set
	|| retry_left.is_set;
}

bool Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transfer_name.yfilter)
	|| ydk::is_set(transfer_name_xr.yfilter)
	|| ydk::is_set(url_primary.yfilter)
	|| ydk::is_set(url_secondary.yfilter)
	|| ydk::is_set(retained_file.yfilter)
	|| ydk::is_set(time_left.yfilter)
	|| ydk::is_set(retry_left.yfilter);
}

std::string Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/bulk-stats-transfers/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats-transfer";
    ADD_KEY_TOKEN(transfer_name, "transfer-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transfer_name.is_set || is_set(transfer_name.yfilter)) leaf_name_data.push_back(transfer_name.get_name_leafdata());
    if (transfer_name_xr.is_set || is_set(transfer_name_xr.yfilter)) leaf_name_data.push_back(transfer_name_xr.get_name_leafdata());
    if (url_primary.is_set || is_set(url_primary.yfilter)) leaf_name_data.push_back(url_primary.get_name_leafdata());
    if (url_secondary.is_set || is_set(url_secondary.yfilter)) leaf_name_data.push_back(url_secondary.get_name_leafdata());
    if (retained_file.is_set || is_set(retained_file.yfilter)) leaf_name_data.push_back(retained_file.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());
    if (retry_left.is_set || is_set(retry_left.yfilter)) leaf_name_data.push_back(retry_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transfer-name")
    {
        transfer_name = value;
        transfer_name.value_namespace = name_space;
        transfer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transfer-name-xr")
    {
        transfer_name_xr = value;
        transfer_name_xr.value_namespace = name_space;
        transfer_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-primary")
    {
        url_primary = value;
        url_primary.value_namespace = name_space;
        url_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-secondary")
    {
        url_secondary = value;
        url_secondary.value_namespace = name_space;
        url_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retained-file")
    {
        retained_file = value;
        retained_file.value_namespace = name_space;
        retained_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-left")
    {
        retry_left = value;
        retry_left.value_namespace = name_space;
        retry_left.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transfer-name")
    {
        transfer_name.yfilter = yfilter;
    }
    if(value_path == "transfer-name-xr")
    {
        transfer_name_xr.yfilter = yfilter;
    }
    if(value_path == "url-primary")
    {
        url_primary.yfilter = yfilter;
    }
    if(value_path == "url-secondary")
    {
        url_secondary.yfilter = yfilter;
    }
    if(value_path == "retained-file")
    {
        retained_file.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
    if(value_path == "retry-left")
    {
        retry_left.yfilter = yfilter;
    }
}

bool Snmp::Information::BulkStatsTransfers::BulkStatsTransfer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer-name" || name == "transfer-name-xr" || name == "url-primary" || name == "url-secondary" || name == "retained-file" || name == "time-left" || name == "retry-left")
        return true;
    return false;
}

Snmp::Information::TrapInfos::TrapInfos()
    :
    trap_info(this, {})
{

    yang_name = "trap-infos"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapInfos::~TrapInfos()
{
}

bool Snmp::Information::TrapInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_info.len(); index++)
    {
        if(trap_info[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::TrapInfos::has_operation() const
{
    for (std::size_t index=0; index<trap_info.len(); index++)
    {
        if(trap_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::TrapInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-info")
    {
        auto ent_ = std::make_shared<Snmp::Information::TrapInfos::TrapInfo>();
        ent_->parent = this;
        trap_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::TrapInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::TrapInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::TrapInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-info")
        return true;
    return false;
}

Snmp::Information::TrapInfos::TrapInfo::TrapInfo()
    :
    trap_host{YType::str, "trap-host"},
    port{YType::uint16, "port"},
    host{YType::str, "host"},
    port_xr{YType::uint16, "port-xr"},
    trap_oid_count{YType::uint32, "trap-oid-count"}
        ,
    trap_oi_dinfo(this, {})
{

    yang_name = "trap-info"; yang_parent_name = "trap-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapInfos::TrapInfo::~TrapInfo()
{
}

bool Snmp::Information::TrapInfos::TrapInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_oi_dinfo.len(); index++)
    {
        if(trap_oi_dinfo[index]->has_data())
            return true;
    }
    return trap_host.is_set
	|| port.is_set
	|| host.is_set
	|| port_xr.is_set
	|| trap_oid_count.is_set;
}

bool Snmp::Information::TrapInfos::TrapInfo::has_operation() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.len(); index++)
    {
        if(trap_oi_dinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trap_host.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port_xr.yfilter)
	|| ydk::is_set(trap_oid_count.yfilter);
}

std::string Snmp::Information::TrapInfos::TrapInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapInfos::TrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapInfos::TrapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_host.is_set || is_set(trap_host.yfilter)) leaf_name_data.push_back(trap_host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.yfilter)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.yfilter)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapInfos::TrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oi-dinfo")
    {
        auto ent_ = std::make_shared<Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo>();
        ent_->parent = this;
        trap_oi_dinfo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapInfos::TrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_oi_dinfo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::TrapInfos::TrapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-host")
    {
        trap_host = value;
        trap_host.value_namespace = name_space;
        trap_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
        port_xr.value_namespace = name_space;
        port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
        trap_oid_count.value_namespace = name_space;
        trap_oid_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::TrapInfos::TrapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-host")
    {
        trap_host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port-xr")
    {
        port_xr.yfilter = yfilter;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count.yfilter = yfilter;
    }
}

bool Snmp::Information::TrapInfos::TrapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oi-dinfo" || name == "trap-host" || name == "port" || name == "host" || name == "port-xr" || name == "trap-oid-count")
        return true;
    return false;
}

Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::TrapOiDinfo()
    :
    trap_oid{YType::str, "trap-oid"},
    count{YType::uint32, "count"},
    drop_count{YType::uint32, "drop-count"},
    retry_count{YType::uint32, "retry-count"},
    lastsent_time{YType::str, "lastsent-time"},
    lasrdrop_time{YType::str, "lasrdrop-time"}
{

    yang_name = "trap-oi-dinfo"; yang_parent_name = "trap-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::~TrapOiDinfo()
{
}

bool Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::has_data() const
{
    if (is_presence_container) return true;
    return trap_oid.is_set
	|| count.is_set
	|| drop_count.is_set
	|| retry_count.is_set
	|| lastsent_time.is_set
	|| lasrdrop_time.is_set;
}

bool Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(drop_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(lastsent_time.yfilter)
	|| ydk::is_set(lasrdrop_time.yfilter);
}

std::string Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-infos/trap-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oi-dinfo";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (drop_count.is_set || is_set(drop_count.yfilter)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (lastsent_time.is_set || is_set(lastsent_time.yfilter)) leaf_name_data.push_back(lastsent_time.get_name_leafdata());
    if (lasrdrop_time.is_set || is_set(lasrdrop_time.yfilter)) leaf_name_data.push_back(lasrdrop_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-count")
    {
        drop_count = value;
        drop_count.value_namespace = name_space;
        drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time = value;
        lastsent_time.value_namespace = name_space;
        lastsent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time = value;
        lasrdrop_time.value_namespace = name_space;
        lasrdrop_time.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "drop-count")
    {
        drop_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time.yfilter = yfilter;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time.yfilter = yfilter;
    }
}

bool Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid" || name == "count" || name == "drop-count" || name == "retry-count" || name == "lastsent-time" || name == "lasrdrop-time")
        return true;
    return false;
}

Snmp::Information::PollOids::PollOids()
    :
    poll_oid(this, {"object_id"})
{

    yang_name = "poll-oids"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::PollOids::~PollOids()
{
}

bool Snmp::Information::PollOids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<poll_oid.len(); index++)
    {
        if(poll_oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::PollOids::has_operation() const
{
    for (std::size_t index=0; index<poll_oid.len(); index++)
    {
        if(poll_oid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::PollOids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::PollOids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poll-oids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::PollOids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::PollOids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poll-oid")
    {
        auto ent_ = std::make_shared<Snmp::Information::PollOids::PollOid>();
        ent_->parent = this;
        poll_oid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::PollOids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : poll_oid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::PollOids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::PollOids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::PollOids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poll-oid")
        return true;
    return false;
}

Snmp::Information::PollOids::PollOid::PollOid()
    :
    object_id{YType::str, "object-id"},
    nms_count{YType::uint32, "nms-count"},
    nms{YType::str, "nms"},
    request_count{YType::uint32, "request-count"}
{

    yang_name = "poll-oid"; yang_parent_name = "poll-oids"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::PollOids::PollOid::~PollOid()
{
}

bool Snmp::Information::PollOids::PollOid::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : request_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(nms_count.yfilter)
	|| ydk::is_set(nms.yfilter)
	|| ydk::is_set(request_count.yfilter);
}

std::string Snmp::Information::PollOids::PollOid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/poll-oids/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::PollOids::PollOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poll-oid";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::PollOids::PollOid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (nms_count.is_set || is_set(nms_count.yfilter)) leaf_name_data.push_back(nms_count.get_name_leafdata());

    auto nms_name_datas = nms.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nms_name_datas.begin(), nms_name_datas.end());
    auto request_count_name_datas = request_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), request_count_name_datas.begin(), request_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::PollOids::PollOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::PollOids::PollOid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::PollOids::PollOid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nms-count")
    {
        nms_count = value;
        nms_count.value_namespace = name_space;
        nms_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nms")
    {
        nms.append(value);
    }
    if(value_path == "request-count")
    {
        request_count.append(value);
    }
}

void Snmp::Information::PollOids::PollOid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "nms-count")
    {
        nms_count.yfilter = yfilter;
    }
    if(value_path == "nms")
    {
        nms.yfilter = yfilter;
    }
    if(value_path == "request-count")
    {
        request_count.yfilter = yfilter;
    }
}

bool Snmp::Information::PollOids::PollOid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "nms-count" || name == "nms" || name == "request-count")
        return true;
    return false;
}

Snmp::Information::InfomDetails::InfomDetails()
    :
    infom_detail(this, {})
{

    yang_name = "infom-details"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::InfomDetails::~InfomDetails()
{
}

bool Snmp::Information::InfomDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<infom_detail.len(); index++)
    {
        if(infom_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::InfomDetails::has_operation() const
{
    for (std::size_t index=0; index<infom_detail.len(); index++)
    {
        if(infom_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::InfomDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::InfomDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infom-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::InfomDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::InfomDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "infom-detail")
    {
        auto ent_ = std::make_shared<Snmp::Information::InfomDetails::InfomDetail>();
        ent_->parent = this;
        infom_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::InfomDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : infom_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::InfomDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::InfomDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::InfomDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "infom-detail")
        return true;
    return false;
}

Snmp::Information::InfomDetails::InfomDetail::InfomDetail()
    :
    trap_host{YType::str, "trap-host"},
    port{YType::uint16, "port"},
    host{YType::str, "host"},
    port_xr{YType::uint16, "port-xr"},
    trap_oid_count{YType::uint32, "trap-oid-count"}
        ,
    trap_oi_dinfo(this, {})
{

    yang_name = "infom-detail"; yang_parent_name = "infom-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::InfomDetails::InfomDetail::~InfomDetail()
{
}

bool Snmp::Information::InfomDetails::InfomDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_oi_dinfo.len(); index++)
    {
        if(trap_oi_dinfo[index]->has_data())
            return true;
    }
    return trap_host.is_set
	|| port.is_set
	|| host.is_set
	|| port_xr.is_set
	|| trap_oid_count.is_set;
}

bool Snmp::Information::InfomDetails::InfomDetail::has_operation() const
{
    for (std::size_t index=0; index<trap_oi_dinfo.len(); index++)
    {
        if(trap_oi_dinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trap_host.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port_xr.yfilter)
	|| ydk::is_set(trap_oid_count.yfilter);
}

std::string Snmp::Information::InfomDetails::InfomDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/infom-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::InfomDetails::InfomDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infom-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::InfomDetails::InfomDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_host.is_set || is_set(trap_host.yfilter)) leaf_name_data.push_back(trap_host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.yfilter)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.yfilter)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::InfomDetails::InfomDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oi-dinfo")
    {
        auto ent_ = std::make_shared<Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo>();
        ent_->parent = this;
        trap_oi_dinfo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::InfomDetails::InfomDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_oi_dinfo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::InfomDetails::InfomDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-host")
    {
        trap_host = value;
        trap_host.value_namespace = name_space;
        trap_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
        port_xr.value_namespace = name_space;
        port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
        trap_oid_count.value_namespace = name_space;
        trap_oid_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::InfomDetails::InfomDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-host")
    {
        trap_host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port-xr")
    {
        port_xr.yfilter = yfilter;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count.yfilter = yfilter;
    }
}

bool Snmp::Information::InfomDetails::InfomDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oi-dinfo" || name == "trap-host" || name == "port" || name == "host" || name == "port-xr" || name == "trap-oid-count")
        return true;
    return false;
}

Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::TrapOiDinfo()
    :
    trap_oid{YType::str, "trap-oid"},
    count{YType::uint32, "count"},
    drop_count{YType::uint32, "drop-count"},
    retry_count{YType::uint32, "retry-count"},
    lastsent_time{YType::str, "lastsent-time"},
    lasrdrop_time{YType::str, "lasrdrop-time"}
{

    yang_name = "trap-oi-dinfo"; yang_parent_name = "infom-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::~TrapOiDinfo()
{
}

bool Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::has_data() const
{
    if (is_presence_container) return true;
    return trap_oid.is_set
	|| count.is_set
	|| drop_count.is_set
	|| retry_count.is_set
	|| lastsent_time.is_set
	|| lasrdrop_time.is_set;
}

bool Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(drop_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(lastsent_time.yfilter)
	|| ydk::is_set(lasrdrop_time.yfilter);
}

std::string Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/infom-details/infom-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oi-dinfo";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (drop_count.is_set || is_set(drop_count.yfilter)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (lastsent_time.is_set || is_set(lastsent_time.yfilter)) leaf_name_data.push_back(lastsent_time.get_name_leafdata());
    if (lasrdrop_time.is_set || is_set(lasrdrop_time.yfilter)) leaf_name_data.push_back(lasrdrop_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-count")
    {
        drop_count = value;
        drop_count.value_namespace = name_space;
        drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time = value;
        lastsent_time.value_namespace = name_space;
        lastsent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time = value;
        lasrdrop_time.value_namespace = name_space;
        lasrdrop_time.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "drop-count")
    {
        drop_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "lastsent-time")
    {
        lastsent_time.yfilter = yfilter;
    }
    if(value_path == "lasrdrop-time")
    {
        lasrdrop_time.yfilter = yfilter;
    }
}

bool Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid" || name == "count" || name == "drop-count" || name == "retry-count" || name == "lastsent-time" || name == "lasrdrop-time")
        return true;
    return false;
}

Snmp::Information::Statistics::Statistics()
    :
    packets_received{YType::uint32, "packets-received"},
    bad_versions_received{YType::uint32, "bad-versions-received"},
    bad_community_names_received{YType::uint32, "bad-community-names-received"},
    bad_community_uses_received{YType::uint32, "bad-community-uses-received"},
    asn_parse_errors_received{YType::uint32, "asn-parse-errors-received"},
    silent_drop_count{YType::uint32, "silent-drop-count"},
    proxy_drop_count{YType::uint32, "proxy-drop-count"},
    too_big_packet_received{YType::uint32, "too-big-packet-received"},
    max_packet_size{YType::uint32, "max-packet-size"},
    no_such_names_received{YType::uint32, "no-such-names-received"},
    bad_values_received{YType::uint32, "bad-values-received"},
    read_only_received{YType::uint32, "read-only-received"},
    total_general_errors{YType::uint32, "total-general-errors"},
    total_requested_variables{YType::uint32, "total-requested-variables"},
    total_set_variables_received{YType::uint32, "total-set-variables-received"},
    get_requests_received{YType::uint32, "get-requests-received"},
    get_next_requests_received{YType::uint32, "get-next-requests-received"},
    set_requests_received{YType::uint32, "set-requests-received"},
    get_responses_received{YType::uint32, "get-responses-received"},
    traps_received{YType::uint32, "traps-received"},
    total_packets_sent{YType::uint32, "total-packets-sent"},
    too_big_packets_sent{YType::uint32, "too-big-packets-sent"},
    no_such_names_sent{YType::uint32, "no-such-names-sent"},
    bad_values_sent{YType::uint32, "bad-values-sent"},
    general_errors_sent{YType::uint32, "general-errors-sent"},
    get_requests_sent{YType::uint32, "get-requests-sent"},
    get_next_request_sent{YType::uint32, "get-next-request-sent"},
    set_requests_sent{YType::uint32, "set-requests-sent"},
    get_responses_sent{YType::uint32, "get-responses-sent"},
    traps_sent{YType::uint32, "traps-sent"}
{

    yang_name = "statistics"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Statistics::~Statistics()
{
}

bool Snmp::Information::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bad_versions_received.is_set
	|| bad_community_names_received.is_set
	|| bad_community_uses_received.is_set
	|| asn_parse_errors_received.is_set
	|| silent_drop_count.is_set
	|| proxy_drop_count.is_set
	|| too_big_packet_received.is_set
	|| max_packet_size.is_set
	|| no_such_names_received.is_set
	|| bad_values_received.is_set
	|| read_only_received.is_set
	|| total_general_errors.is_set
	|| total_requested_variables.is_set
	|| total_set_variables_received.is_set
	|| get_requests_received.is_set
	|| get_next_requests_received.is_set
	|| set_requests_received.is_set
	|| get_responses_received.is_set
	|| traps_received.is_set
	|| total_packets_sent.is_set
	|| too_big_packets_sent.is_set
	|| no_such_names_sent.is_set
	|| bad_values_sent.is_set
	|| general_errors_sent.is_set
	|| get_requests_sent.is_set
	|| get_next_request_sent.is_set
	|| set_requests_sent.is_set
	|| get_responses_sent.is_set
	|| traps_sent.is_set;
}

bool Snmp::Information::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bad_versions_received.yfilter)
	|| ydk::is_set(bad_community_names_received.yfilter)
	|| ydk::is_set(bad_community_uses_received.yfilter)
	|| ydk::is_set(asn_parse_errors_received.yfilter)
	|| ydk::is_set(silent_drop_count.yfilter)
	|| ydk::is_set(proxy_drop_count.yfilter)
	|| ydk::is_set(too_big_packet_received.yfilter)
	|| ydk::is_set(max_packet_size.yfilter)
	|| ydk::is_set(no_such_names_received.yfilter)
	|| ydk::is_set(bad_values_received.yfilter)
	|| ydk::is_set(read_only_received.yfilter)
	|| ydk::is_set(total_general_errors.yfilter)
	|| ydk::is_set(total_requested_variables.yfilter)
	|| ydk::is_set(total_set_variables_received.yfilter)
	|| ydk::is_set(get_requests_received.yfilter)
	|| ydk::is_set(get_next_requests_received.yfilter)
	|| ydk::is_set(set_requests_received.yfilter)
	|| ydk::is_set(get_responses_received.yfilter)
	|| ydk::is_set(traps_received.yfilter)
	|| ydk::is_set(total_packets_sent.yfilter)
	|| ydk::is_set(too_big_packets_sent.yfilter)
	|| ydk::is_set(no_such_names_sent.yfilter)
	|| ydk::is_set(bad_values_sent.yfilter)
	|| ydk::is_set(general_errors_sent.yfilter)
	|| ydk::is_set(get_requests_sent.yfilter)
	|| ydk::is_set(get_next_request_sent.yfilter)
	|| ydk::is_set(set_requests_sent.yfilter)
	|| ydk::is_set(get_responses_sent.yfilter)
	|| ydk::is_set(traps_sent.yfilter);
}

std::string Snmp::Information::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bad_versions_received.is_set || is_set(bad_versions_received.yfilter)) leaf_name_data.push_back(bad_versions_received.get_name_leafdata());
    if (bad_community_names_received.is_set || is_set(bad_community_names_received.yfilter)) leaf_name_data.push_back(bad_community_names_received.get_name_leafdata());
    if (bad_community_uses_received.is_set || is_set(bad_community_uses_received.yfilter)) leaf_name_data.push_back(bad_community_uses_received.get_name_leafdata());
    if (asn_parse_errors_received.is_set || is_set(asn_parse_errors_received.yfilter)) leaf_name_data.push_back(asn_parse_errors_received.get_name_leafdata());
    if (silent_drop_count.is_set || is_set(silent_drop_count.yfilter)) leaf_name_data.push_back(silent_drop_count.get_name_leafdata());
    if (proxy_drop_count.is_set || is_set(proxy_drop_count.yfilter)) leaf_name_data.push_back(proxy_drop_count.get_name_leafdata());
    if (too_big_packet_received.is_set || is_set(too_big_packet_received.yfilter)) leaf_name_data.push_back(too_big_packet_received.get_name_leafdata());
    if (max_packet_size.is_set || is_set(max_packet_size.yfilter)) leaf_name_data.push_back(max_packet_size.get_name_leafdata());
    if (no_such_names_received.is_set || is_set(no_such_names_received.yfilter)) leaf_name_data.push_back(no_such_names_received.get_name_leafdata());
    if (bad_values_received.is_set || is_set(bad_values_received.yfilter)) leaf_name_data.push_back(bad_values_received.get_name_leafdata());
    if (read_only_received.is_set || is_set(read_only_received.yfilter)) leaf_name_data.push_back(read_only_received.get_name_leafdata());
    if (total_general_errors.is_set || is_set(total_general_errors.yfilter)) leaf_name_data.push_back(total_general_errors.get_name_leafdata());
    if (total_requested_variables.is_set || is_set(total_requested_variables.yfilter)) leaf_name_data.push_back(total_requested_variables.get_name_leafdata());
    if (total_set_variables_received.is_set || is_set(total_set_variables_received.yfilter)) leaf_name_data.push_back(total_set_variables_received.get_name_leafdata());
    if (get_requests_received.is_set || is_set(get_requests_received.yfilter)) leaf_name_data.push_back(get_requests_received.get_name_leafdata());
    if (get_next_requests_received.is_set || is_set(get_next_requests_received.yfilter)) leaf_name_data.push_back(get_next_requests_received.get_name_leafdata());
    if (set_requests_received.is_set || is_set(set_requests_received.yfilter)) leaf_name_data.push_back(set_requests_received.get_name_leafdata());
    if (get_responses_received.is_set || is_set(get_responses_received.yfilter)) leaf_name_data.push_back(get_responses_received.get_name_leafdata());
    if (traps_received.is_set || is_set(traps_received.yfilter)) leaf_name_data.push_back(traps_received.get_name_leafdata());
    if (total_packets_sent.is_set || is_set(total_packets_sent.yfilter)) leaf_name_data.push_back(total_packets_sent.get_name_leafdata());
    if (too_big_packets_sent.is_set || is_set(too_big_packets_sent.yfilter)) leaf_name_data.push_back(too_big_packets_sent.get_name_leafdata());
    if (no_such_names_sent.is_set || is_set(no_such_names_sent.yfilter)) leaf_name_data.push_back(no_such_names_sent.get_name_leafdata());
    if (bad_values_sent.is_set || is_set(bad_values_sent.yfilter)) leaf_name_data.push_back(bad_values_sent.get_name_leafdata());
    if (general_errors_sent.is_set || is_set(general_errors_sent.yfilter)) leaf_name_data.push_back(general_errors_sent.get_name_leafdata());
    if (get_requests_sent.is_set || is_set(get_requests_sent.yfilter)) leaf_name_data.push_back(get_requests_sent.get_name_leafdata());
    if (get_next_request_sent.is_set || is_set(get_next_request_sent.yfilter)) leaf_name_data.push_back(get_next_request_sent.get_name_leafdata());
    if (set_requests_sent.is_set || is_set(set_requests_sent.yfilter)) leaf_name_data.push_back(set_requests_sent.get_name_leafdata());
    if (get_responses_sent.is_set || is_set(get_responses_sent.yfilter)) leaf_name_data.push_back(get_responses_sent.get_name_leafdata());
    if (traps_sent.is_set || is_set(traps_sent.yfilter)) leaf_name_data.push_back(traps_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-versions-received")
    {
        bad_versions_received = value;
        bad_versions_received.value_namespace = name_space;
        bad_versions_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-community-names-received")
    {
        bad_community_names_received = value;
        bad_community_names_received.value_namespace = name_space;
        bad_community_names_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-community-uses-received")
    {
        bad_community_uses_received = value;
        bad_community_uses_received.value_namespace = name_space;
        bad_community_uses_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn-parse-errors-received")
    {
        asn_parse_errors_received = value;
        asn_parse_errors_received.value_namespace = name_space;
        asn_parse_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "silent-drop-count")
    {
        silent_drop_count = value;
        silent_drop_count.value_namespace = name_space;
        silent_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-drop-count")
    {
        proxy_drop_count = value;
        proxy_drop_count.value_namespace = name_space;
        proxy_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-big-packet-received")
    {
        too_big_packet_received = value;
        too_big_packet_received.value_namespace = name_space;
        too_big_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-size")
    {
        max_packet_size = value;
        max_packet_size.value_namespace = name_space;
        max_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-such-names-received")
    {
        no_such_names_received = value;
        no_such_names_received.value_namespace = name_space;
        no_such_names_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-values-received")
    {
        bad_values_received = value;
        bad_values_received.value_namespace = name_space;
        bad_values_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-received")
    {
        read_only_received = value;
        read_only_received.value_namespace = name_space;
        read_only_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-general-errors")
    {
        total_general_errors = value;
        total_general_errors.value_namespace = name_space;
        total_general_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-requested-variables")
    {
        total_requested_variables = value;
        total_requested_variables.value_namespace = name_space;
        total_requested_variables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-set-variables-received")
    {
        total_set_variables_received = value;
        total_set_variables_received.value_namespace = name_space;
        total_set_variables_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-requests-received")
    {
        get_requests_received = value;
        get_requests_received.value_namespace = name_space;
        get_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-next-requests-received")
    {
        get_next_requests_received = value;
        get_next_requests_received.value_namespace = name_space;
        get_next_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-requests-received")
    {
        set_requests_received = value;
        set_requests_received.value_namespace = name_space;
        set_requests_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-responses-received")
    {
        get_responses_received = value;
        get_responses_received.value_namespace = name_space;
        get_responses_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traps-received")
    {
        traps_received = value;
        traps_received.value_namespace = name_space;
        traps_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent = value;
        total_packets_sent.value_namespace = name_space;
        total_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-big-packets-sent")
    {
        too_big_packets_sent = value;
        too_big_packets_sent.value_namespace = name_space;
        too_big_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-such-names-sent")
    {
        no_such_names_sent = value;
        no_such_names_sent.value_namespace = name_space;
        no_such_names_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-values-sent")
    {
        bad_values_sent = value;
        bad_values_sent.value_namespace = name_space;
        bad_values_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-errors-sent")
    {
        general_errors_sent = value;
        general_errors_sent.value_namespace = name_space;
        general_errors_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-requests-sent")
    {
        get_requests_sent = value;
        get_requests_sent.value_namespace = name_space;
        get_requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-next-request-sent")
    {
        get_next_request_sent = value;
        get_next_request_sent.value_namespace = name_space;
        get_next_request_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-requests-sent")
    {
        set_requests_sent = value;
        set_requests_sent.value_namespace = name_space;
        set_requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-responses-sent")
    {
        get_responses_sent = value;
        get_responses_sent.value_namespace = name_space;
        get_responses_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traps-sent")
    {
        traps_sent = value;
        traps_sent.value_namespace = name_space;
        traps_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bad-versions-received")
    {
        bad_versions_received.yfilter = yfilter;
    }
    if(value_path == "bad-community-names-received")
    {
        bad_community_names_received.yfilter = yfilter;
    }
    if(value_path == "bad-community-uses-received")
    {
        bad_community_uses_received.yfilter = yfilter;
    }
    if(value_path == "asn-parse-errors-received")
    {
        asn_parse_errors_received.yfilter = yfilter;
    }
    if(value_path == "silent-drop-count")
    {
        silent_drop_count.yfilter = yfilter;
    }
    if(value_path == "proxy-drop-count")
    {
        proxy_drop_count.yfilter = yfilter;
    }
    if(value_path == "too-big-packet-received")
    {
        too_big_packet_received.yfilter = yfilter;
    }
    if(value_path == "max-packet-size")
    {
        max_packet_size.yfilter = yfilter;
    }
    if(value_path == "no-such-names-received")
    {
        no_such_names_received.yfilter = yfilter;
    }
    if(value_path == "bad-values-received")
    {
        bad_values_received.yfilter = yfilter;
    }
    if(value_path == "read-only-received")
    {
        read_only_received.yfilter = yfilter;
    }
    if(value_path == "total-general-errors")
    {
        total_general_errors.yfilter = yfilter;
    }
    if(value_path == "total-requested-variables")
    {
        total_requested_variables.yfilter = yfilter;
    }
    if(value_path == "total-set-variables-received")
    {
        total_set_variables_received.yfilter = yfilter;
    }
    if(value_path == "get-requests-received")
    {
        get_requests_received.yfilter = yfilter;
    }
    if(value_path == "get-next-requests-received")
    {
        get_next_requests_received.yfilter = yfilter;
    }
    if(value_path == "set-requests-received")
    {
        set_requests_received.yfilter = yfilter;
    }
    if(value_path == "get-responses-received")
    {
        get_responses_received.yfilter = yfilter;
    }
    if(value_path == "traps-received")
    {
        traps_received.yfilter = yfilter;
    }
    if(value_path == "total-packets-sent")
    {
        total_packets_sent.yfilter = yfilter;
    }
    if(value_path == "too-big-packets-sent")
    {
        too_big_packets_sent.yfilter = yfilter;
    }
    if(value_path == "no-such-names-sent")
    {
        no_such_names_sent.yfilter = yfilter;
    }
    if(value_path == "bad-values-sent")
    {
        bad_values_sent.yfilter = yfilter;
    }
    if(value_path == "general-errors-sent")
    {
        general_errors_sent.yfilter = yfilter;
    }
    if(value_path == "get-requests-sent")
    {
        get_requests_sent.yfilter = yfilter;
    }
    if(value_path == "get-next-request-sent")
    {
        get_next_request_sent.yfilter = yfilter;
    }
    if(value_path == "set-requests-sent")
    {
        set_requests_sent.yfilter = yfilter;
    }
    if(value_path == "get-responses-sent")
    {
        get_responses_sent.yfilter = yfilter;
    }
    if(value_path == "traps-sent")
    {
        traps_sent.yfilter = yfilter;
    }
}

bool Snmp::Information::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bad-versions-received" || name == "bad-community-names-received" || name == "bad-community-uses-received" || name == "asn-parse-errors-received" || name == "silent-drop-count" || name == "proxy-drop-count" || name == "too-big-packet-received" || name == "max-packet-size" || name == "no-such-names-received" || name == "bad-values-received" || name == "read-only-received" || name == "total-general-errors" || name == "total-requested-variables" || name == "total-set-variables-received" || name == "get-requests-received" || name == "get-next-requests-received" || name == "set-requests-received" || name == "get-responses-received" || name == "traps-received" || name == "total-packets-sent" || name == "too-big-packets-sent" || name == "no-such-names-sent" || name == "bad-values-sent" || name == "general-errors-sent" || name == "get-requests-sent" || name == "get-next-request-sent" || name == "set-requests-sent" || name == "get-responses-sent" || name == "traps-sent")
        return true;
    return false;
}

Snmp::Information::IncomingQueue::IncomingQueue()
    :
    queue_count{YType::uint32, "queue-count"}
        ,
    inq_entry(this, {})
{

    yang_name = "incoming-queue"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::IncomingQueue::~IncomingQueue()
{
}

bool Snmp::Information::IncomingQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inq_entry.len(); index++)
    {
        if(inq_entry[index]->has_data())
            return true;
    }
    return queue_count.is_set;
}

bool Snmp::Information::IncomingQueue::has_operation() const
{
    for (std::size_t index=0; index<inq_entry.len(); index++)
    {
        if(inq_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_count.yfilter);
}

std::string Snmp::Information::IncomingQueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::IncomingQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::IncomingQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_count.is_set || is_set(queue_count.yfilter)) leaf_name_data.push_back(queue_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::IncomingQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inq-entry")
    {
        auto ent_ = std::make_shared<Snmp::Information::IncomingQueue::InqEntry>();
        ent_->parent = this;
        inq_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::IncomingQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inq_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::IncomingQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-count")
    {
        queue_count = value;
        queue_count.value_namespace = name_space;
        queue_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::IncomingQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-count")
    {
        queue_count.yfilter = yfilter;
    }
}

bool Snmp::Information::IncomingQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inq-entry" || name == "queue-count")
        return true;
    return false;
}

Snmp::Information::IncomingQueue::InqEntry::InqEntry()
    :
    address_of_queue{YType::str, "address-of-queue"},
    request_count{YType::uint32, "request-count"},
    processed_request_count{YType::uint32, "processed-request-count"},
    last_access_time{YType::str, "last-access-time"},
    priority{YType::uint8, "priority"}
{

    yang_name = "inq-entry"; yang_parent_name = "incoming-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::IncomingQueue::InqEntry::~InqEntry()
{
}

bool Snmp::Information::IncomingQueue::InqEntry::has_data() const
{
    if (is_presence_container) return true;
    return address_of_queue.is_set
	|| request_count.is_set
	|| processed_request_count.is_set
	|| last_access_time.is_set
	|| priority.is_set;
}

bool Snmp::Information::IncomingQueue::InqEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_of_queue.yfilter)
	|| ydk::is_set(request_count.yfilter)
	|| ydk::is_set(processed_request_count.yfilter)
	|| ydk::is_set(last_access_time.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Snmp::Information::IncomingQueue::InqEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/incoming-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::IncomingQueue::InqEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inq-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::IncomingQueue::InqEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_of_queue.is_set || is_set(address_of_queue.yfilter)) leaf_name_data.push_back(address_of_queue.get_name_leafdata());
    if (request_count.is_set || is_set(request_count.yfilter)) leaf_name_data.push_back(request_count.get_name_leafdata());
    if (processed_request_count.is_set || is_set(processed_request_count.yfilter)) leaf_name_data.push_back(processed_request_count.get_name_leafdata());
    if (last_access_time.is_set || is_set(last_access_time.yfilter)) leaf_name_data.push_back(last_access_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::IncomingQueue::InqEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::IncomingQueue::InqEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::IncomingQueue::InqEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-of-queue")
    {
        address_of_queue = value;
        address_of_queue.value_namespace = name_space;
        address_of_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-count")
    {
        request_count = value;
        request_count.value_namespace = name_space;
        request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-request-count")
    {
        processed_request_count = value;
        processed_request_count.value_namespace = name_space;
        processed_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-access-time")
    {
        last_access_time = value;
        last_access_time.value_namespace = name_space;
        last_access_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::IncomingQueue::InqEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-of-queue")
    {
        address_of_queue.yfilter = yfilter;
    }
    if(value_path == "request-count")
    {
        request_count.yfilter = yfilter;
    }
    if(value_path == "processed-request-count")
    {
        processed_request_count.yfilter = yfilter;
    }
    if(value_path == "last-access-time")
    {
        last_access_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Snmp::Information::IncomingQueue::InqEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-of-queue" || name == "request-count" || name == "processed-request-count" || name == "last-access-time" || name == "priority")
        return true;
    return false;
}

Snmp::Information::ContextMapping::ContextMapping()
    :
    contex_mapping(this, {})
{

    yang_name = "context-mapping"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::ContextMapping::~ContextMapping()
{
}

bool Snmp::Information::ContextMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<contex_mapping.len(); index++)
    {
        if(contex_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::ContextMapping::has_operation() const
{
    for (std::size_t index=0; index<contex_mapping.len(); index++)
    {
        if(contex_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::ContextMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::ContextMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contex-mapping")
    {
        auto ent_ = std::make_shared<Snmp::Information::ContextMapping::ContexMapping>();
        ent_->parent = this;
        contex_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : contex_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::ContextMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::ContextMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::ContextMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contex-mapping")
        return true;
    return false;
}

Snmp::Information::ContextMapping::ContexMapping::ContexMapping()
    :
    context{YType::str, "context"},
    feature_name{YType::str, "feature-name"},
    instance{YType::str, "instance"},
    topology{YType::str, "topology"},
    feature{YType::str, "feature"}
{

    yang_name = "contex-mapping"; yang_parent_name = "context-mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::ContextMapping::ContexMapping::~ContexMapping()
{
}

bool Snmp::Information::ContextMapping::ContexMapping::has_data() const
{
    if (is_presence_container) return true;
    return context.is_set
	|| feature_name.is_set
	|| instance.is_set
	|| topology.is_set
	|| feature.is_set;
}

bool Snmp::Information::ContextMapping::ContexMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(feature.yfilter);
}

std::string Snmp::Information::ContextMapping::ContexMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/context-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::ContextMapping::ContexMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contex-mapping";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::ContextMapping::ContexMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());
    if (feature.is_set || is_set(feature.yfilter)) leaf_name_data.push_back(feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::ContextMapping::ContexMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::ContextMapping::ContexMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::ContextMapping::ContexMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature")
    {
        feature = value;
        feature.value_namespace = name_space;
        feature.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::ContextMapping::ContexMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "feature")
    {
        feature.yfilter = yfilter;
    }
}

bool Snmp::Information::ContextMapping::ContexMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context" || name == "feature-name" || name == "instance" || name == "topology" || name == "feature")
        return true;
    return false;
}

Snmp::Information::TrapOids::TrapOids()
    :
    trap_oid(this, {"trap_oid"})
{

    yang_name = "trap-oids"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapOids::~TrapOids()
{
}

bool Snmp::Information::TrapOids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_oid.len(); index++)
    {
        if(trap_oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::TrapOids::has_operation() const
{
    for (std::size_t index=0; index<trap_oid.len(); index++)
    {
        if(trap_oid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::TrapOids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapOids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapOids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapOids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-oid")
    {
        auto ent_ = std::make_shared<Snmp::Information::TrapOids::TrapOid>();
        ent_->parent = this;
        trap_oid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapOids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_oid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::TrapOids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::TrapOids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::TrapOids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid")
        return true;
    return false;
}

Snmp::Information::TrapOids::TrapOid::TrapOid()
    :
    trap_oid{YType::str, "trap-oid"},
    trap_oid_count{YType::uint32, "trap-oid-count"},
    trap_oid_xr{YType::str, "trap-oid-xr"}
{

    yang_name = "trap-oid"; yang_parent_name = "trap-oids"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapOids::TrapOid::~TrapOid()
{
}

bool Snmp::Information::TrapOids::TrapOid::has_data() const
{
    if (is_presence_container) return true;
    return trap_oid.is_set
	|| trap_oid_count.is_set
	|| trap_oid_xr.is_set;
}

bool Snmp::Information::TrapOids::TrapOid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(trap_oid_count.yfilter)
	|| ydk::is_set(trap_oid_xr.yfilter);
}

std::string Snmp::Information::TrapOids::TrapOid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-oids/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapOids::TrapOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-oid";
    ADD_KEY_TOKEN(trap_oid, "trap-oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapOids::TrapOid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_oid_count.is_set || is_set(trap_oid_count.yfilter)) leaf_name_data.push_back(trap_oid_count.get_name_leafdata());
    if (trap_oid_xr.is_set || is_set(trap_oid_xr.yfilter)) leaf_name_data.push_back(trap_oid_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapOids::TrapOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapOids::TrapOid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::TrapOids::TrapOid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count = value;
        trap_oid_count.value_namespace = name_space;
        trap_oid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid-xr")
    {
        trap_oid_xr = value;
        trap_oid_xr.value_namespace = name_space;
        trap_oid_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::TrapOids::TrapOid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "trap-oid-count")
    {
        trap_oid_count.yfilter = yfilter;
    }
    if(value_path == "trap-oid-xr")
    {
        trap_oid_xr.yfilter = yfilter;
    }
}

bool Snmp::Information::TrapOids::TrapOid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid" || name == "trap-oid-count" || name == "trap-oid-xr")
        return true;
    return false;
}

Snmp::Information::NmSpackets::NmSpackets()
    :
    nm_spacket(this, {"packetcount"})
{

    yang_name = "nm-spackets"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::NmSpackets::~NmSpackets()
{
}

bool Snmp::Information::NmSpackets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nm_spacket.len(); index++)
    {
        if(nm_spacket[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::NmSpackets::has_operation() const
{
    for (std::size_t index=0; index<nm_spacket.len(); index++)
    {
        if(nm_spacket[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::NmSpackets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::NmSpackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nm-spackets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::NmSpackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::NmSpackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nm-spacket")
    {
        auto ent_ = std::make_shared<Snmp::Information::NmSpackets::NmSpacket>();
        ent_->parent = this;
        nm_spacket.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::NmSpackets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nm_spacket.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::NmSpackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::NmSpackets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::NmSpackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nm-spacket")
        return true;
    return false;
}

Snmp::Information::NmSpackets::NmSpacket::NmSpacket()
    :
    packetcount{YType::str, "packetcount"},
    number_of_nmsq_pkts_dropped{YType::uint32, "number-of-nmsq-pkts-dropped"},
    number_of_pkts_dropped{YType::uint32, "number-of-pkts-dropped"},
    overload_start_time{YType::str, "overload-start-time"},
    overload_end_time{YType::str, "overload-end-time"}
{

    yang_name = "nm-spacket"; yang_parent_name = "nm-spackets"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::NmSpackets::NmSpacket::~NmSpacket()
{
}

bool Snmp::Information::NmSpackets::NmSpacket::has_data() const
{
    if (is_presence_container) return true;
    return packetcount.is_set
	|| number_of_nmsq_pkts_dropped.is_set
	|| number_of_pkts_dropped.is_set
	|| overload_start_time.is_set
	|| overload_end_time.is_set;
}

bool Snmp::Information::NmSpackets::NmSpacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packetcount.yfilter)
	|| ydk::is_set(number_of_nmsq_pkts_dropped.yfilter)
	|| ydk::is_set(number_of_pkts_dropped.yfilter)
	|| ydk::is_set(overload_start_time.yfilter)
	|| ydk::is_set(overload_end_time.yfilter);
}

std::string Snmp::Information::NmSpackets::NmSpacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/nm-spackets/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::NmSpackets::NmSpacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nm-spacket";
    ADD_KEY_TOKEN(packetcount, "packetcount");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::NmSpackets::NmSpacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packetcount.is_set || is_set(packetcount.yfilter)) leaf_name_data.push_back(packetcount.get_name_leafdata());
    if (number_of_nmsq_pkts_dropped.is_set || is_set(number_of_nmsq_pkts_dropped.yfilter)) leaf_name_data.push_back(number_of_nmsq_pkts_dropped.get_name_leafdata());
    if (number_of_pkts_dropped.is_set || is_set(number_of_pkts_dropped.yfilter)) leaf_name_data.push_back(number_of_pkts_dropped.get_name_leafdata());
    if (overload_start_time.is_set || is_set(overload_start_time.yfilter)) leaf_name_data.push_back(overload_start_time.get_name_leafdata());
    if (overload_end_time.is_set || is_set(overload_end_time.yfilter)) leaf_name_data.push_back(overload_end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::NmSpackets::NmSpacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::NmSpackets::NmSpacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::NmSpackets::NmSpacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packetcount")
    {
        packetcount = value;
        packetcount.value_namespace = name_space;
        packetcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nmsq-pkts-dropped")
    {
        number_of_nmsq_pkts_dropped = value;
        number_of_nmsq_pkts_dropped.value_namespace = name_space;
        number_of_nmsq_pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped = value;
        number_of_pkts_dropped.value_namespace = name_space;
        number_of_pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-start-time")
    {
        overload_start_time = value;
        overload_start_time.value_namespace = name_space;
        overload_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-end-time")
    {
        overload_end_time = value;
        overload_end_time.value_namespace = name_space;
        overload_end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::NmSpackets::NmSpacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packetcount")
    {
        packetcount.yfilter = yfilter;
    }
    if(value_path == "number-of-nmsq-pkts-dropped")
    {
        number_of_nmsq_pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "number-of-pkts-dropped")
    {
        number_of_pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "overload-start-time")
    {
        overload_start_time.yfilter = yfilter;
    }
    if(value_path == "overload-end-time")
    {
        overload_end_time.yfilter = yfilter;
    }
}

bool Snmp::Information::NmSpackets::NmSpacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packetcount" || name == "number-of-nmsq-pkts-dropped" || name == "number-of-pkts-dropped" || name == "overload-start-time" || name == "overload-end-time")
        return true;
    return false;
}

Snmp::Information::Mibs::Mibs()
    :
    mib(this, {"name"})
{

    yang_name = "mibs"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Mibs::~Mibs()
{
}

bool Snmp::Information::Mibs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mib.len(); index++)
    {
        if(mib[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Mibs::has_operation() const
{
    for (std::size_t index=0; index<mib.len(); index++)
    {
        if(mib[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Mibs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Mibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mibs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Mibs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Mibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib")
    {
        auto ent_ = std::make_shared<Snmp::Information::Mibs::Mib>();
        ent_->parent = this;
        mib.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Mibs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mib.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Mibs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Mibs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Mibs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib")
        return true;
    return false;
}

Snmp::Information::Mibs::Mib::Mib()
    :
    name{YType::str, "name"}
        ,
    oids(std::make_shared<Snmp::Information::Mibs::Mib::Oids>())
    , mib_information(std::make_shared<Snmp::Information::Mibs::Mib::MibInformation>())
{
    oids->parent = this;
    mib_information->parent = this;

    yang_name = "mib"; yang_parent_name = "mibs"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Mibs::Mib::~Mib()
{
}

bool Snmp::Information::Mibs::Mib::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (oids !=  nullptr && oids->has_data())
	|| (mib_information !=  nullptr && mib_information->has_data());
}

bool Snmp::Information::Mibs::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oids !=  nullptr && oids->has_operation())
	|| (mib_information !=  nullptr && mib_information->has_operation());
}

std::string Snmp::Information::Mibs::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/mibs/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Mibs::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Mibs::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Mibs::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oids")
    {
        if(oids == nullptr)
        {
            oids = std::make_shared<Snmp::Information::Mibs::Mib::Oids>();
        }
        return oids;
    }

    if(child_yang_name == "mib-information")
    {
        if(mib_information == nullptr)
        {
            mib_information = std::make_shared<Snmp::Information::Mibs::Mib::MibInformation>();
        }
        return mib_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Mibs::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oids != nullptr)
    {
        _children["oids"] = oids;
    }

    if(mib_information != nullptr)
    {
        _children["mib-information"] = mib_information;
    }

    return _children;
}

void Snmp::Information::Mibs::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Mibs::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Information::Mibs::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oids" || name == "mib-information" || name == "name")
        return true;
    return false;
}

Snmp::Information::Mibs::Mib::Oids::Oids()
    :
    oid(this, {"oid"})
{

    yang_name = "oids"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Mibs::Mib::Oids::~Oids()
{
}

bool Snmp::Information::Mibs::Mib::Oids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oid.len(); index++)
    {
        if(oid[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Mibs::Mib::Oids::has_operation() const
{
    for (std::size_t index=0; index<oid.len(); index++)
    {
        if(oid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Mibs::Mib::Oids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Mibs::Mib::Oids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Mibs::Mib::Oids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oid")
    {
        auto ent_ = std::make_shared<Snmp::Information::Mibs::Mib::Oids::Oid>();
        ent_->parent = this;
        oid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Mibs::Mib::Oids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Mibs::Mib::Oids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Mibs::Mib::Oids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Mibs::Mib::Oids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid")
        return true;
    return false;
}

Snmp::Information::Mibs::Mib::Oids::Oid::Oid()
    :
    oid{YType::str, "oid"},
    oid_name{YType::str, "oid-name"}
{

    yang_name = "oid"; yang_parent_name = "oids"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Mibs::Mib::Oids::Oid::~Oid()
{
}

bool Snmp::Information::Mibs::Mib::Oids::Oid::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| oid_name.is_set;
}

bool Snmp::Information::Mibs::Mib::Oids::Oid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_name.yfilter);
}

std::string Snmp::Information::Mibs::Mib::Oids::Oid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oid";
    ADD_KEY_TOKEN(oid, "oid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Mibs::Mib::Oids::Oid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_name.is_set || is_set(oid_name.yfilter)) leaf_name_data.push_back(oid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Mibs::Mib::Oids::Oid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Mibs::Mib::Oids::Oid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Mibs::Mib::Oids::Oid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-name")
    {
        oid_name = value;
        oid_name.value_namespace = name_space;
        oid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Mibs::Mib::Oids::Oid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "oid-name")
    {
        oid_name.yfilter = yfilter;
    }
}

bool Snmp::Information::Mibs::Mib::Oids::Oid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "oid-name")
        return true;
    return false;
}

Snmp::Information::Mibs::Mib::MibInformation::MibInformation()
    :
    mib_name{YType::str, "mib-name"},
    dll_name{YType::str, "dll-name"},
    mib_config_filename{YType::str, "mib-config-filename"},
    is_mib_loaded{YType::boolean, "is-mib-loaded"},
    dll_capabilities{YType::uint32, "dll-capabilities"},
    trap_strings{YType::str, "trap-strings"},
    timeout{YType::boolean, "timeout"},
    load_time{YType::uint32, "load-time"}
{

    yang_name = "mib-information"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Mibs::Mib::MibInformation::~MibInformation()
{
}

bool Snmp::Information::Mibs::Mib::MibInformation::has_data() const
{
    if (is_presence_container) return true;
    return mib_name.is_set
	|| dll_name.is_set
	|| mib_config_filename.is_set
	|| is_mib_loaded.is_set
	|| dll_capabilities.is_set
	|| trap_strings.is_set
	|| timeout.is_set
	|| load_time.is_set;
}

bool Snmp::Information::Mibs::Mib::MibInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_name.yfilter)
	|| ydk::is_set(dll_name.yfilter)
	|| ydk::is_set(mib_config_filename.yfilter)
	|| ydk::is_set(is_mib_loaded.yfilter)
	|| ydk::is_set(dll_capabilities.yfilter)
	|| ydk::is_set(trap_strings.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(load_time.yfilter);
}

std::string Snmp::Information::Mibs::Mib::MibInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Mibs::Mib::MibInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_name.is_set || is_set(mib_name.yfilter)) leaf_name_data.push_back(mib_name.get_name_leafdata());
    if (dll_name.is_set || is_set(dll_name.yfilter)) leaf_name_data.push_back(dll_name.get_name_leafdata());
    if (mib_config_filename.is_set || is_set(mib_config_filename.yfilter)) leaf_name_data.push_back(mib_config_filename.get_name_leafdata());
    if (is_mib_loaded.is_set || is_set(is_mib_loaded.yfilter)) leaf_name_data.push_back(is_mib_loaded.get_name_leafdata());
    if (dll_capabilities.is_set || is_set(dll_capabilities.yfilter)) leaf_name_data.push_back(dll_capabilities.get_name_leafdata());
    if (trap_strings.is_set || is_set(trap_strings.yfilter)) leaf_name_data.push_back(trap_strings.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (load_time.is_set || is_set(load_time.yfilter)) leaf_name_data.push_back(load_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Mibs::Mib::MibInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Mibs::Mib::MibInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Mibs::Mib::MibInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-name")
    {
        mib_name = value;
        mib_name.value_namespace = name_space;
        mib_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dll-name")
    {
        dll_name = value;
        dll_name.value_namespace = name_space;
        dll_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-config-filename")
    {
        mib_config_filename = value;
        mib_config_filename.value_namespace = name_space;
        mib_config_filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mib-loaded")
    {
        is_mib_loaded = value;
        is_mib_loaded.value_namespace = name_space;
        is_mib_loaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dll-capabilities")
    {
        dll_capabilities = value;
        dll_capabilities.value_namespace = name_space;
        dll_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-strings")
    {
        trap_strings = value;
        trap_strings.value_namespace = name_space;
        trap_strings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-time")
    {
        load_time = value;
        load_time.value_namespace = name_space;
        load_time.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Mibs::Mib::MibInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-name")
    {
        mib_name.yfilter = yfilter;
    }
    if(value_path == "dll-name")
    {
        dll_name.yfilter = yfilter;
    }
    if(value_path == "mib-config-filename")
    {
        mib_config_filename.yfilter = yfilter;
    }
    if(value_path == "is-mib-loaded")
    {
        is_mib_loaded.yfilter = yfilter;
    }
    if(value_path == "dll-capabilities")
    {
        dll_capabilities.yfilter = yfilter;
    }
    if(value_path == "trap-strings")
    {
        trap_strings.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "load-time")
    {
        load_time.yfilter = yfilter;
    }
}

bool Snmp::Information::Mibs::Mib::MibInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-name" || name == "dll-name" || name == "mib-config-filename" || name == "is-mib-loaded" || name == "dll-capabilities" || name == "trap-strings" || name == "timeout" || name == "load-time")
        return true;
    return false;
}

Snmp::Information::SerialNumbers::SerialNumbers()
    :
    serial_number(this, {})
{

    yang_name = "serial-numbers"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SerialNumbers::~SerialNumbers()
{
}

bool Snmp::Information::SerialNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serial_number.len(); index++)
    {
        if(serial_number[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::SerialNumbers::has_operation() const
{
    for (std::size_t index=0; index<serial_number.len(); index++)
    {
        if(serial_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::SerialNumbers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SerialNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SerialNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SerialNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serial-number")
    {
        auto ent_ = std::make_shared<Snmp::Information::SerialNumbers::SerialNumber>();
        ent_->parent = this;
        serial_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SerialNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serial_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::SerialNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::SerialNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::SerialNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number")
        return true;
    return false;
}

Snmp::Information::SerialNumbers::SerialNumber::SerialNumber()
    :
    number{YType::str, "number"},
    req_id{YType::uint32, "req-id"},
    port{YType::uint16, "port"},
    nms{YType::str, "nms"},
    request_id{YType::uint32, "request-id"},
    port_xr{YType::uint16, "port-xr"},
    pdu_type{YType::uint16, "pdu-type"},
    error_status{YType::uint16, "error-status"},
    serial_num{YType::uint32, "serial-num"},
    input_q{YType::str, "input-q"},
    output_q{YType::uint32, "output-q"},
    pending_q{YType::uint32, "pending-q"},
    response_out{YType::uint32, "response-out"}
{

    yang_name = "serial-number"; yang_parent_name = "serial-numbers"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SerialNumbers::SerialNumber::~SerialNumber()
{
}

bool Snmp::Information::SerialNumbers::SerialNumber::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| req_id.is_set
	|| port.is_set
	|| nms.is_set
	|| request_id.is_set
	|| port_xr.is_set
	|| pdu_type.is_set
	|| error_status.is_set
	|| serial_num.is_set
	|| input_q.is_set
	|| output_q.is_set
	|| pending_q.is_set
	|| response_out.is_set;
}

bool Snmp::Information::SerialNumbers::SerialNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(req_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(nms.yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(port_xr.yfilter)
	|| ydk::is_set(pdu_type.yfilter)
	|| ydk::is_set(error_status.yfilter)
	|| ydk::is_set(serial_num.yfilter)
	|| ydk::is_set(input_q.yfilter)
	|| ydk::is_set(output_q.yfilter)
	|| ydk::is_set(pending_q.yfilter)
	|| ydk::is_set(response_out.yfilter);
}

std::string Snmp::Information::SerialNumbers::SerialNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/serial-numbers/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SerialNumbers::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SerialNumbers::SerialNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (req_id.is_set || is_set(req_id.yfilter)) leaf_name_data.push_back(req_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (nms.is_set || is_set(nms.yfilter)) leaf_name_data.push_back(nms.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.yfilter)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (pdu_type.is_set || is_set(pdu_type.yfilter)) leaf_name_data.push_back(pdu_type.get_name_leafdata());
    if (error_status.is_set || is_set(error_status.yfilter)) leaf_name_data.push_back(error_status.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());
    if (input_q.is_set || is_set(input_q.yfilter)) leaf_name_data.push_back(input_q.get_name_leafdata());
    if (output_q.is_set || is_set(output_q.yfilter)) leaf_name_data.push_back(output_q.get_name_leafdata());
    if (pending_q.is_set || is_set(pending_q.yfilter)) leaf_name_data.push_back(pending_q.get_name_leafdata());
    if (response_out.is_set || is_set(response_out.yfilter)) leaf_name_data.push_back(response_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SerialNumbers::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SerialNumbers::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::SerialNumbers::SerialNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-id")
    {
        req_id = value;
        req_id.value_namespace = name_space;
        req_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nms")
    {
        nms = value;
        nms.value_namespace = name_space;
        nms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
        port_xr.value_namespace = name_space;
        port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-type")
    {
        pdu_type = value;
        pdu_type.value_namespace = name_space;
        pdu_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-status")
    {
        error_status = value;
        error_status.value_namespace = name_space;
        error_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-q")
    {
        input_q = value;
        input_q.value_namespace = name_space;
        input_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-q")
    {
        output_q = value;
        output_q.value_namespace = name_space;
        output_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-q")
    {
        pending_q = value;
        pending_q.value_namespace = name_space;
        pending_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-out")
    {
        response_out = value;
        response_out.value_namespace = name_space;
        response_out.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::SerialNumbers::SerialNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "req-id")
    {
        req_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "nms")
    {
        nms.yfilter = yfilter;
    }
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "port-xr")
    {
        port_xr.yfilter = yfilter;
    }
    if(value_path == "pdu-type")
    {
        pdu_type.yfilter = yfilter;
    }
    if(value_path == "error-status")
    {
        error_status.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
    if(value_path == "input-q")
    {
        input_q.yfilter = yfilter;
    }
    if(value_path == "output-q")
    {
        output_q.yfilter = yfilter;
    }
    if(value_path == "pending-q")
    {
        pending_q.yfilter = yfilter;
    }
    if(value_path == "response-out")
    {
        response_out.yfilter = yfilter;
    }
}

bool Snmp::Information::SerialNumbers::SerialNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "req-id" || name == "port" || name == "nms" || name == "request-id" || name == "port-xr" || name == "pdu-type" || name == "error-status" || name == "serial-num" || name == "input-q" || name == "output-q" || name == "pending-q" || name == "response-out")
        return true;
    return false;
}

Snmp::Information::DropNmsAddresses::DropNmsAddresses()
    :
    drop_nms_address(this, {"nms_addr"})
{

    yang_name = "drop-nms-addresses"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::DropNmsAddresses::~DropNmsAddresses()
{
}

bool Snmp::Information::DropNmsAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<drop_nms_address.len(); index++)
    {
        if(drop_nms_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::DropNmsAddresses::has_operation() const
{
    for (std::size_t index=0; index<drop_nms_address.len(); index++)
    {
        if(drop_nms_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::DropNmsAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::DropNmsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-nms-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::DropNmsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::DropNmsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-nms-address")
    {
        auto ent_ = std::make_shared<Snmp::Information::DropNmsAddresses::DropNmsAddress>();
        ent_->parent = this;
        drop_nms_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::DropNmsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : drop_nms_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::DropNmsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::DropNmsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::DropNmsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-nms-address")
        return true;
    return false;
}

Snmp::Information::DropNmsAddresses::DropNmsAddress::DropNmsAddress()
    :
    nms_addr{YType::str, "nms-addr"},
    nms_address{YType::str, "nms-address"},
    incoming_q_count{YType::uint32, "incoming-q-count"},
    threshold_incoming_q_count{YType::uint32, "threshold-incoming-q-count"},
    encode_count{YType::uint32, "encode-count"},
    duplicate_count{YType::uint32, "duplicate-count"},
    stack_count{YType::uint32, "stack-count"},
    aipc_count{YType::uint32, "aipc-count"},
    overload_count{YType::uint32, "overload-count"},
    timeout_count{YType::uint32, "timeout-count"},
    internal_count{YType::uint32, "internal-count"}
{

    yang_name = "drop-nms-address"; yang_parent_name = "drop-nms-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::DropNmsAddresses::DropNmsAddress::~DropNmsAddress()
{
}

bool Snmp::Information::DropNmsAddresses::DropNmsAddress::has_data() const
{
    if (is_presence_container) return true;
    return nms_addr.is_set
	|| nms_address.is_set
	|| incoming_q_count.is_set
	|| threshold_incoming_q_count.is_set
	|| encode_count.is_set
	|| duplicate_count.is_set
	|| stack_count.is_set
	|| aipc_count.is_set
	|| overload_count.is_set
	|| timeout_count.is_set
	|| internal_count.is_set;
}

bool Snmp::Information::DropNmsAddresses::DropNmsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nms_addr.yfilter)
	|| ydk::is_set(nms_address.yfilter)
	|| ydk::is_set(incoming_q_count.yfilter)
	|| ydk::is_set(threshold_incoming_q_count.yfilter)
	|| ydk::is_set(encode_count.yfilter)
	|| ydk::is_set(duplicate_count.yfilter)
	|| ydk::is_set(stack_count.yfilter)
	|| ydk::is_set(aipc_count.yfilter)
	|| ydk::is_set(overload_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(internal_count.yfilter);
}

std::string Snmp::Information::DropNmsAddresses::DropNmsAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/drop-nms-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::DropNmsAddresses::DropNmsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-nms-address";
    ADD_KEY_TOKEN(nms_addr, "nms-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::DropNmsAddresses::DropNmsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nms_addr.is_set || is_set(nms_addr.yfilter)) leaf_name_data.push_back(nms_addr.get_name_leafdata());
    if (nms_address.is_set || is_set(nms_address.yfilter)) leaf_name_data.push_back(nms_address.get_name_leafdata());
    if (incoming_q_count.is_set || is_set(incoming_q_count.yfilter)) leaf_name_data.push_back(incoming_q_count.get_name_leafdata());
    if (threshold_incoming_q_count.is_set || is_set(threshold_incoming_q_count.yfilter)) leaf_name_data.push_back(threshold_incoming_q_count.get_name_leafdata());
    if (encode_count.is_set || is_set(encode_count.yfilter)) leaf_name_data.push_back(encode_count.get_name_leafdata());
    if (duplicate_count.is_set || is_set(duplicate_count.yfilter)) leaf_name_data.push_back(duplicate_count.get_name_leafdata());
    if (stack_count.is_set || is_set(stack_count.yfilter)) leaf_name_data.push_back(stack_count.get_name_leafdata());
    if (aipc_count.is_set || is_set(aipc_count.yfilter)) leaf_name_data.push_back(aipc_count.get_name_leafdata());
    if (overload_count.is_set || is_set(overload_count.yfilter)) leaf_name_data.push_back(overload_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (internal_count.is_set || is_set(internal_count.yfilter)) leaf_name_data.push_back(internal_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::DropNmsAddresses::DropNmsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::DropNmsAddresses::DropNmsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::DropNmsAddresses::DropNmsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nms-addr")
    {
        nms_addr = value;
        nms_addr.value_namespace = name_space;
        nms_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nms-address")
    {
        nms_address = value;
        nms_address.value_namespace = name_space;
        nms_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-q-count")
    {
        incoming_q_count = value;
        incoming_q_count.value_namespace = name_space;
        incoming_q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-incoming-q-count")
    {
        threshold_incoming_q_count = value;
        threshold_incoming_q_count.value_namespace = name_space;
        threshold_incoming_q_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encode-count")
    {
        encode_count = value;
        encode_count.value_namespace = name_space;
        encode_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-count")
    {
        duplicate_count = value;
        duplicate_count.value_namespace = name_space;
        duplicate_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stack-count")
    {
        stack_count = value;
        stack_count.value_namespace = name_space;
        stack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aipc-count")
    {
        aipc_count = value;
        aipc_count.value_namespace = name_space;
        aipc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-count")
    {
        overload_count = value;
        overload_count.value_namespace = name_space;
        overload_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-count")
    {
        internal_count = value;
        internal_count.value_namespace = name_space;
        internal_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::DropNmsAddresses::DropNmsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nms-addr")
    {
        nms_addr.yfilter = yfilter;
    }
    if(value_path == "nms-address")
    {
        nms_address.yfilter = yfilter;
    }
    if(value_path == "incoming-q-count")
    {
        incoming_q_count.yfilter = yfilter;
    }
    if(value_path == "threshold-incoming-q-count")
    {
        threshold_incoming_q_count.yfilter = yfilter;
    }
    if(value_path == "encode-count")
    {
        encode_count.yfilter = yfilter;
    }
    if(value_path == "duplicate-count")
    {
        duplicate_count.yfilter = yfilter;
    }
    if(value_path == "stack-count")
    {
        stack_count.yfilter = yfilter;
    }
    if(value_path == "aipc-count")
    {
        aipc_count.yfilter = yfilter;
    }
    if(value_path == "overload-count")
    {
        overload_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "internal-count")
    {
        internal_count.yfilter = yfilter;
    }
}

bool Snmp::Information::DropNmsAddresses::DropNmsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nms-addr" || name == "nms-address" || name == "incoming-q-count" || name == "threshold-incoming-q-count" || name == "encode-count" || name == "duplicate-count" || name == "stack-count" || name == "aipc-count" || name == "overload-count" || name == "timeout-count" || name == "internal-count")
        return true;
    return false;
}

Snmp::Information::Views::Views()
    :
    view(this, {"name"})
{

    yang_name = "views"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Views::~Views()
{
}

bool Snmp::Information::Views::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Views::has_operation() const
{
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Views::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Views::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "views";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Views::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Views::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view")
    {
        auto ent_ = std::make_shared<Snmp::Information::Views::View>();
        ent_->parent = this;
        view.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Views::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : view.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Views::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Views::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Views::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view")
        return true;
    return false;
}

Snmp::Information::Views::View::View()
    :
    name{YType::str, "name"}
        ,
    view_information(this, {"object_id"})
{

    yang_name = "view"; yang_parent_name = "views"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Views::View::~View()
{
}

bool Snmp::Information::Views::View::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<view_information.len(); index++)
    {
        if(view_information[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Snmp::Information::Views::View::has_operation() const
{
    for (std::size_t index=0; index<view_information.len(); index++)
    {
        if(view_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Snmp::Information::Views::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/views/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Views::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Views::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Views::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view-information")
    {
        auto ent_ = std::make_shared<Snmp::Information::Views::View::ViewInformation>();
        ent_->parent = this;
        view_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Views::View::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : view_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Views::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Views::View::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Information::Views::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view-information" || name == "name")
        return true;
    return false;
}

Snmp::Information::Views::View::ViewInformation::ViewInformation()
    :
    object_id{YType::str, "object-id"},
    snmp_view_family_type{YType::str, "snmp-view-family-type"},
    snmp_view_family_storage_type{YType::str, "snmp-view-family-storage-type"},
    snmp_view_family_status{YType::str, "snmp-view-family-status"}
{

    yang_name = "view-information"; yang_parent_name = "view"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Views::View::ViewInformation::~ViewInformation()
{
}

bool Snmp::Information::Views::View::ViewInformation::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| snmp_view_family_type.is_set
	|| snmp_view_family_storage_type.is_set
	|| snmp_view_family_status.is_set;
}

bool Snmp::Information::Views::View::ViewInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(snmp_view_family_type.yfilter)
	|| ydk::is_set(snmp_view_family_storage_type.yfilter)
	|| ydk::is_set(snmp_view_family_status.yfilter);
}

std::string Snmp::Information::Views::View::ViewInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view-information";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Views::View::ViewInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (snmp_view_family_type.is_set || is_set(snmp_view_family_type.yfilter)) leaf_name_data.push_back(snmp_view_family_type.get_name_leafdata());
    if (snmp_view_family_storage_type.is_set || is_set(snmp_view_family_storage_type.yfilter)) leaf_name_data.push_back(snmp_view_family_storage_type.get_name_leafdata());
    if (snmp_view_family_status.is_set || is_set(snmp_view_family_status.yfilter)) leaf_name_data.push_back(snmp_view_family_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Views::View::ViewInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Views::View::ViewInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Views::View::ViewInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-view-family-type")
    {
        snmp_view_family_type = value;
        snmp_view_family_type.value_namespace = name_space;
        snmp_view_family_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-view-family-storage-type")
    {
        snmp_view_family_storage_type = value;
        snmp_view_family_storage_type.value_namespace = name_space;
        snmp_view_family_storage_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-view-family-status")
    {
        snmp_view_family_status = value;
        snmp_view_family_status.value_namespace = name_space;
        snmp_view_family_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Views::View::ViewInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "snmp-view-family-type")
    {
        snmp_view_family_type.yfilter = yfilter;
    }
    if(value_path == "snmp-view-family-storage-type")
    {
        snmp_view_family_storage_type.yfilter = yfilter;
    }
    if(value_path == "snmp-view-family-status")
    {
        snmp_view_family_status.yfilter = yfilter;
    }
}

bool Snmp::Information::Views::View::ViewInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "snmp-view-family-type" || name == "snmp-view-family-storage-type" || name == "snmp-view-family-status")
        return true;
    return false;
}

Snmp::Information::SystemDescr::SystemDescr()
    :
    sys_descr{YType::str, "sys-descr"}
{

    yang_name = "system-descr"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SystemDescr::~SystemDescr()
{
}

bool Snmp::Information::SystemDescr::has_data() const
{
    if (is_presence_container) return true;
    return sys_descr.is_set;
}

bool Snmp::Information::SystemDescr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sys_descr.yfilter);
}

std::string Snmp::Information::SystemDescr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SystemDescr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-descr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SystemDescr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_descr.is_set || is_set(sys_descr.yfilter)) leaf_name_data.push_back(sys_descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SystemDescr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SystemDescr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::SystemDescr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sys-descr")
    {
        sys_descr = value;
        sys_descr.value_namespace = name_space;
        sys_descr.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::SystemDescr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sys-descr")
    {
        sys_descr.yfilter = yfilter;
    }
}

bool Snmp::Information::SystemDescr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-descr")
        return true;
    return false;
}

Snmp::Information::Tables::Tables()
    :
    groups(std::make_shared<Snmp::Information::Tables::Groups>())
    , user_engine_ids(std::make_shared<Snmp::Information::Tables::UserEngineIds>())
{
    groups->parent = this;
    user_engine_ids->parent = this;

    yang_name = "tables"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Tables::~Tables()
{
}

bool Snmp::Information::Tables::has_data() const
{
    if (is_presence_container) return true;
    return (groups !=  nullptr && groups->has_data())
	|| (user_engine_ids !=  nullptr && user_engine_ids->has_data());
}

bool Snmp::Information::Tables::has_operation() const
{
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (user_engine_ids !=  nullptr && user_engine_ids->has_operation());
}

std::string Snmp::Information::Tables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Tables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(user_engine_ids != nullptr)
    {
        _children["user-engine-ids"] = user_engine_ids;
    }

    return _children;
}

void Snmp::Information::Tables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Tables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Tables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "user-engine-ids")
        return true;
    return false;
}

Snmp::Information::Tables::Groups::Groups()
    :
    group(this, {"name"})
{

    yang_name = "groups"; yang_parent_name = "tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Tables::Groups::~Groups()
{
}

bool Snmp::Information::Tables::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Tables::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Tables::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Snmp::Information::Tables::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Tables::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Tables::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Tables::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Snmp::Information::Tables::Groups::Group::Group()
    :
    name{YType::str, "name"}
        ,
    group_informations(std::make_shared<Snmp::Information::Tables::Groups::Group::GroupInformations>())
{
    group_informations->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Tables::Groups::Group::~Group()
{
}

bool Snmp::Information::Tables::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (group_informations !=  nullptr && group_informations->has_data());
}

bool Snmp::Information::Tables::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (group_informations !=  nullptr && group_informations->has_operation());
}

std::string Snmp::Information::Tables::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Tables::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_informations != nullptr)
    {
        _children["group-informations"] = group_informations;
    }

    return _children;
}

void Snmp::Information::Tables::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Tables::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Information::Tables::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-informations" || name == "name")
        return true;
    return false;
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformations()
    :
    group_information(this, {})
{

    yang_name = "group-informations"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Tables::Groups::Group::GroupInformations::~GroupInformations()
{
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_information.len(); index++)
    {
        if(group_information[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::has_operation() const
{
    for (std::size_t index=0; index<group_information.len(); index++)
    {
        if(group_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Tables::Groups::Group::GroupInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::Groups::Group::GroupInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::Groups::Group::GroupInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-information")
    {
        auto ent_ = std::make_shared<Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation>();
        ent_->parent = this;
        group_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::Groups::Group::GroupInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-information")
        return true;
    return false;
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::GroupInformation()
    :
    modelnumber{YType::str, "modelnumber"},
    level{YType::str, "level"},
    vacm_access_read_view_name{YType::str, "vacm-access-read-view-name"},
    vacm_access_write_view_name{YType::str, "vacm-access-write-view-name"},
    vacm_access_notify_view_name{YType::str, "vacm-access-notify-view-name"},
    vacm_access_status{YType::uint32, "vacm-access-status"}
{

    yang_name = "group-information"; yang_parent_name = "group-informations"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::~GroupInformation()
{
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::has_data() const
{
    if (is_presence_container) return true;
    return modelnumber.is_set
	|| level.is_set
	|| vacm_access_read_view_name.is_set
	|| vacm_access_write_view_name.is_set
	|| vacm_access_notify_view_name.is_set
	|| vacm_access_status.is_set;
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modelnumber.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(vacm_access_read_view_name.yfilter)
	|| ydk::is_set(vacm_access_write_view_name.yfilter)
	|| ydk::is_set(vacm_access_notify_view_name.yfilter)
	|| ydk::is_set(vacm_access_status.yfilter);
}

std::string Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modelnumber.is_set || is_set(modelnumber.yfilter)) leaf_name_data.push_back(modelnumber.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (vacm_access_read_view_name.is_set || is_set(vacm_access_read_view_name.yfilter)) leaf_name_data.push_back(vacm_access_read_view_name.get_name_leafdata());
    if (vacm_access_write_view_name.is_set || is_set(vacm_access_write_view_name.yfilter)) leaf_name_data.push_back(vacm_access_write_view_name.get_name_leafdata());
    if (vacm_access_notify_view_name.is_set || is_set(vacm_access_notify_view_name.yfilter)) leaf_name_data.push_back(vacm_access_notify_view_name.get_name_leafdata());
    if (vacm_access_status.is_set || is_set(vacm_access_status.yfilter)) leaf_name_data.push_back(vacm_access_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modelnumber")
    {
        modelnumber = value;
        modelnumber.value_namespace = name_space;
        modelnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacm-access-read-view-name")
    {
        vacm_access_read_view_name = value;
        vacm_access_read_view_name.value_namespace = name_space;
        vacm_access_read_view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacm-access-write-view-name")
    {
        vacm_access_write_view_name = value;
        vacm_access_write_view_name.value_namespace = name_space;
        vacm_access_write_view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacm-access-notify-view-name")
    {
        vacm_access_notify_view_name = value;
        vacm_access_notify_view_name.value_namespace = name_space;
        vacm_access_notify_view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacm-access-status")
    {
        vacm_access_status = value;
        vacm_access_status.value_namespace = name_space;
        vacm_access_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modelnumber")
    {
        modelnumber.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "vacm-access-read-view-name")
    {
        vacm_access_read_view_name.yfilter = yfilter;
    }
    if(value_path == "vacm-access-write-view-name")
    {
        vacm_access_write_view_name.yfilter = yfilter;
    }
    if(value_path == "vacm-access-notify-view-name")
    {
        vacm_access_notify_view_name.yfilter = yfilter;
    }
    if(value_path == "vacm-access-status")
    {
        vacm_access_status.yfilter = yfilter;
    }
}

bool Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modelnumber" || name == "level" || name == "vacm-access-read-view-name" || name == "vacm-access-write-view-name" || name == "vacm-access-notify-view-name" || name == "vacm-access-status")
        return true;
    return false;
}

Snmp::Information::Tables::UserEngineIds::UserEngineIds()
    :
    user_engine_id(this, {"engine_id"})
{

    yang_name = "user-engine-ids"; yang_parent_name = "tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Tables::UserEngineIds::~UserEngineIds()
{
}

bool Snmp::Information::Tables::UserEngineIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_engine_id.len(); index++)
    {
        if(user_engine_id[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Information::Tables::UserEngineIds::has_operation() const
{
    for (std::size_t index=0; index<user_engine_id.len(); index++)
    {
        if(user_engine_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Information::Tables::UserEngineIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Tables::UserEngineIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-engine-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::UserEngineIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::UserEngineIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-engine-id")
    {
        auto ent_ = std::make_shared<Snmp::Information::Tables::UserEngineIds::UserEngineId>();
        ent_->parent = this;
        user_engine_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::UserEngineIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user_engine_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Tables::UserEngineIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Information::Tables::UserEngineIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Information::Tables::UserEngineIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-engine-id")
        return true;
    return false;
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserEngineId()
    :
    engine_id{YType::str, "engine-id"}
        ,
    user_name(this, {"user_name"})
{

    yang_name = "user-engine-id"; yang_parent_name = "user-engine-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::~UserEngineId()
{
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_name.len(); index++)
    {
        if(user_name[index]->has_data())
            return true;
    }
    return engine_id.is_set;
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::has_operation() const
{
    for (std::size_t index=0; index<user_name.len(); index++)
    {
        if(user_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(engine_id.yfilter);
}

std::string Snmp::Information::Tables::UserEngineIds::UserEngineId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/tables/user-engine-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::Tables::UserEngineIds::UserEngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-engine-id";
    ADD_KEY_TOKEN(engine_id, "engine-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::UserEngineIds::UserEngineId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engine_id.is_set || is_set(engine_id.yfilter)) leaf_name_data.push_back(engine_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::UserEngineIds::UserEngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user-name")
    {
        auto ent_ = std::make_shared<Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName>();
        ent_->parent = this;
        user_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::UserEngineIds::UserEngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "engine-id")
    {
        engine_id = value;
        engine_id.value_namespace = name_space;
        engine_id.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "engine-id")
    {
        engine_id.yfilter = yfilter;
    }
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name" || name == "engine-id")
        return true;
    return false;
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::UserName()
    :
    user_name{YType::str, "user-name"},
    usm_user_storage_type{YType::uint32, "usm-user-storage-type"},
    usm_user_status{YType::uint32, "usm-user-status"}
{

    yang_name = "user-name"; yang_parent_name = "user-engine-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::~UserName()
{
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::has_data() const
{
    if (is_presence_container) return true;
    return user_name.is_set
	|| usm_user_storage_type.is_set
	|| usm_user_status.is_set;
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(usm_user_storage_type.yfilter)
	|| ydk::is_set(usm_user_status.yfilter);
}

std::string Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";
    ADD_KEY_TOKEN(user_name, "user-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (usm_user_storage_type.is_set || is_set(usm_user_storage_type.yfilter)) leaf_name_data.push_back(usm_user_storage_type.get_name_leafdata());
    if (usm_user_status.is_set || is_set(usm_user_status.yfilter)) leaf_name_data.push_back(usm_user_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usm-user-storage-type")
    {
        usm_user_storage_type = value;
        usm_user_storage_type.value_namespace = name_space;
        usm_user_storage_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usm-user-status")
    {
        usm_user_status = value;
        usm_user_status.value_namespace = name_space;
        usm_user_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "usm-user-storage-type")
    {
        usm_user_storage_type.yfilter = yfilter;
    }
    if(value_path == "usm-user-status")
    {
        usm_user_status.yfilter = yfilter;
    }
}

bool Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name" || name == "usm-user-storage-type" || name == "usm-user-status")
        return true;
    return false;
}

Snmp::Information::SystemOid::SystemOid()
    :
    sys_obj_id{YType::str, "sys-obj-id"}
{

    yang_name = "system-oid"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::SystemOid::~SystemOid()
{
}

bool Snmp::Information::SystemOid::has_data() const
{
    if (is_presence_container) return true;
    return sys_obj_id.is_set;
}

bool Snmp::Information::SystemOid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sys_obj_id.yfilter);
}

std::string Snmp::Information::SystemOid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::SystemOid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-oid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::SystemOid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_obj_id.is_set || is_set(sys_obj_id.yfilter)) leaf_name_data.push_back(sys_obj_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::SystemOid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::SystemOid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::SystemOid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sys-obj-id")
    {
        sys_obj_id = value;
        sys_obj_id.value_namespace = name_space;
        sys_obj_id.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::SystemOid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sys-obj-id")
    {
        sys_obj_id.yfilter = yfilter;
    }
}

bool Snmp::Information::SystemOid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-obj-id")
        return true;
    return false;
}

Snmp::Information::TrapQueue::TrapQueue()
    :
    trap_min{YType::uint32, "trap-min"},
    trap_avg{YType::uint32, "trap-avg"},
    trap_max{YType::uint32, "trap-max"}
        ,
    trap_q(this, {})
{

    yang_name = "trap-queue"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapQueue::~TrapQueue()
{
}

bool Snmp::Information::TrapQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap_q.len(); index++)
    {
        if(trap_q[index]->has_data())
            return true;
    }
    return trap_min.is_set
	|| trap_avg.is_set
	|| trap_max.is_set;
}

bool Snmp::Information::TrapQueue::has_operation() const
{
    for (std::size_t index=0; index<trap_q.len(); index++)
    {
        if(trap_q[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trap_min.yfilter)
	|| ydk::is_set(trap_avg.yfilter)
	|| ydk::is_set(trap_max.yfilter);
}

std::string Snmp::Information::TrapQueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_min.is_set || is_set(trap_min.yfilter)) leaf_name_data.push_back(trap_min.get_name_leafdata());
    if (trap_avg.is_set || is_set(trap_avg.yfilter)) leaf_name_data.push_back(trap_avg.get_name_leafdata());
    if (trap_max.is_set || is_set(trap_max.yfilter)) leaf_name_data.push_back(trap_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-q")
    {
        auto ent_ = std::make_shared<Snmp::Information::TrapQueue::TrapQ>();
        ent_->parent = this;
        trap_q.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap_q.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Information::TrapQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-min")
    {
        trap_min = value;
        trap_min.value_namespace = name_space;
        trap_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-avg")
    {
        trap_avg = value;
        trap_avg.value_namespace = name_space;
        trap_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-max")
    {
        trap_max = value;
        trap_max.value_namespace = name_space;
        trap_max.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::TrapQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-min")
    {
        trap_min.yfilter = yfilter;
    }
    if(value_path == "trap-avg")
    {
        trap_avg.yfilter = yfilter;
    }
    if(value_path == "trap-max")
    {
        trap_max.yfilter = yfilter;
    }
}

bool Snmp::Information::TrapQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-q" || name == "trap-min" || name == "trap-avg" || name == "trap-max")
        return true;
    return false;
}

Snmp::Information::TrapQueue::TrapQ::TrapQ()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"}
{

    yang_name = "trap-q"; yang_parent_name = "trap-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Information::TrapQueue::TrapQ::~TrapQ()
{
}

bool Snmp::Information::TrapQueue::TrapQ::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set;
}

bool Snmp::Information::TrapQueue::TrapQ::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Snmp::Information::TrapQueue::TrapQ::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/information/trap-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Information::TrapQueue::TrapQ::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-q";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Information::TrapQueue::TrapQ::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Information::TrapQueue::TrapQ::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Information::TrapQueue::TrapQ::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Information::TrapQueue::TrapQ::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Information::TrapQueue::TrapQ::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Snmp::Information::TrapQueue::TrapQ::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max")
        return true;
    return false;
}

Snmp::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Interfaces::~Interfaces()
{
}

bool Snmp::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Snmp::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Snmp::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Interfaces::Interface::~Interface()
{
}

bool Snmp::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interface_index.is_set;
}

bool Snmp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Snmp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Snmp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-index")
        return true;
    return false;
}

Snmp::Correlator::Correlator()
    :
    rule_details(std::make_shared<Snmp::Correlator::RuleDetails>())
    , buffer_status(std::make_shared<Snmp::Correlator::BufferStatus>())
    , rule_set_details(std::make_shared<Snmp::Correlator::RuleSetDetails>())
    , traps(std::make_shared<Snmp::Correlator::Traps>())
{
    rule_details->parent = this;
    buffer_status->parent = this;
    rule_set_details->parent = this;
    traps->parent = this;

    yang_name = "correlator"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::~Correlator()
{
}

bool Snmp::Correlator::has_data() const
{
    if (is_presence_container) return true;
    return (rule_details !=  nullptr && rule_details->has_data())
	|| (buffer_status !=  nullptr && buffer_status->has_data())
	|| (rule_set_details !=  nullptr && rule_set_details->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Snmp::Correlator::has_operation() const
{
    return is_set(yfilter)
	|| (rule_details !=  nullptr && rule_details->has_operation())
	|| (buffer_status !=  nullptr && buffer_status->has_operation())
	|| (rule_set_details !=  nullptr && rule_set_details->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Snmp::Correlator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "correlator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-details")
    {
        if(rule_details == nullptr)
        {
            rule_details = std::make_shared<Snmp::Correlator::RuleDetails>();
        }
        return rule_details;
    }

    if(child_yang_name == "buffer-status")
    {
        if(buffer_status == nullptr)
        {
            buffer_status = std::make_shared<Snmp::Correlator::BufferStatus>();
        }
        return buffer_status;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rule_details != nullptr)
    {
        _children["rule-details"] = rule_details;
    }

    if(buffer_status != nullptr)
    {
        _children["buffer-status"] = buffer_status;
    }

    if(rule_set_details != nullptr)
    {
        _children["rule-set-details"] = rule_set_details;
    }

    if(traps != nullptr)
    {
        _children["traps"] = traps;
    }

    return _children;
}

void Snmp::Correlator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-details" || name == "buffer-status" || name == "rule-set-details" || name == "traps")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetails()
    :
    rule_detail(this, {"rule_name"})
{

    yang_name = "rule-details"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleDetails::~RuleDetails()
{
}

bool Snmp::Correlator::RuleDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_detail.len(); index++)
    {
        if(rule_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-detail")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail>();
        ent_->parent = this;
        rule_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-detail")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleDetail()
    :
    rule_name{YType::str, "rule-name"},
    timeout{YType::uint32, "timeout"}
        ,
    rule_summary(std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary>())
    , root_cause(std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause>())
    , non_rootcaus(this, {})
    , apply_host(this, {})
{
    rule_summary->parent = this;
    root_cause->parent = this;

    yang_name = "rule-detail"; yang_parent_name = "rule-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleDetails::RuleDetail::~RuleDetail()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_rootcaus.len(); index++)
    {
        if(non_rootcaus[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<apply_host.len(); index++)
    {
        if(apply_host[index]->has_data())
            return true;
    }
    return rule_name.is_set
	|| timeout.is_set
	|| (rule_summary !=  nullptr && rule_summary->has_data())
	|| (root_cause !=  nullptr && root_cause->has_data());
}

bool Snmp::Correlator::RuleDetails::RuleDetail::has_operation() const
{
    for (std::size_t index=0; index<non_rootcaus.len(); index++)
    {
        if(non_rootcaus[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<apply_host.len(); index++)
    {
        if(apply_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (rule_summary !=  nullptr && rule_summary->has_operation())
	|| (root_cause !=  nullptr && root_cause->has_operation());
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/rule-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-detail";
    ADD_KEY_TOKEN(rule_name, "rule-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-summary")
    {
        if(rule_summary == nullptr)
        {
            rule_summary = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary>();
        }
        return rule_summary;
    }

    if(child_yang_name == "root-cause")
    {
        if(root_cause == nullptr)
        {
            root_cause = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause>();
        }
        return root_cause;
    }

    if(child_yang_name == "non-rootcaus")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus>();
        ent_->parent = this;
        non_rootcaus.append(ent_);
        return ent_;
    }

    if(child_yang_name == "apply-host")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost>();
        ent_->parent = this;
        apply_host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rule_summary != nullptr)
    {
        _children["rule-summary"] = rule_summary;
    }

    if(root_cause != nullptr)
    {
        _children["root-cause"] = root_cause;
    }

    count_ = 0;
    for (auto ent_ : non_rootcaus.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : apply_host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-summary" || name == "root-cause" || name == "non-rootcaus" || name == "apply-host" || name == "rule-name" || name == "timeout")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::RuleSummary()
    :
    rule_name{YType::str, "rule-name"},
    rule_state{YType::enumeration, "rule-state"},
    buffered_traps_count{YType::uint32, "buffered-traps-count"}
{

    yang_name = "rule-summary"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::~RuleSummary()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::has_data() const
{
    if (is_presence_container) return true;
    return rule_name.is_set
	|| rule_state.is_set
	|| buffered_traps_count.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(buffered_traps_count.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (buffered_traps_count.is_set || is_set(buffered_traps_count.yfilter)) leaf_name_data.push_back(buffered_traps_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count = value;
        buffered_traps_count.value_namespace = name_space;
        buffered_traps_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name" || name == "rule-state" || name == "buffered-traps-count")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::RootCause()
    :
    oid{YType::str, "oid"}
        ,
    var_bind(this, {})
{

    yang_name = "root-cause"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::~RootCause()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return oid.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::has_operation() const
{
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind>();
        ent_->parent = this;
        var_bind.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : var_bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::VarBind()
    :
    oid{YType::str, "oid"},
    match_type{YType::enumeration, "match-type"},
    reg_exp{YType::str, "reg-exp"}
{

    yang_name = "var-bind"; yang_parent_name = "root-cause"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::~VarBind()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| match_type.is_set
	|| reg_exp.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(reg_exp.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (reg_exp.is_set || is_set(reg_exp.yfilter)) leaf_name_data.push_back(reg_exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp")
    {
        reg_exp = value;
        reg_exp.value_namespace = name_space;
        reg_exp.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "reg-exp")
    {
        reg_exp.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "match-type" || name == "reg-exp")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::NonRootcaus()
    :
    oid{YType::str, "oid"}
        ,
    var_bind(this, {})
{

    yang_name = "non-rootcaus"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::~NonRootcaus()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return oid.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::has_operation() const
{
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-rootcaus";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind>();
        ent_->parent = this;
        var_bind.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : var_bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::VarBind()
    :
    oid{YType::str, "oid"},
    match_type{YType::enumeration, "match-type"},
    reg_exp{YType::str, "reg-exp"}
{

    yang_name = "var-bind"; yang_parent_name = "non-rootcaus"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::~VarBind()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| match_type.is_set
	|| reg_exp.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(reg_exp.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (reg_exp.is_set || is_set(reg_exp.yfilter)) leaf_name_data.push_back(reg_exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp")
    {
        reg_exp = value;
        reg_exp.value_namespace = name_space;
        reg_exp.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "reg-exp")
    {
        reg_exp.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "match-type" || name == "reg-exp")
        return true;
    return false;
}

Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::ApplyHost()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{

    yang_name = "apply-host"; yang_parent_name = "rule-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::~ApplyHost()
{
}

bool Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-host";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port")
        return true;
    return false;
}

Snmp::Correlator::BufferStatus::BufferStatus()
    :
    current_size{YType::uint32, "current-size"},
    configured_size{YType::uint32, "configured-size"}
{

    yang_name = "buffer-status"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::BufferStatus::~BufferStatus()
{
}

bool Snmp::Correlator::BufferStatus::has_data() const
{
    if (is_presence_container) return true;
    return current_size.is_set
	|| configured_size.is_set;
}

bool Snmp::Correlator::BufferStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_size.yfilter)
	|| ydk::is_set(configured_size.yfilter);
}

std::string Snmp::Correlator::BufferStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::BufferStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::BufferStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_size.is_set || is_set(current_size.yfilter)) leaf_name_data.push_back(current_size.get_name_leafdata());
    if (configured_size.is_set || is_set(configured_size.yfilter)) leaf_name_data.push_back(configured_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::BufferStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::BufferStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::BufferStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-size")
    {
        current_size = value;
        current_size.value_namespace = name_space;
        current_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-size")
    {
        configured_size = value;
        configured_size.value_namespace = name_space;
        configured_size.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::BufferStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-size")
    {
        current_size.yfilter = yfilter;
    }
    if(value_path == "configured-size")
    {
        configured_size.yfilter = yfilter;
    }
}

bool Snmp::Correlator::BufferStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-size" || name == "configured-size")
        return true;
    return false;
}

Snmp::Correlator::RuleSetDetails::RuleSetDetails()
    :
    rule_set_detail(this, {"rule_set_name"})
{

    yang_name = "rule-set-details"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleSetDetails::~RuleSetDetails()
{
}

bool Snmp::Correlator::RuleSetDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_set_detail.len(); index++)
    {
        if(rule_set_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSetDetails::has_operation() const
{
    for (std::size_t index=0; index<rule_set_detail.len(); index++)
    {
        if(rule_set_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSetDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSetDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSetDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set-detail")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleSetDetails::RuleSetDetail>();
        ent_->parent = this;
        rule_set_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSetDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_set_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleSetDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSetDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSetDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set-detail")
        return true;
    return false;
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::RuleSetDetail()
    :
    rule_set_name{YType::str, "rule-set-name"},
    rule_set_name_xr{YType::str, "rule-set-name-xr"}
        ,
    rules(this, {})
{

    yang_name = "rule-set-detail"; yang_parent_name = "rule-set-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::~RuleSetDetail()
{
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_data())
            return true;
    }
    return rule_set_name.is_set
	|| rule_set_name_xr.is_set;
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::has_operation() const
{
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule_set_name.yfilter)
	|| ydk::is_set(rule_set_name_xr.yfilter);
}

std::string Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/rule-set-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set-detail";
    ADD_KEY_TOKEN(rule_set_name, "rule-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_set_name.is_set || is_set(rule_set_name.yfilter)) leaf_name_data.push_back(rule_set_name.get_name_leafdata());
    if (rule_set_name_xr.is_set || is_set(rule_set_name_xr.yfilter)) leaf_name_data.push_back(rule_set_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules>();
        ent_->parent = this;
        rules.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSetDetails::RuleSetDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rules.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name = value;
        rule_set_name.value_namespace = name_space;
        rule_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr = value;
        rule_set_name_xr.value_namespace = name_space;
        rule_set_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-set-name")
    {
        rule_set_name.yfilter = yfilter;
    }
    if(value_path == "rule-set-name-xr")
    {
        rule_set_name_xr.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "rule-set-name" || name == "rule-set-name-xr")
        return true;
    return false;
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::Rules()
    :
    rule_name{YType::str, "rule-name"},
    rule_state{YType::enumeration, "rule-state"},
    buffered_traps_count{YType::uint32, "buffered-traps-count"}
{

    yang_name = "rules"; yang_parent_name = "rule-set-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::~Rules()
{
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::has_data() const
{
    if (is_presence_container) return true;
    return rule_name.is_set
	|| rule_state.is_set
	|| buffered_traps_count.is_set;
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| ydk::is_set(rule_state.yfilter)
	|| ydk::is_set(buffered_traps_count.yfilter);
}

std::string Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());
    if (rule_state.is_set || is_set(rule_state.yfilter)) leaf_name_data.push_back(rule_state.get_name_leafdata());
    if (buffered_traps_count.is_set || is_set(buffered_traps_count.yfilter)) leaf_name_data.push_back(buffered_traps_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-state")
    {
        rule_state = value;
        rule_state.value_namespace = name_space;
        rule_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count = value;
        buffered_traps_count.value_namespace = name_space;
        buffered_traps_count.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
    if(value_path == "rule-state")
    {
        rule_state.yfilter = yfilter;
    }
    if(value_path == "buffered-traps-count")
    {
        buffered_traps_count.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-name" || name == "rule-state" || name == "buffered-traps-count")
        return true;
    return false;
}

Snmp::Correlator::Traps::Traps()
    :
    trap(this, {"entry_id"})
{

    yang_name = "traps"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::Traps::~Traps()
{
}

bool Snmp::Correlator::Traps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trap.len(); index++)
    {
        if(trap[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Traps::has_operation() const
{
    for (std::size_t index=0; index<trap.len(); index++)
    {
        if(trap[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Traps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Traps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Traps::Trap>();
        ent_->parent = this;
        trap.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trap.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Traps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap")
        return true;
    return false;
}

Snmp::Correlator::Traps::Trap::Trap()
    :
    entry_id{YType::uint32, "entry-id"},
    correlation_id{YType::uint32, "correlation-id"},
    is_root_cause{YType::boolean, "is-root-cause"},
    rule_name{YType::str, "rule-name"}
        ,
    trap_info(std::make_shared<Snmp::Correlator::Traps::Trap::TrapInfo>())
{
    trap_info->parent = this;

    yang_name = "trap"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::Correlator::Traps::Trap::~Trap()
{
}

bool Snmp::Correlator::Traps::Trap::has_data() const
{
    if (is_presence_container) return true;
    return entry_id.is_set
	|| correlation_id.is_set
	|| is_root_cause.is_set
	|| rule_name.is_set
	|| (trap_info !=  nullptr && trap_info->has_data());
}

bool Snmp::Correlator::Traps::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| ydk::is_set(correlation_id.yfilter)
	|| ydk::is_set(is_root_cause.yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| (trap_info !=  nullptr && trap_info->has_operation());
}

std::string Snmp::Correlator::Traps::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/correlator/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Traps::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    ADD_KEY_TOKEN(entry_id, "entry-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Traps::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());
    if (correlation_id.is_set || is_set(correlation_id.yfilter)) leaf_name_data.push_back(correlation_id.get_name_leafdata());
    if (is_root_cause.is_set || is_set(is_root_cause.yfilter)) leaf_name_data.push_back(is_root_cause.get_name_leafdata());
    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Traps::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Traps::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap_info != nullptr)
    {
        _children["trap-info"] = trap_info;
    }

    return _children;
}

void Snmp::Correlator::Traps::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correlation-id")
    {
        correlation_id = value;
        correlation_id.value_namespace = name_space;
        correlation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-root-cause")
    {
        is_root_cause = value;
        is_root_cause.value_namespace = name_space;
        is_root_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Traps::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
    if(value_path == "correlation-id")
    {
        correlation_id.yfilter = yfilter;
    }
    if(value_path == "is-root-cause")
    {
        is_root_cause.yfilter = yfilter;
    }
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Traps::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-info" || name == "entry-id" || name == "correlation-id" || name == "is-root-cause" || name == "rule-name")
        return true;
    return false;
}

Snmp::Correlator::Traps::Trap::TrapInfo::TrapInfo()
    :
    oid{YType::str, "oid"},
    relative_timestamp{YType::uint32, "relative-timestamp"},
    timestamp{YType::uint64, "timestamp"}
        ,
    var_bind(this, {})
{

    yang_name = "trap-info"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Traps::Trap::TrapInfo::~TrapInfo()
{
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<var_bind.len(); index++)
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
    for (std::size_t index=0; index<var_bind.len(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(relative_timestamp.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Snmp::Correlator::Traps::Trap::TrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Traps::Trap::TrapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (relative_timestamp.is_set || is_set(relative_timestamp.yfilter)) leaf_name_data.push_back(relative_timestamp.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Traps::Trap::TrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        auto ent_ = std::make_shared<Snmp::Correlator::Traps::Trap::TrapInfo::VarBind>();
        ent_->parent = this;
        var_bind.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Traps::Trap::TrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : var_bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::Correlator::Traps::Trap::TrapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-timestamp")
    {
        relative_timestamp = value;
        relative_timestamp.value_namespace = name_space;
        relative_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Traps::Trap::TrapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "relative-timestamp")
    {
        relative_timestamp.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind" || name == "oid" || name == "relative-timestamp" || name == "timestamp")
        return true;
    return false;
}

Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::VarBind()
    :
    oid{YType::str, "oid"},
    value_{YType::str, "value"}
{

    yang_name = "var-bind"; yang_parent_name = "trap-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::has_data() const
{
    if (is_presence_container) return true;
    return oid.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Traps::Trap::TrapInfo::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "value")
        return true;
    return false;
}

Snmp::InterfaceIndexes::InterfaceIndexes()
    :
    interface_index(this, {"interface_index"})
{

    yang_name = "interface-indexes"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceIndexes::~InterfaceIndexes()
{
}

bool Snmp::InterfaceIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_index.len(); index++)
    {
        if(interface_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceIndexes::has_operation() const
{
    for (std::size_t index=0; index<interface_index.len(); index++)
    {
        if(interface_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceIndexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-index")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceIndexes::InterfaceIndex>();
        ent_->parent = this;
        interface_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index")
        return true;
    return false;
}

Snmp::InterfaceIndexes::InterfaceIndex::InterfaceIndex()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-index"; yang_parent_name = "interface-indexes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceIndexes::InterfaceIndex::~InterfaceIndex()
{
}

bool Snmp::InterfaceIndexes::InterfaceIndex::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Snmp::InterfaceIndexes::InterfaceIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Snmp::InterfaceIndexes::InterfaceIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/interface-indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceIndexes::InterfaceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-index";
    ADD_KEY_TOKEN(interface_index, "interface-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceIndexes::InterfaceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceIndexes::InterfaceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceIndexes::InterfaceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceIndexes::InterfaceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceIndexes::InterfaceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Snmp::InterfaceIndexes::InterfaceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Snmp::IfIndexes::IfIndexes()
    :
    if_index(this, {"interface_index"})
{

    yang_name = "if-indexes"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::IfIndexes::~IfIndexes()
{
}

bool Snmp::IfIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_index.len(); index++)
    {
        if(if_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::IfIndexes::has_operation() const
{
    for (std::size_t index=0; index<if_index.len(); index++)
    {
        if(if_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::IfIndexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::IfIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::IfIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::IfIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-index")
    {
        auto ent_ = std::make_shared<Snmp::IfIndexes::IfIndex>();
        ent_->parent = this;
        if_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::IfIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::IfIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::IfIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::IfIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-index")
        return true;
    return false;
}

Snmp::IfIndexes::IfIndex::IfIndex()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "if-index"; yang_parent_name = "if-indexes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::IfIndexes::IfIndex::~IfIndex()
{
}

bool Snmp::IfIndexes::IfIndex::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Snmp::IfIndexes::IfIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Snmp::IfIndexes::IfIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/if-indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::IfIndexes::IfIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-index";
    ADD_KEY_TOKEN(interface_index, "interface-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::IfIndexes::IfIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::IfIndexes::IfIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::IfIndexes::IfIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::IfIndexes::IfIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::IfIndexes::IfIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Snmp::IfIndexes::IfIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Snmp::EntityMib::EntityMib()
    :
    entity_physical_indexes(std::make_shared<Snmp::EntityMib::EntityPhysicalIndexes>())
{
    entity_physical_indexes->parent = this;

    yang_name = "entity-mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::EntityMib::~EntityMib()
{
}

bool Snmp::EntityMib::has_data() const
{
    if (is_presence_container) return true;
    return (entity_physical_indexes !=  nullptr && entity_physical_indexes->has_data());
}

bool Snmp::EntityMib::has_operation() const
{
    return is_set(yfilter)
	|| (entity_physical_indexes !=  nullptr && entity_physical_indexes->has_operation());
}

std::string Snmp::EntityMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-oper:entity-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EntityMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::EntityMib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entity_physical_indexes != nullptr)
    {
        _children["entity-physical-indexes"] = entity_physical_indexes;
    }

    return _children;
}

void Snmp::EntityMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::EntityMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::EntityMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-physical-indexes")
        return true;
    return false;
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndexes()
    :
    entity_physical_index(this, {"entity_phynum"})
{

    yang_name = "entity-physical-indexes"; yang_parent_name = "entity-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::EntityMib::EntityPhysicalIndexes::~EntityPhysicalIndexes()
{
}

bool Snmp::EntityMib::EntityPhysicalIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entity_physical_index.len(); index++)
    {
        if(entity_physical_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::EntityMib::EntityPhysicalIndexes::has_operation() const
{
    for (std::size_t index=0; index<entity_physical_index.len(); index++)
    {
        if(entity_physical_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-entitymib-oper:entity-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-physical-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EntityMib::EntityPhysicalIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::EntityMib::EntityPhysicalIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entity-physical-index")
    {
        auto ent_ = std::make_shared<Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex>();
        ent_->parent = this;
        entity_physical_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::EntityMib::EntityPhysicalIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entity_physical_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::EntityMib::EntityPhysicalIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::EntityMib::EntityPhysicalIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::EntityMib::EntityPhysicalIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-physical-index")
        return true;
    return false;
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::EntityPhysicalIndex()
    :
    entity_phynum{YType::str, "entity-phynum"},
    physical_index{YType::uint32, "physical-index"},
    ent_physical_name{YType::str, "ent-physical-name"},
    location{YType::str, "location"},
    ent_physical_descr{YType::str, "ent-physical-descr"},
    ent_physical_firmware_rev{YType::str, "ent-physical-firmware-rev"},
    ent_physical_hardware_rev{YType::str, "ent-physical-hardware-rev"},
    ent_physical_modelname{YType::str, "ent-physical-modelname"},
    ent_physical_serial_num{YType::str, "ent-physical-serial-num"},
    ent_physical_software_rev{YType::str, "ent-physical-software-rev"},
    ent_physical_mfg_name{YType::str, "ent-physical-mfg-name"}
{

    yang_name = "entity-physical-index"; yang_parent_name = "entity-physical-indexes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::~EntityPhysicalIndex()
{
}

bool Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::has_data() const
{
    if (is_presence_container) return true;
    return entity_phynum.is_set
	|| physical_index.is_set
	|| ent_physical_name.is_set
	|| location.is_set
	|| ent_physical_descr.is_set
	|| ent_physical_firmware_rev.is_set
	|| ent_physical_hardware_rev.is_set
	|| ent_physical_modelname.is_set
	|| ent_physical_serial_num.is_set
	|| ent_physical_software_rev.is_set
	|| ent_physical_mfg_name.is_set;
}

bool Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entity_phynum.yfilter)
	|| ydk::is_set(physical_index.yfilter)
	|| ydk::is_set(ent_physical_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ent_physical_descr.yfilter)
	|| ydk::is_set(ent_physical_firmware_rev.yfilter)
	|| ydk::is_set(ent_physical_hardware_rev.yfilter)
	|| ydk::is_set(ent_physical_modelname.yfilter)
	|| ydk::is_set(ent_physical_serial_num.yfilter)
	|| ydk::is_set(ent_physical_software_rev.yfilter)
	|| ydk::is_set(ent_physical_mfg_name.yfilter);
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-entitymib-oper:entity-mib/entity-physical-indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-physical-index";
    ADD_KEY_TOKEN(entity_phynum, "entity-phynum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_phynum.is_set || is_set(entity_phynum.yfilter)) leaf_name_data.push_back(entity_phynum.get_name_leafdata());
    if (physical_index.is_set || is_set(physical_index.yfilter)) leaf_name_data.push_back(physical_index.get_name_leafdata());
    if (ent_physical_name.is_set || is_set(ent_physical_name.yfilter)) leaf_name_data.push_back(ent_physical_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ent_physical_descr.is_set || is_set(ent_physical_descr.yfilter)) leaf_name_data.push_back(ent_physical_descr.get_name_leafdata());
    if (ent_physical_firmware_rev.is_set || is_set(ent_physical_firmware_rev.yfilter)) leaf_name_data.push_back(ent_physical_firmware_rev.get_name_leafdata());
    if (ent_physical_hardware_rev.is_set || is_set(ent_physical_hardware_rev.yfilter)) leaf_name_data.push_back(ent_physical_hardware_rev.get_name_leafdata());
    if (ent_physical_modelname.is_set || is_set(ent_physical_modelname.yfilter)) leaf_name_data.push_back(ent_physical_modelname.get_name_leafdata());
    if (ent_physical_serial_num.is_set || is_set(ent_physical_serial_num.yfilter)) leaf_name_data.push_back(ent_physical_serial_num.get_name_leafdata());
    if (ent_physical_software_rev.is_set || is_set(ent_physical_software_rev.yfilter)) leaf_name_data.push_back(ent_physical_software_rev.get_name_leafdata());
    if (ent_physical_mfg_name.is_set || is_set(ent_physical_mfg_name.yfilter)) leaf_name_data.push_back(ent_physical_mfg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-phynum")
    {
        entity_phynum = value;
        entity_phynum.value_namespace = name_space;
        entity_phynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-index")
    {
        physical_index = value;
        physical_index.value_namespace = name_space;
        physical_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-name")
    {
        ent_physical_name = value;
        ent_physical_name.value_namespace = name_space;
        ent_physical_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-descr")
    {
        ent_physical_descr = value;
        ent_physical_descr.value_namespace = name_space;
        ent_physical_descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-firmware-rev")
    {
        ent_physical_firmware_rev = value;
        ent_physical_firmware_rev.value_namespace = name_space;
        ent_physical_firmware_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-hardware-rev")
    {
        ent_physical_hardware_rev = value;
        ent_physical_hardware_rev.value_namespace = name_space;
        ent_physical_hardware_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-modelname")
    {
        ent_physical_modelname = value;
        ent_physical_modelname.value_namespace = name_space;
        ent_physical_modelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-serial-num")
    {
        ent_physical_serial_num = value;
        ent_physical_serial_num.value_namespace = name_space;
        ent_physical_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-software-rev")
    {
        ent_physical_software_rev = value;
        ent_physical_software_rev.value_namespace = name_space;
        ent_physical_software_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ent-physical-mfg-name")
    {
        ent_physical_mfg_name = value;
        ent_physical_mfg_name.value_namespace = name_space;
        ent_physical_mfg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-phynum")
    {
        entity_phynum.yfilter = yfilter;
    }
    if(value_path == "physical-index")
    {
        physical_index.yfilter = yfilter;
    }
    if(value_path == "ent-physical-name")
    {
        ent_physical_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ent-physical-descr")
    {
        ent_physical_descr.yfilter = yfilter;
    }
    if(value_path == "ent-physical-firmware-rev")
    {
        ent_physical_firmware_rev.yfilter = yfilter;
    }
    if(value_path == "ent-physical-hardware-rev")
    {
        ent_physical_hardware_rev.yfilter = yfilter;
    }
    if(value_path == "ent-physical-modelname")
    {
        ent_physical_modelname.yfilter = yfilter;
    }
    if(value_path == "ent-physical-serial-num")
    {
        ent_physical_serial_num.yfilter = yfilter;
    }
    if(value_path == "ent-physical-software-rev")
    {
        ent_physical_software_rev.yfilter = yfilter;
    }
    if(value_path == "ent-physical-mfg-name")
    {
        ent_physical_mfg_name.yfilter = yfilter;
    }
}

bool Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-phynum" || name == "physical-index" || name == "ent-physical-name" || name == "location" || name == "ent-physical-descr" || name == "ent-physical-firmware-rev" || name == "ent-physical-hardware-rev" || name == "ent-physical-modelname" || name == "ent-physical-serial-num" || name == "ent-physical-software-rev" || name == "ent-physical-mfg-name")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceMib()
    :
    interfaces(std::make_shared<Snmp::InterfaceMib::Interfaces>())
    , interface_connectors(std::make_shared<Snmp::InterfaceMib::InterfaceConnectors>())
    , interface_aliases(std::make_shared<Snmp::InterfaceMib::InterfaceAliases>())
    , notification_interfaces(std::make_shared<Snmp::InterfaceMib::NotificationInterfaces>())
    , interface_stack_statuses(std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses>())
{
    interfaces->parent = this;
    interface_connectors->parent = this;
    interface_aliases->parent = this;
    notification_interfaces->parent = this;
    interface_stack_statuses->parent = this;

    yang_name = "interface-mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::~InterfaceMib()
{
}

bool Snmp::InterfaceMib::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (interface_connectors !=  nullptr && interface_connectors->has_data())
	|| (interface_aliases !=  nullptr && interface_aliases->has_data())
	|| (notification_interfaces !=  nullptr && notification_interfaces->has_data())
	|| (interface_stack_statuses !=  nullptr && interface_stack_statuses->has_data());
}

bool Snmp::InterfaceMib::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (interface_connectors !=  nullptr && interface_connectors->has_operation())
	|| (interface_aliases !=  nullptr && interface_aliases->has_operation())
	|| (notification_interfaces !=  nullptr && notification_interfaces->has_operation())
	|| (interface_stack_statuses !=  nullptr && interface_stack_statuses->has_operation());
}

std::string Snmp::InterfaceMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ifmib-oper:interface-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Snmp::InterfaceMib::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "interface-connectors")
    {
        if(interface_connectors == nullptr)
        {
            interface_connectors = std::make_shared<Snmp::InterfaceMib::InterfaceConnectors>();
        }
        return interface_connectors;
    }

    if(child_yang_name == "interface-aliases")
    {
        if(interface_aliases == nullptr)
        {
            interface_aliases = std::make_shared<Snmp::InterfaceMib::InterfaceAliases>();
        }
        return interface_aliases;
    }

    if(child_yang_name == "notification-interfaces")
    {
        if(notification_interfaces == nullptr)
        {
            notification_interfaces = std::make_shared<Snmp::InterfaceMib::NotificationInterfaces>();
        }
        return notification_interfaces;
    }

    if(child_yang_name == "interface-stack-statuses")
    {
        if(interface_stack_statuses == nullptr)
        {
            interface_stack_statuses = std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses>();
        }
        return interface_stack_statuses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(interface_connectors != nullptr)
    {
        _children["interface-connectors"] = interface_connectors;
    }

    if(interface_aliases != nullptr)
    {
        _children["interface-aliases"] = interface_aliases;
    }

    if(notification_interfaces != nullptr)
    {
        _children["notification-interfaces"] = notification_interfaces;
    }

    if(interface_stack_statuses != nullptr)
    {
        _children["interface-stack-statuses"] = interface_stack_statuses;
    }

    return _children;
}

void Snmp::InterfaceMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "interface-connectors" || name == "interface-aliases" || name == "notification-interfaces" || name == "interface-stack-statuses")
        return true;
    return false;
}

Snmp::InterfaceMib::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::Interfaces::~Interfaces()
{
}

bool Snmp::InterfaceMib::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceMib::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceMib::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceMib::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Snmp::InterfaceMib::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::Interfaces::Interface::~Interface()
{
}

bool Snmp::InterfaceMib::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| if_index.is_set;
}

bool Snmp::InterfaceMib::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string Snmp::InterfaceMib::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceMib::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceMib::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
}

bool Snmp::InterfaceMib::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "if-index")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnectors()
    :
    interface_connector(this, {"interface_name"})
{

    yang_name = "interface-connectors"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceConnectors::~InterfaceConnectors()
{
}

bool Snmp::InterfaceMib::InterfaceConnectors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_connector.len(); index++)
    {
        if(interface_connector[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceConnectors::has_operation() const
{
    for (std::size_t index=0; index<interface_connector.len(); index++)
    {
        if(interface_connector[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceMib::InterfaceConnectors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceConnectors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-connectors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceConnectors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceConnectors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-connector")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector>();
        ent_->parent = this;
        interface_connector.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceConnectors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_connector.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceMib::InterfaceConnectors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::InterfaceConnectors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::InterfaceConnectors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-connector")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::InterfaceConnector()
    :
    interface_name{YType::str, "interface-name"},
    if_connector_present{YType::str, "if-connector-present"}
{

    yang_name = "interface-connector"; yang_parent_name = "interface-connectors"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::~InterfaceConnector()
{
}

bool Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| if_connector_present.is_set;
}

bool Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(if_connector_present.yfilter);
}

std::string Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-connectors/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-connector";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_connector_present.is_set || is_set(if_connector_present.yfilter)) leaf_name_data.push_back(if_connector_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-connector-present")
    {
        if_connector_present = value;
        if_connector_present.value_namespace = name_space;
        if_connector_present.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "if-connector-present")
    {
        if_connector_present.yfilter = yfilter;
    }
}

bool Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "if-connector-present")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAliases()
    :
    interface_alias(this, {"interface_name"})
{

    yang_name = "interface-aliases"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceAliases::~InterfaceAliases()
{
}

bool Snmp::InterfaceMib::InterfaceAliases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_alias.len(); index++)
    {
        if(interface_alias[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceAliases::has_operation() const
{
    for (std::size_t index=0; index<interface_alias.len(); index++)
    {
        if(interface_alias[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceMib::InterfaceAliases::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceAliases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-aliases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceAliases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceAliases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-alias")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias>();
        ent_->parent = this;
        interface_alias.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceAliases::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_alias.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceMib::InterfaceAliases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::InterfaceAliases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::InterfaceAliases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-alias")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::InterfaceAlias()
    :
    interface_name{YType::str, "interface-name"},
    if_alias{YType::str, "if-alias"}
{

    yang_name = "interface-alias"; yang_parent_name = "interface-aliases"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::~InterfaceAlias()
{
}

bool Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| if_alias.is_set;
}

bool Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(if_alias.yfilter);
}

std::string Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-aliases/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-alias";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (if_alias.is_set || is_set(if_alias.yfilter)) leaf_name_data.push_back(if_alias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-alias")
    {
        if_alias = value;
        if_alias.value_namespace = name_space;
        if_alias.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "if-alias")
    {
        if_alias.yfilter = yfilter;
    }
}

bool Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "if-alias")
        return true;
    return false;
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterfaces()
    :
    notification_interface(this, {"interface_name"})
{

    yang_name = "notification-interfaces"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::NotificationInterfaces::~NotificationInterfaces()
{
}

bool Snmp::InterfaceMib::NotificationInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notification_interface.len(); index++)
    {
        if(notification_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::NotificationInterfaces::has_operation() const
{
    for (std::size_t index=0; index<notification_interface.len(); index++)
    {
        if(notification_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceMib::NotificationInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::NotificationInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::NotificationInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::NotificationInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification-interface")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface>();
        ent_->parent = this;
        notification_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::NotificationInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notification_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceMib::NotificationInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::NotificationInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::NotificationInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-interface")
        return true;
    return false;
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::NotificationInterface()
    :
    interface_name{YType::str, "interface-name"},
    link_up_down_notif_status{YType::enumeration, "link-up-down-notif-status"}
{

    yang_name = "notification-interface"; yang_parent_name = "notification-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::~NotificationInterface()
{
}

bool Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| link_up_down_notif_status.is_set;
}

bool Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_up_down_notif_status.yfilter);
}

std::string Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/notification-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_up_down_notif_status.is_set || is_set(link_up_down_notif_status.yfilter)) leaf_name_data.push_back(link_up_down_notif_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up-down-notif-status")
    {
        link_up_down_notif_status = value;
        link_up_down_notif_status.value_namespace = name_space;
        link_up_down_notif_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-up-down-notif-status")
    {
        link_up_down_notif_status.yfilter = yfilter;
    }
}

bool Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "link-up-down-notif-status")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatuses()
    :
    interface_stack_status(this, {"interface_stack_status"})
{

    yang_name = "interface-stack-statuses"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceStackStatuses::~InterfaceStackStatuses()
{
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_stack_status.len(); index++)
    {
        if(interface_stack_status[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::has_operation() const
{
    for (std::size_t index=0; index<interface_stack_status.len(); index++)
    {
        if(interface_stack_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stack-statuses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceStackStatuses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceStackStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stack-status")
    {
        auto ent_ = std::make_shared<Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus>();
        ent_->parent = this;
        interface_stack_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceStackStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_stack_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::InterfaceMib::InterfaceStackStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::InterfaceMib::InterfaceStackStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stack-status")
        return true;
    return false;
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::InterfaceStackStatus()
    :
    interface_stack_status{YType::str, "interface-stack-status"},
    if_stack_higher_layer{YType::str, "if-stack-higher-layer"},
    if_stack_lower_layer{YType::str, "if-stack-lower-layer"},
    if_stack_status{YType::str, "if-stack-status"}
{

    yang_name = "interface-stack-status"; yang_parent_name = "interface-stack-statuses"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::~InterfaceStackStatus()
{
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::has_data() const
{
    if (is_presence_container) return true;
    return interface_stack_status.is_set
	|| if_stack_higher_layer.is_set
	|| if_stack_lower_layer.is_set
	|| if_stack_status.is_set;
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_stack_status.yfilter)
	|| ydk::is_set(if_stack_higher_layer.yfilter)
	|| ydk::is_set(if_stack_lower_layer.yfilter)
	|| ydk::is_set(if_stack_status.yfilter);
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-ifmib-oper:interface-mib/interface-stack-statuses/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stack-status";
    ADD_KEY_TOKEN(interface_stack_status, "interface-stack-status");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_stack_status.is_set || is_set(interface_stack_status.yfilter)) leaf_name_data.push_back(interface_stack_status.get_name_leafdata());
    if (if_stack_higher_layer.is_set || is_set(if_stack_higher_layer.yfilter)) leaf_name_data.push_back(if_stack_higher_layer.get_name_leafdata());
    if (if_stack_lower_layer.is_set || is_set(if_stack_lower_layer.yfilter)) leaf_name_data.push_back(if_stack_lower_layer.get_name_leafdata());
    if (if_stack_status.is_set || is_set(if_stack_status.yfilter)) leaf_name_data.push_back(if_stack_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-stack-status")
    {
        interface_stack_status = value;
        interface_stack_status.value_namespace = name_space;
        interface_stack_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-stack-higher-layer")
    {
        if_stack_higher_layer = value;
        if_stack_higher_layer.value_namespace = name_space;
        if_stack_higher_layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-stack-lower-layer")
    {
        if_stack_lower_layer = value;
        if_stack_lower_layer.value_namespace = name_space;
        if_stack_lower_layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-stack-status")
    {
        if_stack_status = value;
        if_stack_status.value_namespace = name_space;
        if_stack_status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-stack-status")
    {
        interface_stack_status.yfilter = yfilter;
    }
    if(value_path == "if-stack-higher-layer")
    {
        if_stack_higher_layer.yfilter = yfilter;
    }
    if(value_path == "if-stack-lower-layer")
    {
        if_stack_lower_layer.yfilter = yfilter;
    }
    if(value_path == "if-stack-status")
    {
        if_stack_status.yfilter = yfilter;
    }
}

bool Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stack-status" || name == "if-stack-higher-layer" || name == "if-stack-lower-layer" || name == "if-stack-status")
        return true;
    return false;
}

Snmp::SensorMib::SensorMib()
    :
    physical_indexes(std::make_shared<Snmp::SensorMib::PhysicalIndexes>())
    , ent_phy_indexes(std::make_shared<Snmp::SensorMib::EntPhyIndexes>())
{
    physical_indexes->parent = this;
    ent_phy_indexes->parent = this;

    yang_name = "sensor-mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::SensorMib::~SensorMib()
{
}

bool Snmp::SensorMib::has_data() const
{
    if (is_presence_container) return true;
    return (physical_indexes !=  nullptr && physical_indexes->has_data())
	|| (ent_phy_indexes !=  nullptr && ent_phy_indexes->has_data());
}

bool Snmp::SensorMib::has_operation() const
{
    return is_set(yfilter)
	|| (physical_indexes !=  nullptr && physical_indexes->has_operation())
	|| (ent_phy_indexes !=  nullptr && ent_phy_indexes->has_operation());
}

std::string Snmp::SensorMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::SensorMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physical-indexes")
    {
        if(physical_indexes == nullptr)
        {
            physical_indexes = std::make_shared<Snmp::SensorMib::PhysicalIndexes>();
        }
        return physical_indexes;
    }

    if(child_yang_name == "ent-phy-indexes")
    {
        if(ent_phy_indexes == nullptr)
        {
            ent_phy_indexes = std::make_shared<Snmp::SensorMib::EntPhyIndexes>();
        }
        return ent_phy_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(physical_indexes != nullptr)
    {
        _children["physical-indexes"] = physical_indexes;
    }

    if(ent_phy_indexes != nullptr)
    {
        _children["ent-phy-indexes"] = ent_phy_indexes;
    }

    return _children;
}

void Snmp::SensorMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::SensorMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::SensorMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "physical-indexes" || name == "ent-phy-indexes")
        return true;
    return false;
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndexes()
    :
    physical_index(this, {"index_"})
{

    yang_name = "physical-indexes"; yang_parent_name = "sensor-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::SensorMib::PhysicalIndexes::~PhysicalIndexes()
{
}

bool Snmp::SensorMib::PhysicalIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physical_index.len(); index++)
    {
        if(physical_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::PhysicalIndexes::has_operation() const
{
    for (std::size_t index=0; index<physical_index.len(); index++)
    {
        if(physical_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::SensorMib::PhysicalIndexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::SensorMib::PhysicalIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physical-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::PhysicalIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::PhysicalIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physical-index")
    {
        auto ent_ = std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex>();
        ent_->parent = this;
        physical_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::PhysicalIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : physical_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::SensorMib::PhysicalIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::SensorMib::PhysicalIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::SensorMib::PhysicalIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "physical-index")
        return true;
    return false;
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::PhysicalIndex()
    :
    index_{YType::str, "index"}
        ,
    threshold_indexes(std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes>())
{
    threshold_indexes->parent = this;

    yang_name = "physical-index"; yang_parent_name = "physical-indexes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::~PhysicalIndex()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (threshold_indexes !=  nullptr && threshold_indexes->has_data());
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (threshold_indexes !=  nullptr && threshold_indexes->has_operation());
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/physical-indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physical-index";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_indexes != nullptr)
    {
        _children["threshold-indexes"] = threshold_indexes;
    }

    return _children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-indexes" || name == "index")
        return true;
    return false;
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndexes()
    :
    threshold_index(this, {})
{

    yang_name = "threshold-indexes"; yang_parent_name = "physical-index"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::~ThresholdIndexes()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_index.len(); index++)
    {
        if(threshold_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::has_operation() const
{
    for (std::size_t index=0; index<threshold_index.len(); index++)
    {
        if(threshold_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-index")
    {
        auto ent_ = std::make_shared<Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex>();
        ent_->parent = this;
        threshold_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : threshold_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-index")
        return true;
    return false;
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::ThresholdIndex()
    :
    phy_index{YType::str, "phy-index"},
    thre_index{YType::str, "thre-index"},
    threshold_severity{YType::uint32, "threshold-severity"},
    threshold_relation{YType::uint32, "threshold-relation"},
    threshold_value{YType::uint32, "threshold-value"},
    threshold_evaluation{YType::boolean, "threshold-evaluation"},
    threshold_notification_enabled{YType::boolean, "threshold-notification-enabled"}
{

    yang_name = "threshold-index"; yang_parent_name = "threshold-indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::~ThresholdIndex()
{
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::has_data() const
{
    if (is_presence_container) return true;
    return phy_index.is_set
	|| thre_index.is_set
	|| threshold_severity.is_set
	|| threshold_relation.is_set
	|| threshold_value.is_set
	|| threshold_evaluation.is_set
	|| threshold_notification_enabled.is_set;
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(phy_index.yfilter)
	|| ydk::is_set(thre_index.yfilter)
	|| ydk::is_set(threshold_severity.yfilter)
	|| ydk::is_set(threshold_relation.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(threshold_evaluation.yfilter)
	|| ydk::is_set(threshold_notification_enabled.yfilter);
}

std::string Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-index";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phy_index.is_set || is_set(phy_index.yfilter)) leaf_name_data.push_back(phy_index.get_name_leafdata());
    if (thre_index.is_set || is_set(thre_index.yfilter)) leaf_name_data.push_back(thre_index.get_name_leafdata());
    if (threshold_severity.is_set || is_set(threshold_severity.yfilter)) leaf_name_data.push_back(threshold_severity.get_name_leafdata());
    if (threshold_relation.is_set || is_set(threshold_relation.yfilter)) leaf_name_data.push_back(threshold_relation.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (threshold_evaluation.is_set || is_set(threshold_evaluation.yfilter)) leaf_name_data.push_back(threshold_evaluation.get_name_leafdata());
    if (threshold_notification_enabled.is_set || is_set(threshold_notification_enabled.yfilter)) leaf_name_data.push_back(threshold_notification_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phy-index")
    {
        phy_index = value;
        phy_index.value_namespace = name_space;
        phy_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thre-index")
    {
        thre_index = value;
        thre_index.value_namespace = name_space;
        thre_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity = value;
        threshold_severity.value_namespace = name_space;
        threshold_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation = value;
        threshold_relation.value_namespace = name_space;
        threshold_relation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation = value;
        threshold_evaluation.value_namespace = name_space;
        threshold_evaluation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled = value;
        threshold_notification_enabled.value_namespace = name_space;
        threshold_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phy-index")
    {
        phy_index.yfilter = yfilter;
    }
    if(value_path == "thre-index")
    {
        thre_index.yfilter = yfilter;
    }
    if(value_path == "threshold-severity")
    {
        threshold_severity.yfilter = yfilter;
    }
    if(value_path == "threshold-relation")
    {
        threshold_relation.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "threshold-evaluation")
    {
        threshold_evaluation.yfilter = yfilter;
    }
    if(value_path == "threshold-notification-enabled")
    {
        threshold_notification_enabled.yfilter = yfilter;
    }
}

bool Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phy-index" || name == "thre-index" || name == "threshold-severity" || name == "threshold-relation" || name == "threshold-value" || name == "threshold-evaluation" || name == "threshold-notification-enabled")
        return true;
    return false;
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndexes()
    :
    ent_phy_index(this, {"index_"})
{

    yang_name = "ent-phy-indexes"; yang_parent_name = "sensor-mib"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::SensorMib::EntPhyIndexes::~EntPhyIndexes()
{
}

bool Snmp::SensorMib::EntPhyIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ent_phy_index.len(); index++)
    {
        if(ent_phy_index[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::SensorMib::EntPhyIndexes::has_operation() const
{
    for (std::size_t index=0; index<ent_phy_index.len(); index++)
    {
        if(ent_phy_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::SensorMib::EntPhyIndexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::SensorMib::EntPhyIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-phy-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::EntPhyIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::EntPhyIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-phy-index")
    {
        auto ent_ = std::make_shared<Snmp::SensorMib::EntPhyIndexes::EntPhyIndex>();
        ent_->parent = this;
        ent_phy_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::EntPhyIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ent_phy_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Snmp::SensorMib::EntPhyIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::SensorMib::EntPhyIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::SensorMib::EntPhyIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-phy-index")
        return true;
    return false;
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::EntPhyIndex()
    :
    index_{YType::str, "index"},
    field_validity_bitmap{YType::uint32, "field-validity-bitmap"},
    device_description{YType::str, "device-description"},
    units{YType::str, "units"},
    device_id{YType::uint32, "device-id"},
    value_{YType::uint32, "value"},
    alarm_type{YType::uint32, "alarm-type"},
    data_type{YType::uint32, "data-type"},
    scale{YType::uint32, "scale"},
    precision{YType::uint32, "precision"},
    status{YType::uint32, "status"},
    age_time_stamp{YType::uint32, "age-time-stamp"},
    update_rate{YType::uint32, "update-rate"},
    measured_entity{YType::uint32, "measured-entity"}
{

    yang_name = "ent-phy-index"; yang_parent_name = "ent-phy-indexes"; is_top_level_class = false; has_list_ancestor = false; 
}

Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::~EntPhyIndex()
{
}

bool Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| field_validity_bitmap.is_set
	|| device_description.is_set
	|| units.is_set
	|| device_id.is_set
	|| value_.is_set
	|| alarm_type.is_set
	|| data_type.is_set
	|| scale.is_set
	|| precision.is_set
	|| status.is_set
	|| age_time_stamp.is_set
	|| update_rate.is_set
	|| measured_entity.is_set;
}

bool Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(field_validity_bitmap.yfilter)
	|| ydk::is_set(device_description.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(alarm_type.yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(scale.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(age_time_stamp.yfilter)
	|| ydk::is_set(update_rate.yfilter)
	|| ydk::is_set(measured_entity.yfilter);
}

std::string Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-oper:snmp/Cisco-IOS-XR-snmp-sensormib-oper:sensor-mib/ent-phy-indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-phy-index";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (field_validity_bitmap.is_set || is_set(field_validity_bitmap.yfilter)) leaf_name_data.push_back(field_validity_bitmap.get_name_leafdata());
    if (device_description.is_set || is_set(device_description.yfilter)) leaf_name_data.push_back(device_description.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (scale.is_set || is_set(scale.yfilter)) leaf_name_data.push_back(scale.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (age_time_stamp.is_set || is_set(age_time_stamp.yfilter)) leaf_name_data.push_back(age_time_stamp.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());
    if (measured_entity.is_set || is_set(measured_entity.yfilter)) leaf_name_data.push_back(measured_entity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap = value;
        field_validity_bitmap.value_namespace = name_space;
        field_validity_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-description")
    {
        device_description = value;
        device_description.value_namespace = name_space;
        device_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale")
    {
        scale = value;
        scale.value_namespace = name_space;
        scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp = value;
        age_time_stamp.value_namespace = name_space;
        age_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "measured-entity")
    {
        measured_entity = value;
        measured_entity.value_namespace = name_space;
        measured_entity.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "field-validity-bitmap")
    {
        field_validity_bitmap.yfilter = yfilter;
    }
    if(value_path == "device-description")
    {
        device_description.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "scale")
    {
        scale.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "age-time-stamp")
    {
        age_time_stamp.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
    if(value_path == "measured-entity")
    {
        measured_entity.yfilter = yfilter;
    }
}

bool Snmp::SensorMib::EntPhyIndexes::EntPhyIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "field-validity-bitmap" || name == "device-description" || name == "units" || name == "device-id" || name == "value" || name == "alarm-type" || name == "data-type" || name == "scale" || name == "precision" || name == "status" || name == "age-time-stamp" || name == "update-rate" || name == "measured-entity")
        return true;
    return false;
}

const Enum::YLeaf SnmpCorrVbindMatch::index_ {0, "index"};
const Enum::YLeaf SnmpCorrVbindMatch::value_ {1, "value"};

const Enum::YLeaf SnmpCorrRuleState::rule_unapplied {0, "rule-unapplied"};
const Enum::YLeaf SnmpCorrRuleState::rule_applied {1, "rule-applied"};
const Enum::YLeaf SnmpCorrRuleState::rule_applied_all {2, "rule-applied-all"};

const Enum::YLeaf DupReqDropStatus::disabled {0, "disabled"};
const Enum::YLeaf DupReqDropStatus::enabled {1, "enabled"};


}
}

