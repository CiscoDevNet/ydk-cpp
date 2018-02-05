
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_2.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

Ospfv3::Ospfv3()
    :
    dns_name_lookup{YType::empty, "dns-name-lookup"}
    	,
    processes(std::make_shared<Ospfv3::Processes>())
{
    processes->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ospfv3::~Ospfv3()
{
}

bool Ospfv3::has_data() const
{
    return dns_name_lookup.is_set
	|| (processes !=  nullptr && processes->has_data());
}

bool Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_name_lookup.yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_name_lookup.is_set || is_set(dns_name_lookup.yfilter)) leaf_name_data.push_back(dns_name_lookup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<Ospfv3::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    return children;
}

void Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-name-lookup")
    {
        dns_name_lookup = value;
        dns_name_lookup.value_namespace = name_space;
        dns_name_lookup.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-name-lookup")
    {
        dns_name_lookup.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ospfv3::clone_ptr() const
{
    return std::make_shared<Ospfv3>();
}

std::string Ospfv3::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ospfv3::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ospfv3::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ospfv3::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes" || name == "dns-name-lookup")
        return true;
    return false;
}

Ospfv3::Processes::Processes()
{

    yang_name = "processes"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false;
}

Ospfv3::Processes::~Processes()
{
}

bool Ospfv3::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Ospfv3::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : process)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Ospfv3::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"},
    nsr{YType::enumeration, "nsr"},
    protocol_shutdown{YType::empty, "protocol-shutdown"},
    enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_shared<Ospfv3::Processes::Process::DefaultVrf>())
	,vrfs(std::make_shared<Ospfv3::Processes::Process::Vrfs>())
	,af(nullptr) // presence node
	,trace_bufs(std::make_shared<Ospfv3::Processes::Process::TraceBufs>())
{
    default_vrf->parent = this;
    vrfs->parent = this;
    trace_bufs->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false;
}

Ospfv3::Processes::Process::~Process()
{
}

bool Ospfv3::Processes::Process::has_data() const
{
    return process_name.is_set
	|| nsr.is_set
	|| protocol_shutdown.is_set
	|| enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (af !=  nullptr && af->has_data())
	|| (trace_bufs !=  nullptr && trace_bufs->has_data());
}

bool Ospfv3::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(protocol_shutdown.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (af !=  nullptr && af->has_operation())
	|| (trace_bufs !=  nullptr && trace_bufs->has_operation());
}

std::string Ospfv3::Processes::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/processes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ospfv3::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (protocol_shutdown.is_set || is_set(protocol_shutdown.yfilter)) leaf_name_data.push_back(protocol_shutdown.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Ospfv3::Processes::Process::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ospfv3::Processes::Process::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "af")
    {
        if(af == nullptr)
        {
            af = std::make_shared<Ospfv3::Processes::Process::Af>();
        }
        return af;
    }

    if(child_yang_name == "trace-bufs")
    {
        if(trace_bufs == nullptr)
        {
            trace_bufs = std::make_shared<Ospfv3::Processes::Process::TraceBufs>();
        }
        return trace_bufs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(af != nullptr)
    {
        children["af"] = af;
    }

    if(trace_bufs != nullptr)
    {
        children["trace-bufs"] = trace_bufs;
    }

    return children;
}

void Ospfv3::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-shutdown")
    {
        protocol_shutdown = value;
        protocol_shutdown.value_namespace = name_space;
        protocol_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "protocol-shutdown")
    {
        protocol_shutdown.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "vrfs" || name == "af" || name == "trace-bufs" || name == "process-name" || name == "nsr" || name == "protocol-shutdown" || name == "enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DefaultVrf()
    :
    ldp_sync{YType::boolean, "ldp-sync"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    spf_prefix_priority_disable{YType::empty, "spf-prefix-priority-disable"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    passive{YType::boolean, "passive"},
    default_metric{YType::uint32, "default-metric"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint32, "priority"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    packet_size{YType::uint32, "packet-size"},
    instance{YType::uint32, "instance"},
    spf_prefix_priority_policy{YType::str, "spf-prefix-priority-policy"},
    router_id{YType::str, "router-id"},
    network{YType::enumeration, "network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    log_adjacency_changes{YType::enumeration, "log-adjacency-changes"},
    demand_circuit{YType::boolean, "demand-circuit"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    area_addresses(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses>())
	,timers(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers>())
	,summary_prefixes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes>())
	,snmp(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute>())
	,distance(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Distance>())
	,maximum(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Maximum>())
	,redistributes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes>())
	,ignore(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Ignore>())
	,distribute_list_out(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeList>())
	,stub_router(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter>())
	,authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Authentication>())
	,graceful_restart(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::GracefulRestart>())
	,default_information(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DefaultInformation>())
	,process_scope(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Encryption>())
	,auto_cost(nullptr) // presence node
{
    area_addresses->parent = this;
    timers->parent = this;
    summary_prefixes->parent = this;
    snmp->parent = this;
    fast_reroute->parent = this;
    distance->parent = this;
    maximum->parent = this;
    redistributes->parent = this;
    ignore->parent = this;
    distribute_list_out->parent = this;
    distribute_list->parent = this;
    stub_router->parent = this;
    bfd->parent = this;
    database_filter->parent = this;
    authentication->parent = this;
    graceful_restart->parent = this;
    default_information->parent = this;
    process_scope->parent = this;
    encryption->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::has_data() const
{
    return ldp_sync.is_set
	|| prefix_suppression.is_set
	|| spf_prefix_priority_disable.is_set
	|| retransmit_interval.is_set
	|| passive.is_set
	|| default_metric.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| packet_size.is_set
	|| instance.is_set
	|| spf_prefix_priority_policy.is_set
	|| router_id.is_set
	|| network.is_set
	|| mtu_ignore.is_set
	|| log_adjacency_changes.is_set
	|| demand_circuit.is_set
	|| transmit_delay.is_set
	|| (area_addresses !=  nullptr && area_addresses->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (redistributes !=  nullptr && redistributes->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (distribute_list_out !=  nullptr && distribute_list_out->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (stub_router !=  nullptr && stub_router->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (process_scope !=  nullptr && process_scope->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(spf_prefix_priority_disable.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(spf_prefix_priority_policy.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (area_addresses !=  nullptr && area_addresses->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (redistributes !=  nullptr && redistributes->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (distribute_list_out !=  nullptr && distribute_list_out->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (stub_router !=  nullptr && stub_router->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (process_scope !=  nullptr && process_scope->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (spf_prefix_priority_disable.is_set || is_set(spf_prefix_priority_disable.yfilter)) leaf_name_data.push_back(spf_prefix_priority_disable.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (spf_prefix_priority_policy.is_set || is_set(spf_prefix_priority_policy.yfilter)) leaf_name_data.push_back(spf_prefix_priority_policy.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-addresses")
    {
        if(area_addresses == nullptr)
        {
            area_addresses = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses>();
        }
        return area_addresses;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes == nullptr)
        {
            redistributes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes>();
        }
        return redistributes;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "distribute-list-out")
    {
        if(distribute_list_out == nullptr)
        {
            distribute_list_out = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut>();
        }
        return distribute_list_out;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "stub-router")
    {
        if(stub_router == nullptr)
        {
            stub_router = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter>();
        }
        return stub_router;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "process-scope")
    {
        if(process_scope == nullptr)
        {
            process_scope = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope>();
        }
        return process_scope;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AutoCost>();
        }
        return auto_cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_addresses != nullptr)
    {
        children["area-addresses"] = area_addresses;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(redistributes != nullptr)
    {
        children["redistributes"] = redistributes;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    if(distribute_list_out != nullptr)
    {
        children["distribute-list-out"] = distribute_list_out;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(stub_router != nullptr)
    {
        children["stub-router"] = stub_router;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(process_scope != nullptr)
    {
        children["process-scope"] = process_scope;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-prefix-priority-disable")
    {
        spf_prefix_priority_disable = value;
        spf_prefix_priority_disable.value_namespace = name_space;
        spf_prefix_priority_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-prefix-priority-policy")
    {
        spf_prefix_priority_policy = value;
        spf_prefix_priority_policy.value_namespace = name_space;
        spf_prefix_priority_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "spf-prefix-priority-disable")
    {
        spf_prefix_priority_disable.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "spf-prefix-priority-policy")
    {
        spf_prefix_priority_policy.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-addresses" || name == "timers" || name == "summary-prefixes" || name == "snmp" || name == "fast-reroute" || name == "distance" || name == "maximum" || name == "redistributes" || name == "ignore" || name == "distribute-list-out" || name == "distribute-list" || name == "stub-router" || name == "bfd" || name == "database-filter" || name == "authentication" || name == "graceful-restart" || name == "default-information" || name == "process-scope" || name == "encryption" || name == "auto-cost" || name == "ldp-sync" || name == "prefix-suppression" || name == "spf-prefix-priority-disable" || name == "retransmit-interval" || name == "passive" || name == "default-metric" || name == "flood-reduction" || name == "hello-interval" || name == "priority" || name == "cost" || name == "dead-interval" || name == "packet-size" || name == "instance" || name == "spf-prefix-priority-policy" || name == "router-id" || name == "network" || name == "mtu-ignore" || name == "log-adjacency-changes" || name == "demand-circuit" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddresses()
{

    yang_name = "area-addresses"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::~AreaAddresses()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::has_data() const
{
    for (std::size_t index=0; index<area_address.size(); index++)
    {
        if(area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_area_id.size(); index++)
    {
        if(area_area_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::has_operation() const
{
    for (std::size_t index=0; index<area_address.size(); index++)
    {
        if(area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_area_id.size(); index++)
    {
        if(area_area_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-address")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress>();
        c->parent = this;
        area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "area-area-id")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId>();
        c->parent = this;
        area_area_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : area_area_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-address" || name == "area-area-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaAddress()
    :
    address{YType::str, "address"},
    stub{YType::boolean, "stub"},
    packet_size{YType::uint32, "packet-size"},
    instance{YType::uint32, "instance"},
    demand_circuit{YType::boolean, "demand-circuit"},
    priority{YType::uint32, "priority"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    enable{YType::empty, "enable"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    passive{YType::boolean, "passive"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    default_cost{YType::uint32, "default-cost"},
    flood_reduction{YType::boolean, "flood-reduction"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    ldp_sync{YType::boolean, "ldp-sync"},
    network{YType::enumeration, "network"},
    transmit_delay{YType::uint32, "transmit-delay"},
    cost{YType::uint32, "cost"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd>())
	,ranges(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption>())
	,nssa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList>())
	,interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces>())
	,area_scope(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope>())
	,sham_links(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks>())
	,virtual_links(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks>())
{
    authentication->parent = this;
    bfd->parent = this;
    ranges->parent = this;
    encryption->parent = this;
    nssa->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    interfaces->parent = this;
    area_scope->parent = this;
    sham_links->parent = this;
    virtual_links->parent = this;

    yang_name = "area-address"; yang_parent_name = "area-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::~AreaAddress()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::has_data() const
{
    return address.is_set
	|| stub.is_set
	|| packet_size.is_set
	|| instance.is_set
	|| demand_circuit.is_set
	|| priority.is_set
	|| prefix_suppression.is_set
	|| enable.is_set
	|| mtu_ignore.is_set
	|| passive.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| default_cost.is_set
	|| flood_reduction.is_set
	|| retransmit_interval.is_set
	|| ldp_sync.is_set
	|| network.is_set
	|| transmit_delay.is_set
	|| cost.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (sham_links !=  nullptr && sham_links->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(stub.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (sham_links !=  nullptr && sham_links->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (stub.is_set || is_set(stub.yfilter)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope == nullptr)
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope>();
        }
        return area_scope;
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links == nullptr)
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks>();
        }
        return sham_links;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(area_scope != nullptr)
    {
        children["area-scope"] = area_scope;
    }

    if(sham_links != nullptr)
    {
        children["sham-links"] = sham_links;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub")
    {
        stub = value;
        stub.value_namespace = name_space;
        stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "stub")
    {
        stub.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "ranges" || name == "encryption" || name == "nssa" || name == "database-filter" || name == "distribute-list" || name == "interfaces" || name == "area-scope" || name == "sham-links" || name == "virtual-links" || name == "address" || name == "stub" || name == "packet-size" || name == "instance" || name == "demand-circuit" || name == "priority" || name == "prefix-suppression" || name == "enable" || name == "mtu-ignore" || name == "passive" || name == "hello-interval" || name == "dead-interval" || name == "default-cost" || name == "flood-reduction" || name == "retransmit-interval" || name == "ldp-sync" || name == "network" || name == "transmit-delay" || name == "cost")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"}
{

    yang_name = "bfd"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set
	|| fast_detect_mode.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval" || name == "fast-detect-mode")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::~Ranges()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::~Range()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| cost.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "not-advertise" || name == "cost")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::Nssa()
    :
    no_redistribution{YType::boolean, "no-redistribution"},
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "nssa"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::~Nssa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::has_data() const
{
    return no_redistribution.is_set
	|| default_info_originate.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| no_summary.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-redistribution" || name == "default-info-originate" || name == "metric" || name == "metric-type" || name == "no-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::~Interfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"},
    dead_interval{YType::uint32, "dead-interval"},
    flood_reduction{YType::boolean, "flood-reduction"},
    cost{YType::uint32, "cost"},
    transmit_delay{YType::uint32, "transmit-delay"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    passive{YType::boolean, "passive"},
    packet_size{YType::uint32, "packet-size"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    network{YType::enumeration, "network"},
    demand_circuit{YType::boolean, "demand-circuit"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication>())
	,neighbors(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute>())
{
    authentication->parent = this;
    neighbors->parent = this;
    encryption->parent = this;
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    fast_reroute->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| dead_interval.is_set
	|| flood_reduction.is_set
	|| cost.is_set
	|| transmit_delay.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| retransmit_interval.is_set
	|| hello_interval.is_set
	|| passive.is_set
	|| packet_size.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| network.is_set
	|| demand_circuit.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "neighbors" || name == "encryption" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "fast-reroute" || name == "interface-name" || name == "enable" || name == "dead-interval" || name == "flood-reduction" || name == "cost" || name == "transmit-delay" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "retransmit-interval" || name == "hello-interval" || name == "passive" || name == "packet-size" || name == "prefix-suppression" || name == "priority" || name == "network" || name == "demand-circuit")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::~Neighbors()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    priority{YType::uint32, "priority"},
    poll_interval{YType::uint32, "poll-interval"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    zone{YType::str, "zone"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| priority.is_set
	|| poll_interval.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| zone.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "priority" || name == "poll-interval" || name == "cost" || name == "database-filter" || name == "zone")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::Bfd()
    :
    interval{YType::uint32, "interval"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_data() const
{
    return interval.is_set
	|| fast_detect_mode.is_set
	|| detection_multiplier.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "fast-detect-mode" || name == "detection-multiplier")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;

    yang_name = "area-scope"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::~AreaScope()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLinks()
{

    yang_name = "sham-links"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::~ShamLinks()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::has_data() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::has_operation() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sham-link")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::ShamLink()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption>())
{
    authentication->parent = this;
    encryption->parent = this;

    yang_name = "sham-link"; yang_parent_name = "sham-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "source-address" || name == "destination-address" || name == "enable" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::~VirtualLinks()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_address{YType::str, "virtual-link-address"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption>())
{
    authentication->parent = this;
    encryption->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_data() const
{
    return virtual_link_address.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.yfilter)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
        virtual_link_address.value_namespace = name_space;
        virtual_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "virtual-link-address" || name == "enable" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaAreaId()
    :
    area_id{YType::uint32, "area-id"},
    stub{YType::boolean, "stub"},
    packet_size{YType::uint32, "packet-size"},
    instance{YType::uint32, "instance"},
    demand_circuit{YType::boolean, "demand-circuit"},
    priority{YType::uint32, "priority"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    enable{YType::empty, "enable"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    passive{YType::boolean, "passive"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    default_cost{YType::uint32, "default-cost"},
    flood_reduction{YType::boolean, "flood-reduction"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    ldp_sync{YType::boolean, "ldp-sync"},
    network{YType::enumeration, "network"},
    transmit_delay{YType::uint32, "transmit-delay"},
    cost{YType::uint32, "cost"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd>())
	,ranges(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption>())
	,nssa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList>())
	,interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces>())
	,area_scope(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope>())
	,sham_links(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks>())
	,virtual_links(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks>())
{
    authentication->parent = this;
    bfd->parent = this;
    ranges->parent = this;
    encryption->parent = this;
    nssa->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    interfaces->parent = this;
    area_scope->parent = this;
    sham_links->parent = this;
    virtual_links->parent = this;

    yang_name = "area-area-id"; yang_parent_name = "area-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::~AreaAreaId()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::has_data() const
{
    return area_id.is_set
	|| stub.is_set
	|| packet_size.is_set
	|| instance.is_set
	|| demand_circuit.is_set
	|| priority.is_set
	|| prefix_suppression.is_set
	|| enable.is_set
	|| mtu_ignore.is_set
	|| passive.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| default_cost.is_set
	|| flood_reduction.is_set
	|| retransmit_interval.is_set
	|| ldp_sync.is_set
	|| network.is_set
	|| transmit_delay.is_set
	|| cost.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (sham_links !=  nullptr && sham_links->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(stub.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (sham_links !=  nullptr && sham_links->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-area-id" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (stub.is_set || is_set(stub.yfilter)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope == nullptr)
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope>();
        }
        return area_scope;
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links == nullptr)
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks>();
        }
        return sham_links;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(area_scope != nullptr)
    {
        children["area-scope"] = area_scope;
    }

    if(sham_links != nullptr)
    {
        children["sham-links"] = sham_links;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub")
    {
        stub = value;
        stub.value_namespace = name_space;
        stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "stub")
    {
        stub.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "ranges" || name == "encryption" || name == "nssa" || name == "database-filter" || name == "distribute-list" || name == "interfaces" || name == "area-scope" || name == "sham-links" || name == "virtual-links" || name == "area-id" || name == "stub" || name == "packet-size" || name == "instance" || name == "demand-circuit" || name == "priority" || name == "prefix-suppression" || name == "enable" || name == "mtu-ignore" || name == "passive" || name == "hello-interval" || name == "dead-interval" || name == "default-cost" || name == "flood-reduction" || name == "retransmit-interval" || name == "ldp-sync" || name == "network" || name == "transmit-delay" || name == "cost")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"}
{

    yang_name = "bfd"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set
	|| fast_detect_mode.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval" || name == "fast-detect-mode")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::~Ranges()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::~Range()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| cost.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "not-advertise" || name == "cost")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::Nssa()
    :
    no_redistribution{YType::boolean, "no-redistribution"},
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "nssa"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::~Nssa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::has_data() const
{
    return no_redistribution.is_set
	|| default_info_originate.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| no_summary.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-redistribution" || name == "default-info-originate" || name == "metric" || name == "metric-type" || name == "no-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::~Interfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"},
    dead_interval{YType::uint32, "dead-interval"},
    flood_reduction{YType::boolean, "flood-reduction"},
    cost{YType::uint32, "cost"},
    transmit_delay{YType::uint32, "transmit-delay"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    passive{YType::boolean, "passive"},
    packet_size{YType::uint32, "packet-size"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    network{YType::enumeration, "network"},
    demand_circuit{YType::boolean, "demand-circuit"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication>())
	,neighbors(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute>())
{
    authentication->parent = this;
    neighbors->parent = this;
    encryption->parent = this;
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    fast_reroute->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| dead_interval.is_set
	|| flood_reduction.is_set
	|| cost.is_set
	|| transmit_delay.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| retransmit_interval.is_set
	|| hello_interval.is_set
	|| passive.is_set
	|| packet_size.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| network.is_set
	|| demand_circuit.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "neighbors" || name == "encryption" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "fast-reroute" || name == "interface-name" || name == "enable" || name == "dead-interval" || name == "flood-reduction" || name == "cost" || name == "transmit-delay" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "retransmit-interval" || name == "hello-interval" || name == "passive" || name == "packet-size" || name == "prefix-suppression" || name == "priority" || name == "network" || name == "demand-circuit")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::~Neighbors()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    priority{YType::uint32, "priority"},
    poll_interval{YType::uint32, "poll-interval"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    zone{YType::str, "zone"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| priority.is_set
	|| poll_interval.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| zone.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "priority" || name == "poll-interval" || name == "cost" || name == "database-filter" || name == "zone")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::Bfd()
    :
    interval{YType::uint32, "interval"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_data() const
{
    return interval.is_set
	|| fast_detect_mode.is_set
	|| detection_multiplier.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "fast-detect-mode" || name == "detection-multiplier")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;

    yang_name = "area-scope"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::~AreaScope()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLinks()
{

    yang_name = "sham-links"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::~ShamLinks()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::has_data() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::has_operation() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sham-link")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::ShamLink()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption>())
{
    authentication->parent = this;
    encryption->parent = this;

    yang_name = "sham-link"; yang_parent_name = "sham-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "source-address" || name == "destination-address" || name == "enable" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::~VirtualLinks()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_address{YType::str, "virtual-link-address"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    dead_interval{YType::uint32, "dead-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption>())
{
    authentication->parent = this;
    encryption->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_data() const
{
    return virtual_link_address.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.yfilter)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
        virtual_link_address.value_namespace = name_space;
        virtual_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "virtual-link-address" || name == "enable" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    algorithm{YType::enumeration, "algorithm"},
    password{YType::str, "password"}
{

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| algorithm.is_set
	|| password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "algorithm" || name == "password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::Encryption()
    :
    enable{YType::boolean, "enable"},
    spi{YType::uint32, "spi"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"}
{

    yang_name = "encryption"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_data() const
{
    return enable.is_set
	|| spi.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| authentication_algorithm.is_set
	|| authentication_password.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "spi" || name == "encryption-algorithm" || name == "encryption-password" || name == "authentication-algorithm" || name == "authentication-password")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Timers()
    :
    pacing(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing>())
	,lsa_timers(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers>())
	,throttle(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle>())
{
    pacing->parent = this;
    lsa_timers->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::~Timers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_data() const
{
    return (pacing !=  nullptr && pacing->has_data())
	|| (lsa_timers !=  nullptr && lsa_timers->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (lsa_timers !=  nullptr && lsa_timers->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "lsa-timers")
    {
        if(lsa_timers == nullptr)
        {
            lsa_timers = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers>();
        }
        return lsa_timers;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(lsa_timers != nullptr)
    {
        children["lsa-timers"] = lsa_timers;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pacing" || name == "lsa-timers" || name == "throttle")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    retransmission{YType::uint32, "retransmission"},
    lsa_group{YType::uint32, "lsa-group"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::~Pacing()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| retransmission.is_set
	|| lsa_group.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(retransmission.yfilter)
	|| ydk::is_set(lsa_group.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "retransmission" || name == "lsa-group")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::LsaTimers()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa-timers"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::~LsaTimers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_data() const
{
    return arrival.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::~Throttle()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::Lsa()
    :
    first_delay{YType::uint32, "first-delay"},
    minimum_delay{YType::uint32, "minimum-delay"},
    maximum_delay{YType::uint32, "maximum-delay"}
{

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_data() const
{
    return first_delay.is_set
	|| minimum_delay.is_set
	|| maximum_delay.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "minimum-delay" || name == "maximum-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::Spf()
    :
    first_delay{YType::uint32, "first-delay"},
    minimum_delay{YType::uint32, "minimum-delay"},
    maximum_delay{YType::uint32, "maximum-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::~Spf()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_data() const
{
    return first_delay.is_set
	|| minimum_delay.is_set
	|| maximum_delay.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "minimum-delay" || name == "maximum-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::Snmp()
    :
    context{YType::str, "context"}
    	,
    trap_rate_limit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit>())
{
    trap_rate_limit->parent = this;

    yang_name = "snmp"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::~Snmp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_data() const
{
    return context.is_set
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-rate-limit")
    {
        if(trap_rate_limit == nullptr)
        {
            trap_rate_limit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit>();
        }
        return trap_rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trap_rate_limit != nullptr)
    {
        children["trap-rate-limit"] = trap_rate_limit;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-rate-limit" || name == "context")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::TrapRateLimit()
    :
    window_size{YType::uint32, "window-size"},
    max_window_traps{YType::uint32, "max-window-traps"}
{

    yang_name = "trap-rate-limit"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::~TrapRateLimit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_data() const
{
    return window_size.is_set
	|| max_window_traps.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| ydk::is_set(max_window_traps.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());
    if (max_window_traps.is_set || is_set(max_window_traps.yfilter)) leaf_name_data.push_back(max_window_traps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-window-traps")
    {
        max_window_traps = value;
        max_window_traps.value_namespace = name_space;
        max_window_traps.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
    if(value_path == "max-window-traps")
    {
        max_window_traps.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size" || name == "max-window-traps")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::FastReroute()
    :
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::has_data() const
{
    return (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::PerLink()
    :
    priority{YType::enumeration, "priority"}
{

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::has_data() const
{
    return priority.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::PerPrefix()
    :
    load_sharing_disable{YType::empty, "load-sharing-disable"},
    priority{YType::enumeration, "priority"}
    	,
    tiebreakers(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers>())
{
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::has_data() const
{
    return load_sharing_disable.is_set
	|| priority.is_set
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing_disable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing_disable.is_set || is_set(load_sharing_disable.yfilter)) leaf_name_data.push_back(load_sharing_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable = value;
        load_sharing_disable.value_namespace = name_space;
        load_sharing_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreakers" || name == "load-sharing-disable" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Distance::Distance()
    :
    administrative{YType::uint32, "administrative"}
    	,
    ospfv3(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_>())
{
    ospfv3->parent = this;

    yang_name = "distance"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Distance::~Distance()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::has_data() const
{
    return administrative.is_set
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_>();
        }
        return ospfv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3" || name == "administrative")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::Ospfv3_()
    :
    intra_area{YType::uint32, "intra-area"},
    inter_area{YType::uint32, "inter-area"},
    external{YType::uint32, "external"}
{

    yang_name = "ospfv3"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::~Ospfv3_()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::has_data() const
{
    return intra_area.is_set
	|| inter_area.is_set
	|| external.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intra_area.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intra-area" || name == "inter-area" || name == "external")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Maximum::Maximum()
    :
    interfaces{YType::uint32, "interfaces"},
    paths{YType::uint32, "paths"}
    	,
    redistributed_prefixes(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes>())
{
    redistributed_prefixes->parent = this;

    yang_name = "maximum"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Maximum::~Maximum()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::has_data() const
{
    return interfaces.is_set
	|| paths.is_set
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistributed-prefixes")
    {
        if(redistributed_prefixes == nullptr)
        {
            redistributed_prefixes = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes>();
        }
        return redistributed_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redistributed_prefixes != nullptr)
    {
        children["redistributed-prefixes"] = redistributed_prefixes;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistributed-prefixes" || name == "interfaces" || name == "paths")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::RedistributedPrefixes()
    :
    prefixes{YType::uint32, "prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "redistributed-prefixes"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::~RedistributedPrefixes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::has_data() const
{
    return prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistributes()
{

    yang_name = "redistributes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::~Redistributes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : redistribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_subscriber_or_mobile(nullptr) // presence node
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-or-static-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_subscriber_or_mobile == nullptr)
        {
            connected_or_static_or_subscriber_or_mobile = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile>();
        }
        return connected_or_static_or_subscriber_or_mobile;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3-or-isis-or-application")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication>();
        c->parent = this;
        ospfv3_or_isis_or_application.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected_or_static_or_subscriber_or_mobile != nullptr)
    {
        children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ospfv3_or_isis_or_application)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-or-static-or-subscriber-or-mobile" || name == "bgp" || name == "ospfv3-or-isis-or-application" || name == "eigrp" || name == "protocol-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::ConnectedOrStaticOrSubscriberOrMobile()
    :
    internal_route_type{YType::enumeration, "internal-route-type"},
    default_metric{YType::uint32, "default-metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    route_policy_name{YType::str, "route-policy-name"},
    external_route_type{YType::enumeration, "external-route-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    redistribute_route{YType::boolean, "redistribute-route"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"}
{

    yang_name = "connected-or-static-or-subscriber-or-mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::~ConnectedOrStaticOrSubscriberOrMobile()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_data() const
{
    return internal_route_type.is_set
	|| default_metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| route_policy_name.is_set
	|| external_route_type.is_set
	|| nssa_external_route_type.is_set
	|| redistribute_route.is_set
	|| isis_route_type.is_set
	|| eigrp_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-subscriber-or-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-route-type" || name == "default-metric" || name == "metric-type" || name == "tag" || name == "route-policy-name" || name == "external-route-type" || name == "nssa-external-route-type" || name == "redistribute-route" || name == "isis-route-type" || name == "eigrp-route-type" || name == "preserve-med" || name == "preserve-med-info")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    default_metric{YType::uint32, "default-metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    route_policy_name{YType::str, "route-policy-name"},
    external_route_type{YType::enumeration, "external-route-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    redistribute_route{YType::boolean, "redistribute-route"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"}
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| internal_route_type.is_set
	|| default_metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| route_policy_name.is_set
	|| external_route_type.is_set
	|| nssa_external_route_type.is_set
	|| redistribute_route.is_set
	|| isis_route_type.is_set
	|| eigrp_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "internal-route-type" || name == "default-metric" || name == "metric-type" || name == "tag" || name == "route-policy-name" || name == "external-route-type" || name == "nssa-external-route-type" || name == "redistribute-route" || name == "isis-route-type" || name == "eigrp-route-type" || name == "preserve-med" || name == "preserve-med-info")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::Ospfv3OrIsisOrApplication()
    :
    process_name{YType::str, "process-name"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    default_metric{YType::uint32, "default-metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    route_policy_name{YType::str, "route-policy-name"},
    external_route_type{YType::enumeration, "external-route-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    redistribute_route{YType::boolean, "redistribute-route"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"}
{

    yang_name = "ospfv3-or-isis-or-application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::~Ospfv3OrIsisOrApplication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_data() const
{
    return process_name.is_set
	|| internal_route_type.is_set
	|| default_metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| route_policy_name.is_set
	|| external_route_type.is_set
	|| nssa_external_route_type.is_set
	|| redistribute_route.is_set
	|| isis_route_type.is_set
	|| eigrp_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-or-isis-or-application" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name" || name == "internal-route-type" || name == "default-metric" || name == "metric-type" || name == "tag" || name == "route-policy-name" || name == "external-route-type" || name == "nssa-external-route-type" || name == "redistribute-route" || name == "isis-route-type" || name == "eigrp-route-type" || name == "preserve-med" || name == "preserve-med-info")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    as_xx{YType::uint32, "as-xx"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    default_metric{YType::uint32, "default-metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    route_policy_name{YType::str, "route-policy-name"},
    external_route_type{YType::enumeration, "external-route-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    redistribute_route{YType::boolean, "redistribute-route"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_data() const
{
    return as_xx.is_set
	|| internal_route_type.is_set
	|| default_metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| route_policy_name.is_set
	|| external_route_type.is_set
	|| nssa_external_route_type.is_set
	|| redistribute_route.is_set
	|| isis_route_type.is_set
	|| eigrp_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-xx='" <<as_xx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "internal-route-type" || name == "default-metric" || name == "metric-type" || name == "tag" || name == "route-policy-name" || name == "external-route-type" || name == "nssa-external-route-type" || name == "redistribute-route" || name == "isis-route-type" || name == "eigrp-route-type" || name == "preserve-med" || name == "preserve-med-info")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Ignore::Ignore()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa>())
{
    lsa->parent = this;

    yang_name = "ignore"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Ignore::~Ignore()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa>();
        }
        return lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::Lsa()
    :
    mospf{YType::empty, "mospf"}
{

    yang_name = "lsa"; yang_parent_name = "ignore"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::has_data() const
{
    return mospf.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mospf.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mospf.is_set || is_set(mospf.yfilter)) leaf_name_data.push_back(mospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mospf")
    {
        mospf = value;
        mospf.value_namespace = name_space;
        mospf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mospf")
    {
        mospf.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mospf")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeListOut()
    :
    distribute_outs(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts>())
{
    distribute_outs->parent = this;

    yang_name = "distribute-list-out"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::~DistributeListOut()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::has_data() const
{
    return (distribute_outs !=  nullptr && distribute_outs->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::has_operation() const
{
    return is_set(yfilter)
	|| (distribute_outs !=  nullptr && distribute_outs->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-outs")
    {
        if(distribute_outs == nullptr)
        {
            distribute_outs = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts>();
        }
        return distribute_outs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(distribute_outs != nullptr)
    {
        children["distribute-outs"] = distribute_outs;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-outs")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOuts()
{

    yang_name = "distribute-outs"; yang_parent_name = "distribute-list-out"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::~DistributeOuts()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::has_data() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::has_operation() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-outs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-out")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut>();
        c->parent = this;
        distribute_out.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : distribute_out)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-out")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::DistributeOut()
    :
    protocol_name{YType::enumeration, "protocol-name"}
{

    yang_name = "distribute-out"; yang_parent_name = "distribute-outs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::~DistributeOut()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::has_data() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::has_operation() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-out" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-yy-and-as-xx-and-process-name")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName>();
        c->parent = this;
        as_yy_and_as_xx_and_process_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : as_yy_and_as_xx_and_process_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy-and-as-xx-and-process-name" || name == "protocol-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::AsYyAndAsXxAndProcessName()
    :
    as_yy{YType::uint32, "as-yy"},
    as_xx{YType::uint32, "as-xx"},
    process_name{YType::str, "process-name"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "as-yy-and-as-xx-and-process-name"; yang_parent_name = "distribute-out"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::~AsYyAndAsXxAndProcessName()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_data() const
{
    return as_yy.is_set
	|| as_xx.is_set
	|| process_name.is_set
	|| prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-yy-and-as-xx-and-process-name" <<"[as-yy='" <<as_yy <<"']" <<"[as-xx='" <<as_xx <<"']" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "as-xx" || name == "process-name" || name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::StubRouter()
    :
    rbit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit>())
	,v6bit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit>())
	,max_metric(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric>())
{
    rbit->parent = this;
    v6bit->parent = this;
    max_metric->parent = this;

    yang_name = "stub-router"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_data() const
{
    return (rbit !=  nullptr && rbit->has_data())
	|| (v6bit !=  nullptr && v6bit->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_operation() const
{
    return is_set(yfilter)
	|| (rbit !=  nullptr && rbit->has_operation())
	|| (v6bit !=  nullptr && v6bit->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rbit")
    {
        if(rbit == nullptr)
        {
            rbit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit>();
        }
        return rbit;
    }

    if(child_yang_name == "v6bit")
    {
        if(v6bit == nullptr)
        {
            v6bit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit>();
        }
        return v6bit;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric>();
        }
        return max_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rbit != nullptr)
    {
        children["rbit"] = rbit;
    }

    if(v6bit != nullptr)
    {
        children["v6bit"] = v6bit;
    }

    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rbit" || name == "v6bit" || name == "max-metric")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::Rbit()
    :
    on_switchover{YType::uint32, "on-switchover"},
    always{YType::empty, "always"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    enable{YType::empty, "enable"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "rbit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::~Rbit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_data() const
{
    return on_switchover.is_set
	|| always.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| enable.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "on-switchover" || name == "always" || name == "external-lsa" || name == "include-stub" || name == "enable" || name == "on-proc-migration" || name == "on-proc-restart" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "rbit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::V6Bit()
    :
    on_switchover{YType::uint32, "on-switchover"},
    always{YType::empty, "always"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    enable{YType::empty, "enable"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "v6bit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::~V6Bit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_data() const
{
    return on_switchover.is_set
	|| always.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| enable.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "on-switchover" || name == "always" || name == "external-lsa" || name == "include-stub" || name == "enable" || name == "on-proc-migration" || name == "on-proc-restart" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "v6bit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::MaxMetric()
    :
    on_switchover{YType::uint32, "on-switchover"},
    always{YType::empty, "always"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    enable{YType::empty, "enable"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "max-metric"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::~MaxMetric()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_data() const
{
    return on_switchover.is_set
	|| always.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| enable.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "on-switchover" || name == "always" || name == "external-lsa" || name == "include-stub" || name == "enable" || name == "on-proc-migration" || name == "on-proc-restart" || name == "summary-lsa")
        return true;
    return false;
}

const Enum::YLeaf Ospfv3Protocol::all {0, "all"};
const Enum::YLeaf Ospfv3Protocol::connected {1, "connected"};
const Enum::YLeaf Ospfv3Protocol::static_ {3, "static"};
const Enum::YLeaf Ospfv3Protocol::bgp {4, "bgp"};
const Enum::YLeaf Ospfv3Protocol::isis {6, "isis"};
const Enum::YLeaf Ospfv3Protocol::ospfv3 {7, "ospfv3"};
const Enum::YLeaf Ospfv3Protocol::eigrp {8, "eigrp"};

const Enum::YLeaf Ospfv3FastRerouteTiebreakers::downstream {0, "downstream"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::lowest_metric {2, "lowest-metric"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::node_protect {3, "node-protect"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::primary_path {4, "primary-path"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::secondary_path {5, "secondary-path"};
const Enum::YLeaf Ospfv3FastRerouteTiebreakers::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf Ospfv3isisRoute::level1 {64, "level1"};
const Enum::YLeaf Ospfv3isisRoute::level2 {128, "level2"};
const Enum::YLeaf Ospfv3isisRoute::level1_and2 {192, "level1-and2"};

const Enum::YLeaf Ospfv3bfdEnableMode::disable {0, "disable"};
const Enum::YLeaf Ospfv3bfdEnableMode::default_ {1, "default"};
const Enum::YLeaf Ospfv3bfdEnableMode::strict {2, "strict"};

const Enum::YLeaf Ospfv3LogAdj::suppress {0, "suppress"};
const Enum::YLeaf Ospfv3LogAdj::brief {1, "brief"};
const Enum::YLeaf Ospfv3LogAdj::detail {2, "detail"};

const Enum::YLeaf Ospfv3ProtocolType2::connected {1, "connected"};
const Enum::YLeaf Ospfv3ProtocolType2::static_ {3, "static"};
const Enum::YLeaf Ospfv3ProtocolType2::bgp {4, "bgp"};
const Enum::YLeaf Ospfv3ProtocolType2::isis {6, "isis"};
const Enum::YLeaf Ospfv3ProtocolType2::ospfv3 {7, "ospfv3"};
const Enum::YLeaf Ospfv3ProtocolType2::eigrp {8, "eigrp"};
const Enum::YLeaf Ospfv3ProtocolType2::subscriber {9, "subscriber"};
const Enum::YLeaf Ospfv3ProtocolType2::application {10, "application"};
const Enum::YLeaf Ospfv3ProtocolType2::mobile {11, "mobile"};

const Enum::YLeaf Ospfv3Metric::type1 {1, "type1"};
const Enum::YLeaf Ospfv3Metric::type2 {2, "type2"};

const Enum::YLeaf Ospfv3TraceBufSize::size0 {0, "size0"};
const Enum::YLeaf Ospfv3TraceBufSize::size256 {256, "size256"};
const Enum::YLeaf Ospfv3TraceBufSize::size512 {512, "size512"};
const Enum::YLeaf Ospfv3TraceBufSize::size1024 {1024, "size1024"};
const Enum::YLeaf Ospfv3TraceBufSize::size2048 {2048, "size2048"};
const Enum::YLeaf Ospfv3TraceBufSize::size4096 {4096, "size4096"};
const Enum::YLeaf Ospfv3TraceBufSize::size8192 {8192, "size8192"};
const Enum::YLeaf Ospfv3TraceBufSize::size16384 {16384, "size16384"};
const Enum::YLeaf Ospfv3TraceBufSize::size32768 {32768, "size32768"};
const Enum::YLeaf Ospfv3TraceBufSize::size65536 {65536, "size65536"};

const Enum::YLeaf Ospfv3ExternalRoute::external1 {8, "external1"};
const Enum::YLeaf Ospfv3ExternalRoute::external2 {16, "external2"};
const Enum::YLeaf Ospfv3ExternalRoute::external {24, "external"};

const Enum::YLeaf Ospfv3SubsequentAddressFamily::unicast {1, "unicast"};

const Enum::YLeaf Ospfv3InternalRoute::internal {6, "internal"};

const Enum::YLeaf Ospfv3FastReroute::none {0, "none"};
const Enum::YLeaf Ospfv3FastReroute::per_link {1, "per-link"};
const Enum::YLeaf Ospfv3FastReroute::per_prefix {2, "per-prefix"};

const Enum::YLeaf Ospfv3DomainId::type0005 {5, "type0005"};
const Enum::YLeaf Ospfv3DomainId::type0105 {261, "type0105"};
const Enum::YLeaf Ospfv3DomainId::type0205 {517, "type0205"};
const Enum::YLeaf Ospfv3DomainId::type8005 {32773, "type8005"};

const Enum::YLeaf Ospfv3AuthenticationType2::null {0, "null"};
const Enum::YLeaf Ospfv3AuthenticationType2::md5 {1, "md5"};
const Enum::YLeaf Ospfv3AuthenticationType2::sha1 {2, "sha1"};

const Enum::YLeaf Ospfv3AddressFamily::ipv6 {1, "ipv6"};

const Enum::YLeaf Ospfv3Authentication::md5 {1, "md5"};
const Enum::YLeaf Ospfv3Authentication::sha1 {2, "sha1"};

const Enum::YLeaf Ospfv3EncryptionAlgorithm::null {0, "null"};
const Enum::YLeaf Ospfv3EncryptionAlgorithm::des {1, "des"};
const Enum::YLeaf Ospfv3EncryptionAlgorithm::Y_3des {2, "3des"};
const Enum::YLeaf Ospfv3EncryptionAlgorithm::aes {3, "aes"};
const Enum::YLeaf Ospfv3EncryptionAlgorithm::aes192 {4, "aes192"};
const Enum::YLeaf Ospfv3EncryptionAlgorithm::aes256 {5, "aes256"};

const Enum::YLeaf Ospfv3nsr::true_ {1, "true"};
const Enum::YLeaf Ospfv3nsr::false_ {2, "false"};

const Enum::YLeaf Ospfv3nssaExternalRoute::external1 {4096, "external1"};
const Enum::YLeaf Ospfv3nssaExternalRoute::external2 {8192, "external2"};
const Enum::YLeaf Ospfv3nssaExternalRoute::external {12288, "external"};

const Enum::YLeaf Ospfv3EigrpRoute::internal {16384, "internal"};
const Enum::YLeaf Ospfv3EigrpRoute::external {32768, "external"};

const Enum::YLeaf Ospfv3FastReroutePriority::critical {0, "critical"};
const Enum::YLeaf Ospfv3FastReroutePriority::high {1, "high"};
const Enum::YLeaf Ospfv3FastReroutePriority::medium {2, "medium"};
const Enum::YLeaf Ospfv3FastReroutePriority::low {3, "low"};

const Enum::YLeaf Ospfv3Network::broadcast {1, "broadcast"};
const Enum::YLeaf Ospfv3Network::non_broadcast {2, "non-broadcast"};
const Enum::YLeaf Ospfv3Network::point_to_point {3, "point-to-point"};
const Enum::YLeaf Ospfv3Network::point_to_multipoint {4, "point-to-multipoint"};
const Enum::YLeaf Ospfv3Network::non_broadcast_point_to_multipoint {5, "non-broadcast-point-to-multipoint"};


}
}

