
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Isis()
    :
    instances(std::make_shared<Isis::Instances>())
{
    instances->parent = this;

    yang_name = "isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Isis::~Isis()
{
}

bool Isis::has_data() const
{
    return (instances !=  nullptr && instances->has_data());
}

bool Isis::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Isis::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
}

void Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Isis::clone_ptr() const
{
    return std::make_shared<Isis>();
}

std::string Isis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Isis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Isis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Isis::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances")
        return true;
    return false;
}

Isis::Instances::Instances()
{

    yang_name = "instances"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Isis::Instances::~Instances()
{
}

bool Isis::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Isis::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    checkpoint_adjacencies(std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>())
	,checkpoint_interfaces(std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>())
	,checkpoint_lsps(std::make_shared<Isis::Instances::Instance::CheckpointLsps>())
	,checkpoint_te_tunnels(std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>())
	,error_log(std::make_shared<Isis::Instances::Instance::ErrorLog>())
	,host_names(std::make_shared<Isis::Instances::Instance::HostNames>())
	,interface_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics>())
	,interfaces(std::make_shared<Isis::Instances::Instance::Interfaces>())
	,levels(std::make_shared<Isis::Instances::Instance::Levels>())
	,mesh_groups(std::make_shared<Isis::Instances::Instance::MeshGroups>())
	,neighbor_summaries(std::make_shared<Isis::Instances::Instance::NeighborSummaries>())
	,neighbors(std::make_shared<Isis::Instances::Instance::Neighbors>())
	,nsr_statistics(std::make_shared<Isis::Instances::Instance::NsrStatistics>())
	,nsr_status(std::make_shared<Isis::Instances::Instance::NsrStatus>())
	,protocol(std::make_shared<Isis::Instances::Instance::Protocol>())
	,srms(std::make_shared<Isis::Instances::Instance::Srms>())
	,statistics_global(std::make_shared<Isis::Instances::Instance::StatisticsGlobal>())
	,topologies(std::make_shared<Isis::Instances::Instance::Topologies>())
{
    checkpoint_adjacencies->parent = this;
    checkpoint_interfaces->parent = this;
    checkpoint_lsps->parent = this;
    checkpoint_te_tunnels->parent = this;
    error_log->parent = this;
    host_names->parent = this;
    interface_statistics->parent = this;
    interfaces->parent = this;
    levels->parent = this;
    mesh_groups->parent = this;
    neighbor_summaries->parent = this;
    neighbors->parent = this;
    nsr_statistics->parent = this;
    nsr_status->parent = this;
    protocol->parent = this;
    srms->parent = this;
    statistics_global->parent = this;
    topologies->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false;
}

Isis::Instances::Instance::~Instance()
{
}

bool Isis::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_data())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_data())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_data())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_data())
	|| (error_log !=  nullptr && error_log->has_data())
	|| (host_names !=  nullptr && host_names->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (levels !=  nullptr && levels->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (srms !=  nullptr && srms->has_data())
	|| (statistics_global !=  nullptr && statistics_global->has_data())
	|| (topologies !=  nullptr && topologies->has_data());
}

bool Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_operation())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_operation())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_operation())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_operation())
	|| (error_log !=  nullptr && error_log->has_operation())
	|| (host_names !=  nullptr && host_names->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (levels !=  nullptr && levels->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (srms !=  nullptr && srms->has_operation())
	|| (statistics_global !=  nullptr && statistics_global->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string Isis::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacencies")
    {
        if(checkpoint_adjacencies == nullptr)
        {
            checkpoint_adjacencies = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>();
        }
        return checkpoint_adjacencies;
    }

    if(child_yang_name == "checkpoint-interfaces")
    {
        if(checkpoint_interfaces == nullptr)
        {
            checkpoint_interfaces = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>();
        }
        return checkpoint_interfaces;
    }

    if(child_yang_name == "checkpoint-lsps")
    {
        if(checkpoint_lsps == nullptr)
        {
            checkpoint_lsps = std::make_shared<Isis::Instances::Instance::CheckpointLsps>();
        }
        return checkpoint_lsps;
    }

    if(child_yang_name == "checkpoint-te-tunnels")
    {
        if(checkpoint_te_tunnels == nullptr)
        {
            checkpoint_te_tunnels = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>();
        }
        return checkpoint_te_tunnels;
    }

    if(child_yang_name == "error-log")
    {
        if(error_log == nullptr)
        {
            error_log = std::make_shared<Isis::Instances::Instance::ErrorLog>();
        }
        return error_log;
    }

    if(child_yang_name == "host-names")
    {
        if(host_names == nullptr)
        {
            host_names = std::make_shared<Isis::Instances::Instance::HostNames>();
        }
        return host_names;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "levels")
    {
        if(levels == nullptr)
        {
            levels = std::make_shared<Isis::Instances::Instance::Levels>();
        }
        return levels;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<Isis::Instances::Instance::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Isis::Instances::Instance::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Isis::Instances::Instance::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "nsr-statistics")
    {
        if(nsr_statistics == nullptr)
        {
            nsr_statistics = std::make_shared<Isis::Instances::Instance::NsrStatistics>();
        }
        return nsr_statistics;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<Isis::Instances::Instance::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Isis::Instances::Instance::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "srms")
    {
        if(srms == nullptr)
        {
            srms = std::make_shared<Isis::Instances::Instance::Srms>();
        }
        return srms;
    }

    if(child_yang_name == "statistics-global")
    {
        if(statistics_global == nullptr)
        {
            statistics_global = std::make_shared<Isis::Instances::Instance::StatisticsGlobal>();
        }
        return statistics_global;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Isis::Instances::Instance::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(checkpoint_adjacencies != nullptr)
    {
        children["checkpoint-adjacencies"] = checkpoint_adjacencies;
    }

    if(checkpoint_interfaces != nullptr)
    {
        children["checkpoint-interfaces"] = checkpoint_interfaces;
    }

    if(checkpoint_lsps != nullptr)
    {
        children["checkpoint-lsps"] = checkpoint_lsps;
    }

    if(checkpoint_te_tunnels != nullptr)
    {
        children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
    }

    if(error_log != nullptr)
    {
        children["error-log"] = error_log;
    }

    if(host_names != nullptr)
    {
        children["host-names"] = host_names;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(levels != nullptr)
    {
        children["levels"] = levels;
    }

    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(nsr_statistics != nullptr)
    {
        children["nsr-statistics"] = nsr_statistics;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(srms != nullptr)
    {
        children["srms"] = srms;
    }

    if(statistics_global != nullptr)
    {
        children["statistics-global"] = statistics_global;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    return children;
}

void Isis::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacencies" || name == "checkpoint-interfaces" || name == "checkpoint-lsps" || name == "checkpoint-te-tunnels" || name == "error-log" || name == "host-names" || name == "interface-statistics" || name == "interfaces" || name == "levels" || name == "mesh-groups" || name == "neighbor-summaries" || name == "neighbors" || name == "nsr-statistics" || name == "nsr-status" || name == "protocol" || name == "srms" || name == "statistics-global" || name == "topologies" || name == "instance-name")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacencies()
{

    yang_name = "checkpoint-adjacencies"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointAdjacencies::~CheckpointAdjacencies()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency")
    {
        for(auto const & c : checkpoint_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency>();
        c->parent = this;
        checkpoint_adjacency.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_adjacency)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacency()
    :
    checkpoint_adjacency_circuit_number{YType::uint8, "checkpoint-adjacency-circuit-number"},
    checkpoint_adjacency_holdtime{YType::uint16, "checkpoint-adjacency-holdtime"},
    checkpoint_adjacency_interface{YType::str, "checkpoint-adjacency-interface"},
    checkpoint_adjacency_lan_priority{YType::uint8, "checkpoint-adjacency-lan-priority"},
    checkpoint_adjacency_level{YType::enumeration, "checkpoint-adjacency-level"},
    checkpoint_adjacency_object_id{YType::uint32, "checkpoint-adjacency-object-id"},
    checkpoint_adjacency_snpa{YType::str, "checkpoint-adjacency-snpa"},
    checkpoint_adjacency_system_id{YType::str, "checkpoint-adjacency-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "checkpoint-adjacency"; yang_parent_name = "checkpoint-adjacencies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::~CheckpointAdjacency()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_data())
            return true;
    }
    return checkpoint_adjacency_circuit_number.is_set
	|| checkpoint_adjacency_holdtime.is_set
	|| checkpoint_adjacency_interface.is_set
	|| checkpoint_adjacency_lan_priority.is_set
	|| checkpoint_adjacency_level.is_set
	|| checkpoint_adjacency_object_id.is_set
	|| checkpoint_adjacency_snpa.is_set
	|| checkpoint_adjacency_system_id.is_set
	|| interface_name.is_set
	|| level.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_adjacency_circuit_number.yfilter)
	|| ydk::is_set(checkpoint_adjacency_holdtime.yfilter)
	|| ydk::is_set(checkpoint_adjacency_interface.yfilter)
	|| ydk::is_set(checkpoint_adjacency_lan_priority.yfilter)
	|| ydk::is_set(checkpoint_adjacency_level.yfilter)
	|| ydk::is_set(checkpoint_adjacency_object_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_snpa.yfilter)
	|| ydk::is_set(checkpoint_adjacency_system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_adjacency_circuit_number.is_set || is_set(checkpoint_adjacency_circuit_number.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_circuit_number.get_name_leafdata());
    if (checkpoint_adjacency_holdtime.is_set || is_set(checkpoint_adjacency_holdtime.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_holdtime.get_name_leafdata());
    if (checkpoint_adjacency_interface.is_set || is_set(checkpoint_adjacency_interface.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_interface.get_name_leafdata());
    if (checkpoint_adjacency_lan_priority.is_set || is_set(checkpoint_adjacency_lan_priority.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_lan_priority.get_name_leafdata());
    if (checkpoint_adjacency_level.is_set || is_set(checkpoint_adjacency_level.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_level.get_name_leafdata());
    if (checkpoint_adjacency_object_id.is_set || is_set(checkpoint_adjacency_object_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_object_id.get_name_leafdata());
    if (checkpoint_adjacency_snpa.is_set || is_set(checkpoint_adjacency_snpa.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_snpa.get_name_leafdata());
    if (checkpoint_adjacency_system_id.is_set || is_set(checkpoint_adjacency_system_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency-per-address-family-next-hop")
    {
        for(auto const & c : checkpoint_adjacency_per_address_family_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop>();
        c->parent = this;
        checkpoint_adjacency_per_address_family_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_adjacency_per_address_family_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number = value;
        checkpoint_adjacency_circuit_number.value_namespace = name_space;
        checkpoint_adjacency_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime = value;
        checkpoint_adjacency_holdtime.value_namespace = name_space;
        checkpoint_adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface = value;
        checkpoint_adjacency_interface.value_namespace = name_space;
        checkpoint_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority = value;
        checkpoint_adjacency_lan_priority.value_namespace = name_space;
        checkpoint_adjacency_lan_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level = value;
        checkpoint_adjacency_level.value_namespace = name_space;
        checkpoint_adjacency_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id = value;
        checkpoint_adjacency_object_id.value_namespace = name_space;
        checkpoint_adjacency_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa = value;
        checkpoint_adjacency_snpa.value_namespace = name_space;
        checkpoint_adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id = value;
        checkpoint_adjacency_system_id.value_namespace = name_space;
        checkpoint_adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency-per-address-family-next-hop" || name == "checkpoint-adjacency-circuit-number" || name == "checkpoint-adjacency-holdtime" || name == "checkpoint-adjacency-interface" || name == "checkpoint-adjacency-lan-priority" || name == "checkpoint-adjacency-level" || name == "checkpoint-adjacency-object-id" || name == "checkpoint-adjacency-snpa" || name == "checkpoint-adjacency-system-id" || name == "interface-name" || name == "level" || name == "system-id")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::CheckpointAdjacencyPerAddressFamilyNextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "checkpoint-adjacency-per-address-family-next-hop"; yang_parent_name = "checkpoint-adjacency"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::~CheckpointAdjacencyPerAddressFamilyNextHop()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency-per-address-family-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterfaces()
{

    yang_name = "checkpoint-interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointInterfaces::~CheckpointInterfaces()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_data() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-interface")
    {
        for(auto const & c : checkpoint_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface>();
        c->parent = this;
        checkpoint_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-interface")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::CheckpointInterface()
    :
    interface_name{YType::str, "interface-name"},
    checkpoint_interface_handle{YType::str, "checkpoint-interface-handle"},
    checkpoint_object_id{YType::uint32, "checkpoint-object-id"},
    dis_areas{YType::enumeration, "dis-areas"},
    has_achieved_ld_pv6_sync{YType::boolean, "has-achieved-ld-pv6-sync"},
    has_achieved_ldp_sync{YType::boolean, "has-achieved-ldp-sync"},
    has_adjacency{YType::boolean, "has-adjacency"},
    has_joined_mcast_group{YType::boolean, "has-joined-mcast-group"},
    interface_name_xr{YType::str, "interface-name-xr"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    local_snpa{YType::str, "local-snpa"}
{

    yang_name = "checkpoint-interface"; yang_parent_name = "checkpoint-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::~CheckpointInterface()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_data() const
{
    return interface_name.is_set
	|| checkpoint_interface_handle.is_set
	|| checkpoint_object_id.is_set
	|| dis_areas.is_set
	|| has_achieved_ld_pv6_sync.is_set
	|| has_achieved_ldp_sync.is_set
	|| has_adjacency.is_set
	|| has_joined_mcast_group.is_set
	|| interface_name_xr.is_set
	|| local_circuit_number.is_set
	|| local_snpa.is_set;
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_interface_handle.yfilter)
	|| ydk::is_set(checkpoint_object_id.yfilter)
	|| ydk::is_set(dis_areas.yfilter)
	|| ydk::is_set(has_achieved_ld_pv6_sync.yfilter)
	|| ydk::is_set(has_achieved_ldp_sync.yfilter)
	|| ydk::is_set(has_adjacency.yfilter)
	|| ydk::is_set(has_joined_mcast_group.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(local_snpa.yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_interface_handle.is_set || is_set(checkpoint_interface_handle.yfilter)) leaf_name_data.push_back(checkpoint_interface_handle.get_name_leafdata());
    if (checkpoint_object_id.is_set || is_set(checkpoint_object_id.yfilter)) leaf_name_data.push_back(checkpoint_object_id.get_name_leafdata());
    if (dis_areas.is_set || is_set(dis_areas.yfilter)) leaf_name_data.push_back(dis_areas.get_name_leafdata());
    if (has_achieved_ld_pv6_sync.is_set || is_set(has_achieved_ld_pv6_sync.yfilter)) leaf_name_data.push_back(has_achieved_ld_pv6_sync.get_name_leafdata());
    if (has_achieved_ldp_sync.is_set || is_set(has_achieved_ldp_sync.yfilter)) leaf_name_data.push_back(has_achieved_ldp_sync.get_name_leafdata());
    if (has_adjacency.is_set || is_set(has_adjacency.yfilter)) leaf_name_data.push_back(has_adjacency.get_name_leafdata());
    if (has_joined_mcast_group.is_set || is_set(has_joined_mcast_group.yfilter)) leaf_name_data.push_back(has_joined_mcast_group.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (local_snpa.is_set || is_set(local_snpa.yfilter)) leaf_name_data.push_back(local_snpa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle = value;
        checkpoint_interface_handle.value_namespace = name_space;
        checkpoint_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id = value;
        checkpoint_object_id.value_namespace = name_space;
        checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-areas")
    {
        dis_areas = value;
        dis_areas.value_namespace = name_space;
        dis_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync = value;
        has_achieved_ld_pv6_sync.value_namespace = name_space;
        has_achieved_ld_pv6_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync = value;
        has_achieved_ldp_sync.value_namespace = name_space;
        has_achieved_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency = value;
        has_adjacency.value_namespace = name_space;
        has_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group = value;
        has_joined_mcast_group.value_namespace = name_space;
        has_joined_mcast_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-snpa")
    {
        local_snpa = value;
        local_snpa.value_namespace = name_space;
        local_snpa.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle.yfilter = yfilter;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "dis-areas")
    {
        dis_areas.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency.yfilter = yfilter;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "local-snpa")
    {
        local_snpa.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "checkpoint-interface-handle" || name == "checkpoint-object-id" || name == "dis-areas" || name == "has-achieved-ld-pv6-sync" || name == "has-achieved-ldp-sync" || name == "has-adjacency" || name == "has-joined-mcast-group" || name == "interface-name-xr" || name == "local-circuit-number" || name == "local-snpa")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsps()
{

    yang_name = "checkpoint-lsps"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointLsps::~CheckpointLsps()
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_data() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointLsps::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-lsp")
    {
        for(auto const & c : checkpoint_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointLsps::CheckpointLsp>();
        c->parent = this;
        checkpoint_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::CheckpointLsp()
    :
    checkpoint_lsp_id{YType::str, "checkpoint-lsp-id"},
    checkpoint_lsp_level{YType::uint8, "checkpoint-lsp-level"},
    checkpoint_lsp_local_flag{YType::boolean, "checkpoint-lsp-local-flag"},
    checkpoint_lsp_object_id{YType::uint32, "checkpoint-lsp-object-id"},
    level{YType::enumeration, "level"},
    lsp_id{YType::str, "lsp-id"}
{

    yang_name = "checkpoint-lsp"; yang_parent_name = "checkpoint-lsps"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::~CheckpointLsp()
{
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_data() const
{
    return checkpoint_lsp_id.is_set
	|| checkpoint_lsp_level.is_set
	|| checkpoint_lsp_local_flag.is_set
	|| checkpoint_lsp_object_id.is_set
	|| level.is_set
	|| lsp_id.is_set;
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_lsp_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_level.yfilter)
	|| ydk::is_set(checkpoint_lsp_local_flag.yfilter)
	|| ydk::is_set(checkpoint_lsp_object_id.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_lsp_id.is_set || is_set(checkpoint_lsp_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_id.get_name_leafdata());
    if (checkpoint_lsp_level.is_set || is_set(checkpoint_lsp_level.yfilter)) leaf_name_data.push_back(checkpoint_lsp_level.get_name_leafdata());
    if (checkpoint_lsp_local_flag.is_set || is_set(checkpoint_lsp_local_flag.yfilter)) leaf_name_data.push_back(checkpoint_lsp_local_flag.get_name_leafdata());
    if (checkpoint_lsp_object_id.is_set || is_set(checkpoint_lsp_object_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_object_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id = value;
        checkpoint_lsp_id.value_namespace = name_space;
        checkpoint_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level = value;
        checkpoint_lsp_level.value_namespace = name_space;
        checkpoint_lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag = value;
        checkpoint_lsp_local_flag.value_namespace = name_space;
        checkpoint_lsp_local_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id = value;
        checkpoint_lsp_object_id.value_namespace = name_space;
        checkpoint_lsp_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp-id" || name == "checkpoint-lsp-level" || name == "checkpoint-lsp-local-flag" || name == "checkpoint-lsp-object-id" || name == "level" || name == "lsp-id")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnels()
{

    yang_name = "checkpoint-te-tunnels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointTeTunnels::~CheckpointTeTunnels()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_data() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-te-tunnel")
    {
        for(auto const & c : checkpoint_te_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel>();
        c->parent = this;
        checkpoint_te_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_te_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::CheckpointTeTunnel()
    :
    checkpoint_te_bandwidth{YType::uint32, "checkpoint-te-bandwidth"},
    checkpoint_te_flags{YType::uint32, "checkpoint-te-flags"},
    checkpoint_te_interface{YType::str, "checkpoint-te-interface"},
    checkpoint_te_level{YType::enumeration, "checkpoint-te-level"},
    checkpoint_te_metric{YType::int32, "checkpoint-te-metric"},
    checkpoint_te_metric_mode{YType::enumeration, "checkpoint-te-metric-mode"},
    checkpoint_te_nexthop{YType::str, "checkpoint-te-nexthop"},
    checkpoint_te_object_id{YType::uint32, "checkpoint-te-object-id"},
    checkpoint_te_system_id{YType::str, "checkpoint-te-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"}
{

    yang_name = "checkpoint-te-tunnel"; yang_parent_name = "checkpoint-te-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::~CheckpointTeTunnel()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_data() const
{
    return checkpoint_te_bandwidth.is_set
	|| checkpoint_te_flags.is_set
	|| checkpoint_te_interface.is_set
	|| checkpoint_te_level.is_set
	|| checkpoint_te_metric.is_set
	|| checkpoint_te_metric_mode.is_set
	|| checkpoint_te_nexthop.is_set
	|| checkpoint_te_object_id.is_set
	|| checkpoint_te_system_id.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_te_bandwidth.yfilter)
	|| ydk::is_set(checkpoint_te_flags.yfilter)
	|| ydk::is_set(checkpoint_te_interface.yfilter)
	|| ydk::is_set(checkpoint_te_level.yfilter)
	|| ydk::is_set(checkpoint_te_metric.yfilter)
	|| ydk::is_set(checkpoint_te_metric_mode.yfilter)
	|| ydk::is_set(checkpoint_te_nexthop.yfilter)
	|| ydk::is_set(checkpoint_te_object_id.yfilter)
	|| ydk::is_set(checkpoint_te_system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_te_bandwidth.is_set || is_set(checkpoint_te_bandwidth.yfilter)) leaf_name_data.push_back(checkpoint_te_bandwidth.get_name_leafdata());
    if (checkpoint_te_flags.is_set || is_set(checkpoint_te_flags.yfilter)) leaf_name_data.push_back(checkpoint_te_flags.get_name_leafdata());
    if (checkpoint_te_interface.is_set || is_set(checkpoint_te_interface.yfilter)) leaf_name_data.push_back(checkpoint_te_interface.get_name_leafdata());
    if (checkpoint_te_level.is_set || is_set(checkpoint_te_level.yfilter)) leaf_name_data.push_back(checkpoint_te_level.get_name_leafdata());
    if (checkpoint_te_metric.is_set || is_set(checkpoint_te_metric.yfilter)) leaf_name_data.push_back(checkpoint_te_metric.get_name_leafdata());
    if (checkpoint_te_metric_mode.is_set || is_set(checkpoint_te_metric_mode.yfilter)) leaf_name_data.push_back(checkpoint_te_metric_mode.get_name_leafdata());
    if (checkpoint_te_nexthop.is_set || is_set(checkpoint_te_nexthop.yfilter)) leaf_name_data.push_back(checkpoint_te_nexthop.get_name_leafdata());
    if (checkpoint_te_object_id.is_set || is_set(checkpoint_te_object_id.yfilter)) leaf_name_data.push_back(checkpoint_te_object_id.get_name_leafdata());
    if (checkpoint_te_system_id.is_set || is_set(checkpoint_te_system_id.yfilter)) leaf_name_data.push_back(checkpoint_te_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth = value;
        checkpoint_te_bandwidth.value_namespace = name_space;
        checkpoint_te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags = value;
        checkpoint_te_flags.value_namespace = name_space;
        checkpoint_te_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface = value;
        checkpoint_te_interface.value_namespace = name_space;
        checkpoint_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level = value;
        checkpoint_te_level.value_namespace = name_space;
        checkpoint_te_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric = value;
        checkpoint_te_metric.value_namespace = name_space;
        checkpoint_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode = value;
        checkpoint_te_metric_mode.value_namespace = name_space;
        checkpoint_te_metric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop = value;
        checkpoint_te_nexthop.value_namespace = name_space;
        checkpoint_te_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id = value;
        checkpoint_te_object_id.value_namespace = name_space;
        checkpoint_te_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id = value;
        checkpoint_te_system_id.value_namespace = name_space;
        checkpoint_te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-bandwidth" || name == "checkpoint-te-flags" || name == "checkpoint-te-interface" || name == "checkpoint-te-level" || name == "checkpoint-te-metric" || name == "checkpoint-te-metric-mode" || name == "checkpoint-te-nexthop" || name == "checkpoint-te-object-id" || name == "checkpoint-te-system-id" || name == "interface-name" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::ErrorLog()
{

    yang_name = "error-log"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::ErrorLog::~ErrorLog()
{
}

bool Isis::Instances::Instance::ErrorLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::ErrorLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::LogEntry()
    :
    error_code{YType::uint32, "error-code"},
    error_log_level{YType::enumeration, "error-log-level"},
    error_reason{YType::str, "error-reason"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "error-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::ErrorLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_data() const
{
    return error_code.is_set
	|| error_log_level.is_set
	|| error_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_log_level.yfilter)
	|| ydk::is_set(error_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_log_level.is_set || is_set(error_log_level.yfilter)) leaf_name_data.push_back(error_log_level.get_name_leafdata());
    if (error_reason.is_set || is_set(error_reason.yfilter)) leaf_name_data.push_back(error_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-log-level")
    {
        error_log_level = value;
        error_log_level.value_namespace = name_space;
        error_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-reason")
    {
        error_reason = value;
        error_reason.value_namespace = name_space;
        error_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-log-level")
    {
        error_log_level.yfilter = yfilter;
    }
    if(value_path == "error-reason")
    {
        error_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "error-code" || name == "error-log-level" || name == "error-reason")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::HostNames::HostNames()
{

    yang_name = "host-names"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::HostNames::~HostNames()
{
}

bool Isis::Instances::Instance::HostNames::has_data() const
{
    for (std::size_t index=0; index<host_name.size(); index++)
    {
        if(host_name[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::HostNames::has_operation() const
{
    for (std::size_t index=0; index<host_name.size(); index++)
    {
        if(host_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::HostNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name")
    {
        for(auto const & c : host_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::HostNames::HostName>();
        c->parent = this;
        host_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::HostNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::HostNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::HostNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::HostNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name")
        return true;
    return false;
}

Isis::Instances::Instance::HostNames::HostName::HostName()
    :
    system_id{YType::str, "system-id"},
    host_levels{YType::enumeration, "host-levels"},
    host_name{YType::str, "host-name"},
    local_is_flag{YType::boolean, "local-is-flag"}
{

    yang_name = "host-name"; yang_parent_name = "host-names"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::HostNames::HostName::~HostName()
{
}

bool Isis::Instances::Instance::HostNames::HostName::has_data() const
{
    return system_id.is_set
	|| host_levels.is_set
	|| host_name.is_set
	|| local_is_flag.is_set;
}

bool Isis::Instances::Instance::HostNames::HostName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(host_levels.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(local_is_flag.yfilter);
}

std::string Isis::Instances::Instance::HostNames::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name" <<"[system-id='" <<system_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::HostNames::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (host_levels.is_set || is_set(host_levels.yfilter)) leaf_name_data.push_back(host_levels.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (local_is_flag.is_set || is_set(local_is_flag.yfilter)) leaf_name_data.push_back(local_is_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::HostNames::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::HostNames::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::HostNames::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-levels")
    {
        host_levels = value;
        host_levels.value_namespace = name_space;
        host_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag = value;
        local_is_flag.value_namespace = name_space;
        local_is_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::HostNames::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "host-levels")
    {
        host_levels.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::HostNames::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "host-levels" || name == "host-name" || name == "local-is-flag")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistics()
{

    yang_name = "interface-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_media_type{YType::enumeration, "interface-media-type"},
    traffic_interface{YType::str, "traffic-interface"}
    	,
    p2p_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>())
{
    p2p_statistics->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_media_type.is_set
	|| traffic_interface.is_set
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| ydk::is_set(traffic_interface.yfilter)
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (traffic_interface.is_set || is_set(traffic_interface.yfilter)) leaf_name_data.push_back(traffic_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-statistics")
    {
        if(p2p_statistics == nullptr)
        {
            p2p_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>();
        }
        return p2p_statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2p_statistics != nullptr)
    {
        children["p2p-statistics"] = p2p_statistics;
    }

    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface = value;
        traffic_interface.value_namespace = name_space;
        traffic_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-statistics" || name == "per-area-data" || name == "interface-name" || name == "interface-media-type" || name == "traffic-interface")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::P2PStatistics()
    :
    lsp_retransmit_count{YType::uint32, "lsp-retransmit-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>())
{
    iih_count->parent = this;

    yang_name = "p2p-statistics"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::~P2PStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_data() const
{
    return lsp_retransmit_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_retransmit_count.yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_retransmit_count.is_set || is_set(lsp_retransmit_count.yfilter)) leaf_name_data.push_back(lsp_retransmit_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count = value;
        lsp_retransmit_count.value_namespace = name_space;
        lsp_retransmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count.yfilter = yfilter;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "lsp-retransmit-count" || name == "memory-exhausted-iih-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "p2p-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>())
	,statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>())
{
    lan_data->parent = this;
    statistics->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_data() const
{
    return level.is_set
	|| (lan_data !=  nullptr && lan_data->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>();
        }
        return lan_data;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "statistics" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::LanData()
    :
    dis_election_count{YType::uint32, "dis-election-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>())
{
    iih_count->parent = this;

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_data() const
{
    return dis_election_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dis_election_count.yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dis_election_count.is_set || is_set(dis_election_count.yfilter)) leaf_name_data.push_back(dis_election_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dis-election-count")
    {
        dis_election_count = value;
        dis_election_count.value_namespace = name_space;
        dis_election_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dis-election-count")
    {
        dis_election_count.yfilter = yfilter;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "dis-election-count" || name == "memory-exhausted-iih-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "lan-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::Statistics()
    :
    lsp_drop_count{YType::uint32, "lsp-drop-count"},
    lsp_flooding_dup_count{YType::uint32, "lsp-flooding-dup-count"}
    	,
    csnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>())
	,lsp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>())
	,psnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>())
{
    csnp_count->parent = this;
    lsp_count->parent = this;
    psnp_count->parent = this;

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_data() const
{
    return lsp_drop_count.is_set
	|| lsp_flooding_dup_count.is_set
	|| (csnp_count !=  nullptr && csnp_count->has_data())
	|| (lsp_count !=  nullptr && lsp_count->has_data())
	|| (psnp_count !=  nullptr && psnp_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_drop_count.yfilter)
	|| ydk::is_set(lsp_flooding_dup_count.yfilter)
	|| (csnp_count !=  nullptr && csnp_count->has_operation())
	|| (lsp_count !=  nullptr && lsp_count->has_operation())
	|| (psnp_count !=  nullptr && psnp_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_drop_count.is_set || is_set(lsp_drop_count.yfilter)) leaf_name_data.push_back(lsp_drop_count.get_name_leafdata());
    if (lsp_flooding_dup_count.is_set || is_set(lsp_flooding_dup_count.yfilter)) leaf_name_data.push_back(lsp_flooding_dup_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-count")
    {
        if(csnp_count == nullptr)
        {
            csnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>();
        }
        return csnp_count;
    }

    if(child_yang_name == "lsp-count")
    {
        if(lsp_count == nullptr)
        {
            lsp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>();
        }
        return lsp_count;
    }

    if(child_yang_name == "psnp-count")
    {
        if(psnp_count == nullptr)
        {
            psnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>();
        }
        return psnp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csnp_count != nullptr)
    {
        children["csnp-count"] = csnp_count;
    }

    if(lsp_count != nullptr)
    {
        children["lsp-count"] = lsp_count;
    }

    if(psnp_count != nullptr)
    {
        children["psnp-count"] = psnp_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count = value;
        lsp_drop_count.value_namespace = name_space;
        lsp_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count = value;
        lsp_flooding_dup_count.value_namespace = name_space;
        lsp_flooding_dup_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count.yfilter = yfilter;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-count" || name == "lsp-count" || name == "psnp-count" || name == "lsp-drop-count" || name == "lsp-flooding-dup-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::CsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "csnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::~CsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::LspCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "lsp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::~LspCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::PsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "psnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::~PsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::~Interfaces()
{
}

bool Isis::Instances::Instance::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configured_circuit_type{YType::enumeration, "configured-circuit-type"},
    is_type{YType::enumeration, "is-type"},
    mesh_group{YType::uint32, "mesh-group"},
    nsr_intf{YType::boolean, "nsr-intf"}
    	,
    configured_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>())
	,interface_status_and_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>())
{
    configured_status->parent = this;
    interface_status_and_data->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| configured_circuit_type.is_set
	|| is_type.is_set
	|| mesh_group.is_set
	|| nsr_intf.is_set
	|| (configured_status !=  nullptr && configured_status->has_data())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configured_circuit_type.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(nsr_intf.yfilter)
	|| (configured_status !=  nullptr && configured_status->has_operation())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configured_circuit_type.is_set || is_set(configured_circuit_type.yfilter)) leaf_name_data.push_back(configured_circuit_type.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (nsr_intf.is_set || is_set(nsr_intf.yfilter)) leaf_name_data.push_back(nsr_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-status")
    {
        if(configured_status == nullptr)
        {
            configured_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>();
        }
        return configured_status;
    }

    if(child_yang_name == "interface-status-and-data")
    {
        if(interface_status_and_data == nullptr)
        {
            interface_status_and_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>();
        }
        return interface_status_and_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_status != nullptr)
    {
        children["configured-status"] = configured_status;
    }

    if(interface_status_and_data != nullptr)
    {
        children["interface-status-and-data"] = interface_status_and_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type = value;
        configured_circuit_type.value_namespace = name_space;
        configured_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf = value;
        nsr_intf.value_namespace = name_space;
        nsr_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-status" || name == "interface-status-and-data" || name == "interface-name" || name == "configured-circuit-type" || name == "is-type" || name == "mesh-group" || name == "nsr-intf")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::ConfiguredStatus()
    :
    adjacency_form_status{YType::boolean, "adjacency-form-status"},
    adv_prefix_status{YType::boolean, "adv-prefix-status"}
{

    yang_name = "configured-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::~ConfiguredStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_data() const
{
    return adjacency_form_status.is_set
	|| adv_prefix_status.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_form_status.yfilter)
	|| ydk::is_set(adv_prefix_status.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_form_status.is_set || is_set(adjacency_form_status.yfilter)) leaf_name_data.push_back(adjacency_form_status.get_name_leafdata());
    if (adv_prefix_status.is_set || is_set(adv_prefix_status.yfilter)) leaf_name_data.push_back(adv_prefix_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status = value;
        adjacency_form_status.value_namespace = name_space;
        adjacency_form_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status = value;
        adv_prefix_status.value_namespace = name_space;
        adv_prefix_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status.yfilter = yfilter;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::InterfaceStatusAndData()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>())
	,enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "interface-status-and-data"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::~InterfaceStatusAndData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status-and-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        children["enabled"] = enabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::Enabled()
    :
    bandwidth{YType::uint32, "bandwidth"},
    enabled_circuit_type{YType::enumeration, "enabled-circuit-type"},
    interface_media_type{YType::enumeration, "interface-media-type"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    rsi_srlg_registered{YType::boolean, "rsi-srlg-registered"}
    	,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>())
	,adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>())
	,bfd_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>())
	,clns_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>())
	,p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData>())
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    bfd_data->parent = this;
    clns_data->parent = this;
    p2p_data->parent = this;

    yang_name = "enabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::~Enabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_data() const
{
    for (std::size_t index=0; index<per_address_family_data.size(); index++)
    {
        if(per_address_family_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enabled_circuit_type.is_set
	|| interface_media_type.is_set
	|| local_circuit_number.is_set
	|| rsi_srlg_registered.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (bfd_data !=  nullptr && bfd_data->has_data())
	|| (clns_data !=  nullptr && clns_data->has_data())
	|| (p2p_data !=  nullptr && p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_operation() const
{
    for (std::size_t index=0; index<per_address_family_data.size(); index++)
    {
        if(per_address_family_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enabled_circuit_type.yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(rsi_srlg_registered.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (bfd_data !=  nullptr && bfd_data->has_operation())
	|| (clns_data !=  nullptr && clns_data->has_operation())
	|| (p2p_data !=  nullptr && p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enabled_circuit_type.is_set || is_set(enabled_circuit_type.yfilter)) leaf_name_data.push_back(enabled_circuit_type.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (rsi_srlg_registered.is_set || is_set(rsi_srlg_registered.yfilter)) leaf_name_data.push_back(rsi_srlg_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "bfd-data")
    {
        if(bfd_data == nullptr)
        {
            bfd_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>();
        }
        return bfd_data;
    }

    if(child_yang_name == "clns-data")
    {
        if(clns_data == nullptr)
        {
            clns_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>();
        }
        return clns_data;
    }

    if(child_yang_name == "p2p-data")
    {
        if(p2p_data == nullptr)
        {
            p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData>();
        }
        return p2p_data;
    }

    if(child_yang_name == "per-address-family-data")
    {
        for(auto const & c : per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData>();
        c->parent = this;
        per_address_family_data.push_back(c);
        return c;
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    if(child_yang_name == "per-topology-data")
    {
        for(auto const & c : per_topology_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData>();
        c->parent = this;
        per_topology_data.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        for(auto const & c : underlying_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_form_status != nullptr)
    {
        children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        children["adv-prefix-status"] = adv_prefix_status;
    }

    if(bfd_data != nullptr)
    {
        children["bfd-data"] = bfd_data;
    }

    if(clns_data != nullptr)
    {
        children["clns-data"] = clns_data;
    }

    if(p2p_data != nullptr)
    {
        children["p2p-data"] = p2p_data;
    }

    for (auto const & c : per_address_family_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : per_topology_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : underlying_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type = value;
        enabled_circuit_type.value_namespace = name_space;
        enabled_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered = value;
        rsi_srlg_registered.value_namespace = name_space;
        rsi_srlg_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type.yfilter = yfilter;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "bfd-data" || name == "clns-data" || name == "p2p-data" || name == "per-address-family-data" || name == "per-area-data" || name == "per-topology-data" || name == "underlying-interface" || name == "bandwidth" || name == "enabled-circuit-type" || name == "interface-media-type" || name == "local-circuit-number" || name == "rsi-srlg-registered")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::BfdData()
    :
    enabled{YType::boolean, "enabled"},
    interval{YType::uint32, "interval"},
    ipv6_enabled{YType::boolean, "ipv6-enabled"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "bfd-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::~BfdData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_data() const
{
    return enabled.is_set
	|| interval.is_set
	|| ipv6_enabled.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(ipv6_enabled.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (ipv6_enabled.is_set || is_set(ipv6_enabled.yfilter)) leaf_name_data.push_back(ipv6_enabled.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled = value;
        ipv6_enabled.value_namespace = name_space;
        ipv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "interval" || name == "ipv6-enabled" || name == "multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsData()
    :
    last_lsp_id_transmitted{YType::str, "last-lsp-id-transmitted"},
    last_lsp_level_transmitted{YType::enumeration, "last-lsp-level-transmitted"},
    lsp_transmit_requested_flag{YType::boolean, "lsp-transmit-requested-flag"},
    lsp_transmitted_flag{YType::boolean, "lsp-transmitted-flag"},
    lsp_txmitd_b2b_limit{YType::uint32, "lsp-txmitd-b2b-limit"},
    lsp_txmt_b2b_msecs{YType::uint32, "lsp-txmt-b2b-msecs"},
    time_until_next_lsp{YType::uint32, "time-until-next-lsp"}
    	,
    clns_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>())
	,media_specific_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>())
	,mtu_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>())
	,snpa_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>())
{
    clns_status->parent = this;
    media_specific_state->parent = this;
    mtu_info->parent = this;
    snpa_state->parent = this;

    yang_name = "clns-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::~ClnsData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_data() const
{
    return last_lsp_id_transmitted.is_set
	|| last_lsp_level_transmitted.is_set
	|| lsp_transmit_requested_flag.is_set
	|| lsp_transmitted_flag.is_set
	|| lsp_txmitd_b2b_limit.is_set
	|| lsp_txmt_b2b_msecs.is_set
	|| time_until_next_lsp.is_set
	|| (clns_status !=  nullptr && clns_status->has_data())
	|| (media_specific_state !=  nullptr && media_specific_state->has_data())
	|| (mtu_info !=  nullptr && mtu_info->has_data())
	|| (snpa_state !=  nullptr && snpa_state->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_lsp_id_transmitted.yfilter)
	|| ydk::is_set(last_lsp_level_transmitted.yfilter)
	|| ydk::is_set(lsp_transmit_requested_flag.yfilter)
	|| ydk::is_set(lsp_transmitted_flag.yfilter)
	|| ydk::is_set(lsp_txmitd_b2b_limit.yfilter)
	|| ydk::is_set(lsp_txmt_b2b_msecs.yfilter)
	|| ydk::is_set(time_until_next_lsp.yfilter)
	|| (clns_status !=  nullptr && clns_status->has_operation())
	|| (media_specific_state !=  nullptr && media_specific_state->has_operation())
	|| (mtu_info !=  nullptr && mtu_info->has_operation())
	|| (snpa_state !=  nullptr && snpa_state->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_lsp_id_transmitted.is_set || is_set(last_lsp_id_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_id_transmitted.get_name_leafdata());
    if (last_lsp_level_transmitted.is_set || is_set(last_lsp_level_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_level_transmitted.get_name_leafdata());
    if (lsp_transmit_requested_flag.is_set || is_set(lsp_transmit_requested_flag.yfilter)) leaf_name_data.push_back(lsp_transmit_requested_flag.get_name_leafdata());
    if (lsp_transmitted_flag.is_set || is_set(lsp_transmitted_flag.yfilter)) leaf_name_data.push_back(lsp_transmitted_flag.get_name_leafdata());
    if (lsp_txmitd_b2b_limit.is_set || is_set(lsp_txmitd_b2b_limit.yfilter)) leaf_name_data.push_back(lsp_txmitd_b2b_limit.get_name_leafdata());
    if (lsp_txmt_b2b_msecs.is_set || is_set(lsp_txmt_b2b_msecs.yfilter)) leaf_name_data.push_back(lsp_txmt_b2b_msecs.get_name_leafdata());
    if (time_until_next_lsp.is_set || is_set(time_until_next_lsp.yfilter)) leaf_name_data.push_back(time_until_next_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-status")
    {
        if(clns_status == nullptr)
        {
            clns_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>();
        }
        return clns_status;
    }

    if(child_yang_name == "media-specific-state")
    {
        if(media_specific_state == nullptr)
        {
            media_specific_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>();
        }
        return media_specific_state;
    }

    if(child_yang_name == "mtu-info")
    {
        if(mtu_info == nullptr)
        {
            mtu_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>();
        }
        return mtu_info;
    }

    if(child_yang_name == "snpa-state")
    {
        if(snpa_state == nullptr)
        {
            snpa_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>();
        }
        return snpa_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns_status != nullptr)
    {
        children["clns-status"] = clns_status;
    }

    if(media_specific_state != nullptr)
    {
        children["media-specific-state"] = media_specific_state;
    }

    if(mtu_info != nullptr)
    {
        children["mtu-info"] = mtu_info;
    }

    if(snpa_state != nullptr)
    {
        children["snpa-state"] = snpa_state;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted = value;
        last_lsp_id_transmitted.value_namespace = name_space;
        last_lsp_id_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted = value;
        last_lsp_level_transmitted.value_namespace = name_space;
        last_lsp_level_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag = value;
        lsp_transmit_requested_flag.value_namespace = name_space;
        lsp_transmit_requested_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag = value;
        lsp_transmitted_flag.value_namespace = name_space;
        lsp_transmitted_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit = value;
        lsp_txmitd_b2b_limit.value_namespace = name_space;
        lsp_txmitd_b2b_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs = value;
        lsp_txmt_b2b_msecs.value_namespace = name_space;
        lsp_txmt_b2b_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp = value;
        time_until_next_lsp.value_namespace = name_space;
        time_until_next_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted.yfilter = yfilter;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit.yfilter = yfilter;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs.yfilter = yfilter;
    }
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-status" || name == "media-specific-state" || name == "mtu-info" || name == "snpa-state" || name == "last-lsp-id-transmitted" || name == "last-lsp-level-transmitted" || name == "lsp-transmit-requested-flag" || name == "lsp-transmitted-flag" || name == "lsp-txmitd-b2b-limit" || name == "lsp-txmt-b2b-msecs" || name == "time-until-next-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsStatus()
    :
    status{YType::enumeration, "status"}
    	,
    clns_down_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>())
{
    clns_down_info->parent = this;

    yang_name = "clns-status"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::~ClnsStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_data() const
{
    return status.is_set
	|| (clns_down_info !=  nullptr && clns_down_info->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (clns_down_info !=  nullptr && clns_down_info->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-down-info")
    {
        if(clns_down_info == nullptr)
        {
            clns_down_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>();
        }
        return clns_down_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns_down_info != nullptr)
    {
        children["clns-down-info"] = clns_down_info;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-down-info" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::ClnsDownInfo()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "clns-down-info"; yang_parent_name = "clns-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::~ClnsDownInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-down-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::MediaSpecificState()
    :
    clns_media_type{YType::enumeration, "clns-media-type"}
    	,
    clns_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>())
	,clns_p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData>())
{
    clns_lan_data->parent = this;
    clns_p2p_data->parent = this;

    yang_name = "media-specific-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::~MediaSpecificState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_data() const
{
    return clns_media_type.is_set
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_data())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clns_media_type.yfilter)
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_operation())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-specific-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns_media_type.is_set || is_set(clns_media_type.yfilter)) leaf_name_data.push_back(clns_media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-lan-data")
    {
        if(clns_lan_data == nullptr)
        {
            clns_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>();
        }
        return clns_lan_data;
    }

    if(child_yang_name == "clns-p2p-data")
    {
        if(clns_p2p_data == nullptr)
        {
            clns_p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData>();
        }
        return clns_p2p_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns_lan_data != nullptr)
    {
        children["clns-lan-data"] = clns_lan_data;
    }

    if(clns_p2p_data != nullptr)
    {
        children["clns-p2p-data"] = clns_p2p_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type = value;
        clns_media_type.value_namespace = name_space;
        clns_media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-lan-data" || name == "clns-p2p-data" || name == "clns-media-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::ClnsLanData()
{

    yang_name = "clns-lan-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::~ClnsLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-area-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "clns-lan-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_data() const
{
    return level.is_set
	|| (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast_status != nullptr)
    {
        children["multicast-status"] = multicast_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_data() const
{
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::ClnsP2PData()
    :
    p2p_over_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>())
{
    p2p_over_lan_data->parent = this;

    yang_name = "clns-p2p-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::~ClnsP2PData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_data() const
{
    return (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_operation() const
{
    return is_set(yfilter)
	|| (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-over-lan-data")
    {
        if(p2p_over_lan_data == nullptr)
        {
            p2p_over_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>();
        }
        return p2p_over_lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2p_over_lan_data != nullptr)
    {
        children["p2p-over-lan-data"] = p2p_over_lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-over-lan-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::P2POverLanData()
    :
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "p2p-over-lan-data"; yang_parent_name = "clns-p2p-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::~P2POverLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_data() const
{
    return (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-over-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast_status != nullptr)
    {
        children["multicast-status"] = multicast_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "p2p-over-lan-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_data() const
{
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::MtuInfo()
    :
    mtu{YType::uint32, "mtu"},
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>())
{
    invalid->parent = this;

    yang_name = "mtu-info"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::~MtuInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_data() const
{
    return mtu.is_set
	|| status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "mtu" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "mtu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::SnpaState()
    :
    status{YType::enumeration, "status"}
    	,
    known(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>())
{
    known->parent = this;
    unknown->parent = this;

    yang_name = "snpa-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::~SnpaState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_data() const
{
    return status.is_set
	|| (known !=  nullptr && known->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (known !=  nullptr && known->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snpa-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "known")
    {
        if(known == nullptr)
        {
            known = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>();
        }
        return known;
    }

    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>();
        }
        return unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(known != nullptr)
    {
        children["known"] = known;
    }

    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "known" || name == "unknown" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::Known()
    :
    snpa{YType::str, "snpa"}
{

    yang_name = "known"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::~Known()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_data() const
{
    return snpa.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snpa.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snpa.is_set || is_set(snpa.yfilter)) leaf_name_data.push_back(snpa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snpa")
    {
        snpa = value;
        snpa.value_namespace = name_space;
        snpa.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snpa")
    {
        snpa.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snpa")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::P2PData()
    :
    extended_circuit_number{YType::uint32, "extended-circuit-number"},
    retransmit_lsp_interval{YType::uint32, "retransmit-lsp-interval"},
    retransmit_lsp_queue_size{YType::uint32, "retransmit-lsp-queue-size"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"}
{

    yang_name = "p2p-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::~P2PData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::has_data() const
{
    return extended_circuit_number.is_set
	|| retransmit_lsp_interval.is_set
	|| retransmit_lsp_queue_size.is_set
	|| time_until_next_iih.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_circuit_number.yfilter)
	|| ydk::is_set(retransmit_lsp_interval.yfilter)
	|| ydk::is_set(retransmit_lsp_queue_size.yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_circuit_number.is_set || is_set(extended_circuit_number.yfilter)) leaf_name_data.push_back(extended_circuit_number.get_name_leafdata());
    if (retransmit_lsp_interval.is_set || is_set(retransmit_lsp_interval.yfilter)) leaf_name_data.push_back(retransmit_lsp_interval.get_name_leafdata());
    if (retransmit_lsp_queue_size.is_set || is_set(retransmit_lsp_queue_size.yfilter)) leaf_name_data.push_back(retransmit_lsp_queue_size.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number = value;
        extended_circuit_number.value_namespace = name_space;
        extended_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval = value;
        retransmit_lsp_interval.value_namespace = name_space;
        retransmit_lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size = value;
        retransmit_lsp_queue_size.value_namespace = name_space;
        retransmit_lsp_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size.yfilter = yfilter;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-circuit-number" || name == "retransmit-lsp-interval" || name == "retransmit-lsp-queue-size" || name == "time-until-next-iih")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::PerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    af_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>())
{
    af_status->parent = this;

    yang_name = "per-address-family-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::~PerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (af_status !=  nullptr && af_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (af_status !=  nullptr && af_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-address-family-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-status")
    {
        if(af_status == nullptr)
        {
            af_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>();
        }
        return af_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_status != nullptr)
    {
        children["af-status"] = af_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-status" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfStatus()
    :
    status{YType::enumeration, "status"}
    	,
    af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>())
	,disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>())
{
    af_data->parent = this;
    disabled->parent = this;

    yang_name = "af-status"; yang_parent_name = "per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::~AfStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_data() const
{
    return status.is_set
	|| (af_data !=  nullptr && af_data->has_data())
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (af_data !=  nullptr && af_data->has_operation())
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-data")
    {
        if(af_data == nullptr)
        {
            af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>();
        }
        return af_data;
    }

    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_data != nullptr)
    {
        children["af-data"] = af_data;
    }

    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-data" || name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::AfData()
    :
    forwarding_address_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>())
	,prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>())
	,protocol_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>())
{
    forwarding_address_status->parent = this;
    prefix_status->parent = this;
    protocol_status->parent = this;

    yang_name = "af-data"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_data() const
{
    return (forwarding_address_status !=  nullptr && forwarding_address_status->has_data())
	|| (prefix_status !=  nullptr && prefix_status->has_data())
	|| (protocol_status !=  nullptr && protocol_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_operation())
	|| (prefix_status !=  nullptr && prefix_status->has_operation())
	|| (protocol_status !=  nullptr && protocol_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address-status")
    {
        if(forwarding_address_status == nullptr)
        {
            forwarding_address_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>();
        }
        return forwarding_address_status;
    }

    if(child_yang_name == "prefix-status")
    {
        if(prefix_status == nullptr)
        {
            prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>();
        }
        return prefix_status;
    }

    if(child_yang_name == "protocol-status")
    {
        if(protocol_status == nullptr)
        {
            protocol_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>();
        }
        return protocol_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_address_status != nullptr)
    {
        children["forwarding-address-status"] = forwarding_address_status;
    }

    if(prefix_status != nullptr)
    {
        children["prefix-status"] = prefix_status;
    }

    if(protocol_status != nullptr)
    {
        children["protocol-status"] = protocol_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address-status" || name == "prefix-status" || name == "protocol-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressStatus()
    :
    status{YType::enumeration, "status"}
    	,
    forwarding_address_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>())
{
    forwarding_address_data->parent = this;
    unknown->parent = this;

    yang_name = "forwarding-address-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::~ForwardingAddressStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_data() const
{
    return status.is_set
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address-data")
    {
        if(forwarding_address_data == nullptr)
        {
            forwarding_address_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>();
        }
        return forwarding_address_data;
    }

    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>();
        }
        return unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_address_data != nullptr)
    {
        children["forwarding-address-data"] = forwarding_address_data;
    }

    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address-data" || name == "unknown" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddressData()
    :
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"}
{

    yang_name = "forwarding-address-data"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::~ForwardingAddressData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_data() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_data())
            return true;
    }
    return unnumbered_interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_operation() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address")
    {
        for(auto const & c : forwarding_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress>();
        c->parent = this;
        forwarding_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address" || name == "unnumbered-interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::ForwardingAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "forwarding-address"; yang_parent_name = "forwarding-address-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::~ForwardingAddress()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    prefix_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>())
{
    prefix_data->parent = this;
    unknown->parent = this;

    yang_name = "prefix-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::~PrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_data() const
{
    return status.is_set
	|| (prefix_data !=  nullptr && prefix_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (prefix_data !=  nullptr && prefix_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-data")
    {
        if(prefix_data == nullptr)
        {
            prefix_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>();
        }
        return prefix_data;
    }

    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>();
        }
        return unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_data != nullptr)
    {
        children["prefix-data"] = prefix_data;
    }

    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-data" || name == "unknown" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::PrefixData()
    :
    is_unnumbered{YType::boolean, "is-unnumbered"}
{

    yang_name = "prefix-data"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::~PrefixData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return is_unnumbered.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_unnumbered.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "is-unnumbered")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefix-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::~Prefix()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::ProtocolStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "protocol-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::~ProtocolStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "protocol-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::PerAreaData()
    :
    adjacency_count{YType::uint32, "adjacency-count"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_multiplier{YType::uint32, "hello-multiplier"},
    level{YType::enumeration, "level"},
    lsp_pacing_interval{YType::uint32, "lsp-pacing-interval"},
    psnp_transmit_queue_size{YType::uint32, "psnp-transmit-queue-size"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>())
{
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_data() const
{
    return adjacency_count.is_set
	|| hello_interval.is_set
	|| hello_multiplier.is_set
	|| level.is_set
	|| lsp_pacing_interval.is_set
	|| psnp_transmit_queue_size.is_set
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter)
	|| ydk::is_set(psnp_transmit_queue_size.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_count.is_set || is_set(adjacency_count.yfilter)) leaf_name_data.push_back(adjacency_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());
    if (psnp_transmit_queue_size.is_set || is_set(psnp_transmit_queue_size.yfilter)) leaf_name_data.push_back(psnp_transmit_queue_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-count")
    {
        adjacency_count = value;
        adjacency_count.value_namespace = name_space;
        adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size = value;
        psnp_transmit_queue_size.value_namespace = name_space;
        psnp_transmit_queue_size.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-count")
    {
        adjacency_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "adjacency-count" || name == "hello-interval" || name == "hello-multiplier" || name == "level" || name == "lsp-pacing-interval" || name == "psnp-transmit-queue-size")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::LanData()
    :
    are_we_dis{YType::boolean, "are-we-dis"},
    circuit_lan_id{YType::str, "circuit-lan-id"},
    dispriority{YType::uint8, "dispriority"},
    interface_priority{YType::uint8, "interface-priority"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"}
{

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_data() const
{
    return are_we_dis.is_set
	|| circuit_lan_id.is_set
	|| dispriority.is_set
	|| interface_priority.is_set
	|| time_until_next_iih.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_dis.yfilter)
	|| ydk::is_set(circuit_lan_id.yfilter)
	|| ydk::is_set(dispriority.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_dis.is_set || is_set(are_we_dis.yfilter)) leaf_name_data.push_back(are_we_dis.get_name_leafdata());
    if (circuit_lan_id.is_set || is_set(circuit_lan_id.yfilter)) leaf_name_data.push_back(circuit_lan_id.get_name_leafdata());
    if (dispriority.is_set || is_set(dispriority.yfilter)) leaf_name_data.push_back(dispriority.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-dis")
    {
        are_we_dis = value;
        are_we_dis.value_namespace = name_space;
        are_we_dis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id = value;
        circuit_lan_id.value_namespace = name_space;
        circuit_lan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispriority")
    {
        dispriority = value;
        dispriority.value_namespace = name_space;
        dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-dis")
    {
        are_we_dis.yfilter = yfilter;
    }
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id.yfilter = yfilter;
    }
    if(value_path == "dispriority")
    {
        dispriority.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "are-we-dis" || name == "circuit-lan-id" || name == "dispriority" || name == "interface-priority" || name == "time-until-next-iih")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::PerTopologyData()
    :
    status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>())
	,topology_id(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>())
{
    status->parent = this;
    topology_id->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_data() const
{
    return (status !=  nullptr && status->has_data())
	|| (topology_id !=  nullptr && topology_id->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (topology_id !=  nullptr && topology_id->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>();
        }
        return status;
    }

    if(child_yang_name == "topology-id")
    {
        if(topology_id == nullptr)
        {
            topology_id = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>();
        }
        return topology_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(topology_id != nullptr)
    {
        children["topology-id"] = topology_id;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "topology-id")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Status()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>())
	,enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "status"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::~Status()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        children["enabled"] = enabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Enabled_()
    :
    ld_pv6_sync_status{YType::boolean, "ld-pv6-sync-status"},
    ldp_sync_status{YType::boolean, "ldp-sync-status"},
    level1_lkgp_configured{YType::boolean, "level1-lkgp-configured"},
    level1_metric{YType::uint32, "level1-metric"},
    level1_offset_metric{YType::uint32, "level1-offset-metric"},
    level1_weight{YType::uint32, "level1-weight"},
    level1ldp_sync_enabled{YType::boolean, "level1ldp-sync-enabled"},
    level1pp_configured{YType::boolean, "level1pp-configured"},
    level1pp_metric{YType::uint32, "level1pp-metric"},
    level2_lkgp_configured{YType::boolean, "level2-lkgp-configured"},
    level2_metric{YType::uint32, "level2-metric"},
    level2_offset_metric{YType::uint32, "level2-offset-metric"},
    level2_weight{YType::uint32, "level2-weight"},
    level2ldp_sync_enabled{YType::boolean, "level2ldp-sync-enabled"},
    level2pp_configured{YType::boolean, "level2pp-configured"},
    level2pp_metric{YType::uint32, "level2pp-metric"},
    max_bkp_label_supported{YType::uint8, "max-bkp-label-supported"},
    max_label_supported{YType::uint8, "max-label-supported"},
    max_srte_label_supported{YType::uint8, "max-srte-label-supported"}
    	,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>())
	,adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>())
	,level1_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>())
	,level2_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>())
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    level1_frr->parent = this;
    level2_frr->parent = this;

    yang_name = "enabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::~Enabled_()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_data() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return ld_pv6_sync_status.is_set
	|| ldp_sync_status.is_set
	|| level1_lkgp_configured.is_set
	|| level1_metric.is_set
	|| level1_offset_metric.is_set
	|| level1_weight.is_set
	|| level1ldp_sync_enabled.is_set
	|| level1pp_configured.is_set
	|| level1pp_metric.is_set
	|| level2_lkgp_configured.is_set
	|| level2_metric.is_set
	|| level2_offset_metric.is_set
	|| level2_weight.is_set
	|| level2ldp_sync_enabled.is_set
	|| level2pp_configured.is_set
	|| level2pp_metric.is_set
	|| max_bkp_label_supported.is_set
	|| max_label_supported.is_set
	|| max_srte_label_supported.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (level1_frr !=  nullptr && level1_frr->has_data())
	|| (level2_frr !=  nullptr && level2_frr->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ld_pv6_sync_status.yfilter)
	|| ydk::is_set(ldp_sync_status.yfilter)
	|| ydk::is_set(level1_lkgp_configured.yfilter)
	|| ydk::is_set(level1_metric.yfilter)
	|| ydk::is_set(level1_offset_metric.yfilter)
	|| ydk::is_set(level1_weight.yfilter)
	|| ydk::is_set(level1ldp_sync_enabled.yfilter)
	|| ydk::is_set(level1pp_configured.yfilter)
	|| ydk::is_set(level1pp_metric.yfilter)
	|| ydk::is_set(level2_lkgp_configured.yfilter)
	|| ydk::is_set(level2_metric.yfilter)
	|| ydk::is_set(level2_offset_metric.yfilter)
	|| ydk::is_set(level2_weight.yfilter)
	|| ydk::is_set(level2ldp_sync_enabled.yfilter)
	|| ydk::is_set(level2pp_configured.yfilter)
	|| ydk::is_set(level2pp_metric.yfilter)
	|| ydk::is_set(max_bkp_label_supported.yfilter)
	|| ydk::is_set(max_label_supported.yfilter)
	|| ydk::is_set(max_srte_label_supported.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (level1_frr !=  nullptr && level1_frr->has_operation())
	|| (level2_frr !=  nullptr && level2_frr->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ld_pv6_sync_status.is_set || is_set(ld_pv6_sync_status.yfilter)) leaf_name_data.push_back(ld_pv6_sync_status.get_name_leafdata());
    if (ldp_sync_status.is_set || is_set(ldp_sync_status.yfilter)) leaf_name_data.push_back(ldp_sync_status.get_name_leafdata());
    if (level1_lkgp_configured.is_set || is_set(level1_lkgp_configured.yfilter)) leaf_name_data.push_back(level1_lkgp_configured.get_name_leafdata());
    if (level1_metric.is_set || is_set(level1_metric.yfilter)) leaf_name_data.push_back(level1_metric.get_name_leafdata());
    if (level1_offset_metric.is_set || is_set(level1_offset_metric.yfilter)) leaf_name_data.push_back(level1_offset_metric.get_name_leafdata());
    if (level1_weight.is_set || is_set(level1_weight.yfilter)) leaf_name_data.push_back(level1_weight.get_name_leafdata());
    if (level1ldp_sync_enabled.is_set || is_set(level1ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level1ldp_sync_enabled.get_name_leafdata());
    if (level1pp_configured.is_set || is_set(level1pp_configured.yfilter)) leaf_name_data.push_back(level1pp_configured.get_name_leafdata());
    if (level1pp_metric.is_set || is_set(level1pp_metric.yfilter)) leaf_name_data.push_back(level1pp_metric.get_name_leafdata());
    if (level2_lkgp_configured.is_set || is_set(level2_lkgp_configured.yfilter)) leaf_name_data.push_back(level2_lkgp_configured.get_name_leafdata());
    if (level2_metric.is_set || is_set(level2_metric.yfilter)) leaf_name_data.push_back(level2_metric.get_name_leafdata());
    if (level2_offset_metric.is_set || is_set(level2_offset_metric.yfilter)) leaf_name_data.push_back(level2_offset_metric.get_name_leafdata());
    if (level2_weight.is_set || is_set(level2_weight.yfilter)) leaf_name_data.push_back(level2_weight.get_name_leafdata());
    if (level2ldp_sync_enabled.is_set || is_set(level2ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level2ldp_sync_enabled.get_name_leafdata());
    if (level2pp_configured.is_set || is_set(level2pp_configured.yfilter)) leaf_name_data.push_back(level2pp_configured.get_name_leafdata());
    if (level2pp_metric.is_set || is_set(level2pp_metric.yfilter)) leaf_name_data.push_back(level2pp_metric.get_name_leafdata());
    if (max_bkp_label_supported.is_set || is_set(max_bkp_label_supported.yfilter)) leaf_name_data.push_back(max_bkp_label_supported.get_name_leafdata());
    if (max_label_supported.is_set || is_set(max_label_supported.yfilter)) leaf_name_data.push_back(max_label_supported.get_name_leafdata());
    if (max_srte_label_supported.is_set || is_set(max_srte_label_supported.yfilter)) leaf_name_data.push_back(max_srte_label_supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "level1-frr")
    {
        if(level1_frr == nullptr)
        {
            level1_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>();
        }
        return level1_frr;
    }

    if(child_yang_name == "level2-frr")
    {
        if(level2_frr == nullptr)
        {
            level2_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>();
        }
        return level2_frr;
    }

    if(child_yang_name == "manual-adj-sid")
    {
        for(auto const & c : manual_adj_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_form_status != nullptr)
    {
        children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        children["adv-prefix-status"] = adv_prefix_status;
    }

    if(level1_frr != nullptr)
    {
        children["level1-frr"] = level1_frr;
    }

    if(level2_frr != nullptr)
    {
        children["level2-frr"] = level2_frr;
    }

    for (auto const & c : manual_adj_sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status = value;
        ld_pv6_sync_status.value_namespace = name_space;
        ld_pv6_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status = value;
        ldp_sync_status.value_namespace = name_space;
        ldp_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured = value;
        level1_lkgp_configured.value_namespace = name_space;
        level1_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-metric")
    {
        level1_metric = value;
        level1_metric.value_namespace = name_space;
        level1_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric = value;
        level1_offset_metric.value_namespace = name_space;
        level1_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-weight")
    {
        level1_weight = value;
        level1_weight.value_namespace = name_space;
        level1_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled = value;
        level1ldp_sync_enabled.value_namespace = name_space;
        level1ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured = value;
        level1pp_configured.value_namespace = name_space;
        level1pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric = value;
        level1pp_metric.value_namespace = name_space;
        level1pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured = value;
        level2_lkgp_configured.value_namespace = name_space;
        level2_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-metric")
    {
        level2_metric = value;
        level2_metric.value_namespace = name_space;
        level2_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric = value;
        level2_offset_metric.value_namespace = name_space;
        level2_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-weight")
    {
        level2_weight = value;
        level2_weight.value_namespace = name_space;
        level2_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled = value;
        level2ldp_sync_enabled.value_namespace = name_space;
        level2ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured = value;
        level2pp_configured.value_namespace = name_space;
        level2pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric = value;
        level2pp_metric.value_namespace = name_space;
        level2pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported = value;
        max_bkp_label_supported.value_namespace = name_space;
        max_bkp_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported = value;
        max_label_supported.value_namespace = name_space;
        max_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported = value;
        max_srte_label_supported.value_namespace = name_space;
        max_srte_label_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status.yfilter = yfilter;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level1-metric")
    {
        level1_metric.yfilter = yfilter;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level1-weight")
    {
        level1_weight.yfilter = yfilter;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured.yfilter = yfilter;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric.yfilter = yfilter;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level2-metric")
    {
        level2_metric.yfilter = yfilter;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level2-weight")
    {
        level2_weight.yfilter = yfilter;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured.yfilter = yfilter;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric.yfilter = yfilter;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "level1-frr" || name == "level2-frr" || name == "manual-adj-sid" || name == "ld-pv6-sync-status" || name == "ldp-sync-status" || name == "level1-lkgp-configured" || name == "level1-metric" || name == "level1-offset-metric" || name == "level1-weight" || name == "level1ldp-sync-enabled" || name == "level1pp-configured" || name == "level1pp-metric" || name == "level2-lkgp-configured" || name == "level2-metric" || name == "level2-offset-metric" || name == "level2-weight" || name == "level2ldp-sync-enabled" || name == "level2pp-configured" || name == "level2pp-metric" || name == "max-bkp-label-supported" || name == "max-label-supported" || name == "max-srte-label-supported")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::Level1Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"}
{

    yang_name = "level1-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::~Level1Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_data() const
{
    for (std::size_t index=0; index<frr_tie_breaker.size(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| is_tie_breakers_configured.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.size(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        for(auto const & c : frr_tie_breaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker>();
        c->parent = this;
        frr_tie_breaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_tie_breaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "is-tie-breakers-configured" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::FrrTieBreaker()
    :
    index_{YType::uint8, "index"},
    tie_breaker{YType::enumeration, "tie-breaker"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level1-frr"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_data() const
{
    return index_.is_set
	|| tie_breaker.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(tie_breaker.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "tie-breaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::Level2Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"}
{

    yang_name = "level2-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::~Level2Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_data() const
{
    for (std::size_t index=0; index<frr_tie_breaker.size(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| is_tie_breakers_configured.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.size(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        for(auto const & c : frr_tie_breaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker>();
        c->parent = this;
        frr_tie_breaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_tie_breaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "is-tie-breakers-configured" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::FrrTieBreaker()
    :
    index_{YType::uint8, "index"},
    tie_breaker{YType::enumeration, "tie-breaker"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level2-frr"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_data() const
{
    return index_.is_set
	|| tie_breaker.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(tie_breaker.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "tie-breaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::ManualAdjSid()
    :
    manual_adjacency_sid_index{YType::uint32, "manual-adjacency-sid-index"},
    manual_adjacency_sid_label{YType::uint32, "manual-adjacency-sid-label"},
    manual_adjacency_sid_type{YType::uint8, "manual-adjacency-sid-type"},
    sid_active{YType::boolean, "sid-active"},
    sid_protected{YType::boolean, "sid-protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_data() const
{
    return manual_adjacency_sid_index.is_set
	|| manual_adjacency_sid_label.is_set
	|| manual_adjacency_sid_type.is_set
	|| sid_active.is_set
	|| sid_protected.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(manual_adjacency_sid_index.yfilter)
	|| ydk::is_set(manual_adjacency_sid_label.yfilter)
	|| ydk::is_set(manual_adjacency_sid_type.yfilter)
	|| ydk::is_set(sid_active.yfilter)
	|| ydk::is_set(sid_protected.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manual_adjacency_sid_index.is_set || is_set(manual_adjacency_sid_index.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_index.get_name_leafdata());
    if (manual_adjacency_sid_label.is_set || is_set(manual_adjacency_sid_label.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_label.get_name_leafdata());
    if (manual_adjacency_sid_type.is_set || is_set(manual_adjacency_sid_type.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_type.get_name_leafdata());
    if (sid_active.is_set || is_set(sid_active.yfilter)) leaf_name_data.push_back(sid_active.get_name_leafdata());
    if (sid_protected.is_set || is_set(sid_protected.yfilter)) leaf_name_data.push_back(sid_protected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index = value;
        manual_adjacency_sid_index.value_namespace = name_space;
        manual_adjacency_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label = value;
        manual_adjacency_sid_label.value_namespace = name_space;
        manual_adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type = value;
        manual_adjacency_sid_type.value_namespace = name_space;
        manual_adjacency_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-active")
    {
        sid_active = value;
        sid_active.value_namespace = name_space;
        sid_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protected")
    {
        sid_protected = value;
        sid_protected.value_namespace = name_space;
        sid_protected.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-active")
    {
        sid_active.yfilter = yfilter;
    }
    if(value_path == "sid-protected")
    {
        sid_protected.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adjacency-sid-index" || name == "manual-adjacency-sid-label" || name == "manual-adjacency-sid-type" || name == "sid-active" || name == "sid-protected")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::TopologyId()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "topology-id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::~TopologyId()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Levels()
{

    yang_name = "levels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::~Levels()
{
}

bool Isis::Instances::Instance::Levels::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Level()
    :
    level{YType::enumeration, "level"}
    	,
    adjacencies(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>())
	,adjacency_log(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>())
	,database_log(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>())
	,detailed_lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>())
	,lsp_log(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>())
	,lsp_table_summary(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>())
	,lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>())
{
    adjacencies->parent = this;
    adjacency_log->parent = this;
    database_log->parent = this;
    detailed_lsps->parent = this;
    lsp_log->parent = this;
    lsp_table_summary->parent = this;
    lsps->parent = this;

    yang_name = "level"; yang_parent_name = "levels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::~Level()
{
}

bool Isis::Instances::Instance::Levels::Level::has_data() const
{
    return level.is_set
	|| (adjacencies !=  nullptr && adjacencies->has_data())
	|| (adjacency_log !=  nullptr && adjacency_log->has_data())
	|| (database_log !=  nullptr && database_log->has_data())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_data())
	|| (lsp_log !=  nullptr && lsp_log->has_data())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_data())
	|| (lsps !=  nullptr && lsps->has_data());
}

bool Isis::Instances::Instance::Levels::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (adjacencies !=  nullptr && adjacencies->has_operation())
	|| (adjacency_log !=  nullptr && adjacency_log->has_operation())
	|| (database_log !=  nullptr && database_log->has_operation())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_operation())
	|| (lsp_log !=  nullptr && lsp_log->has_operation())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacencies")
    {
        if(adjacencies == nullptr)
        {
            adjacencies = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>();
        }
        return adjacencies;
    }

    if(child_yang_name == "adjacency-log")
    {
        if(adjacency_log == nullptr)
        {
            adjacency_log = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>();
        }
        return adjacency_log;
    }

    if(child_yang_name == "database-log")
    {
        if(database_log == nullptr)
        {
            database_log = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>();
        }
        return database_log;
    }

    if(child_yang_name == "detailed-lsps")
    {
        if(detailed_lsps == nullptr)
        {
            detailed_lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>();
        }
        return detailed_lsps;
    }

    if(child_yang_name == "lsp-log")
    {
        if(lsp_log == nullptr)
        {
            lsp_log = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>();
        }
        return lsp_log;
    }

    if(child_yang_name == "lsp-table-summary")
    {
        if(lsp_table_summary == nullptr)
        {
            lsp_table_summary = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>();
        }
        return lsp_table_summary;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>();
        }
        return lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacencies != nullptr)
    {
        children["adjacencies"] = adjacencies;
    }

    if(adjacency_log != nullptr)
    {
        children["adjacency-log"] = adjacency_log;
    }

    if(database_log != nullptr)
    {
        children["database-log"] = database_log;
    }

    if(detailed_lsps != nullptr)
    {
        children["detailed-lsps"] = detailed_lsps;
    }

    if(lsp_log != nullptr)
    {
        children["lsp-log"] = lsp_log;
    }

    if(lsp_table_summary != nullptr)
    {
        children["lsp-table-summary"] = lsp_table_summary;
    }

    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacencies" || name == "adjacency-log" || name == "database-log" || name == "detailed-lsps" || name == "lsp-log" || name == "lsp-table-summary" || name == "lsps" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacencies()
{

    yang_name = "adjacencies"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::~Adjacencies()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_data() const
{
    for (std::size_t index=0; index<adjacency.size(); index++)
    {
        if(adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_operation() const
{
    for (std::size_t index=0; index<adjacency.size(); index++)
    {
        if(adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency")
    {
        for(auto const & c : adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency>();
        c->parent = this;
        adjacency.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::Adjacency()
    :
    adj_ipv4bfd_retry_count{YType::uint32, "adj-ipv4bfd-retry-count"},
    adj_ipv4bfd_retry_exp{YType::uint32, "adj-ipv4bfd-retry-exp"},
    adj_ipv4bfd_retry_running{YType::boolean, "adj-ipv4bfd-retry-running"},
    adj_ipv6bfd_retry_count{YType::uint32, "adj-ipv6bfd-retry-count"},
    adj_ipv6bfd_retry_exp{YType::uint32, "adj-ipv6bfd-retry-exp"},
    adj_ipv6bfd_retry_running{YType::boolean, "adj-ipv6bfd-retry-running"},
    adjacency_bfd_state{YType::enumeration, "adjacency-bfd-state"},
    adjacency_checkpoint_object_id{YType::uint32, "adjacency-checkpoint-object-id"},
    adjacency_dispriority{YType::uint8, "adjacency-dispriority"},
    adjacency_holdtime{YType::uint32, "adjacency-holdtime"},
    adjacency_ietf_nsf_capable_flag{YType::boolean, "adjacency-ietf-nsf-capable-flag"},
    adjacency_interface{YType::str, "adjacency-interface"},
    adjacency_ipv6bfd_state{YType::enumeration, "adjacency-ipv6bfd-state"},
    adjacency_local_priority{YType::uint8, "adjacency-local-priority"},
    adjacency_media_type{YType::enumeration, "adjacency-media-type"},
    adjacency_neighbor_priority{YType::uint8, "adjacency-neighbor-priority"},
    adjacency_snpa{YType::str, "adjacency-snpa"},
    adjacency_state{YType::enumeration, "adjacency-state"},
    adjacency_system_id{YType::str, "adjacency-system-id"},
    adjacency_uptime{YType::uint32, "adjacency-uptime"},
    adjacency_uptime_valid_flag{YType::boolean, "adjacency-uptime-valid-flag"},
    interface_name{YType::str, "interface-name"},
    local_dis_flag{YType::boolean, "local-dis-flag"},
    neighbor_dis_flag{YType::boolean, "neighbor-dis-flag"},
    nsr_standby{YType::uint8, "nsr-standby"},
    system_id{YType::str, "system-id"}
{

    yang_name = "adjacency"; yang_parent_name = "adjacencies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::~Adjacency()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_data() const
{
    for (std::size_t index=0; index<adjacency_area_address.size(); index++)
    {
        if(adjacency_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.size(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_topology.size(); index++)
    {
        if(adjacency_topology[index]->has_data())
            return true;
    }
    return adj_ipv4bfd_retry_count.is_set
	|| adj_ipv4bfd_retry_exp.is_set
	|| adj_ipv4bfd_retry_running.is_set
	|| adj_ipv6bfd_retry_count.is_set
	|| adj_ipv6bfd_retry_exp.is_set
	|| adj_ipv6bfd_retry_running.is_set
	|| adjacency_bfd_state.is_set
	|| adjacency_checkpoint_object_id.is_set
	|| adjacency_dispriority.is_set
	|| adjacency_holdtime.is_set
	|| adjacency_ietf_nsf_capable_flag.is_set
	|| adjacency_interface.is_set
	|| adjacency_ipv6bfd_state.is_set
	|| adjacency_local_priority.is_set
	|| adjacency_media_type.is_set
	|| adjacency_neighbor_priority.is_set
	|| adjacency_snpa.is_set
	|| adjacency_state.is_set
	|| adjacency_system_id.is_set
	|| adjacency_uptime.is_set
	|| adjacency_uptime_valid_flag.is_set
	|| interface_name.is_set
	|| local_dis_flag.is_set
	|| neighbor_dis_flag.is_set
	|| nsr_standby.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_operation() const
{
    for (std::size_t index=0; index<adjacency_area_address.size(); index++)
    {
        if(adjacency_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.size(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_topology.size(); index++)
    {
        if(adjacency_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_count.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_running.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_count.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_running.yfilter)
	|| ydk::is_set(adjacency_bfd_state.yfilter)
	|| ydk::is_set(adjacency_checkpoint_object_id.yfilter)
	|| ydk::is_set(adjacency_dispriority.yfilter)
	|| ydk::is_set(adjacency_holdtime.yfilter)
	|| ydk::is_set(adjacency_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(adjacency_interface.yfilter)
	|| ydk::is_set(adjacency_ipv6bfd_state.yfilter)
	|| ydk::is_set(adjacency_local_priority.yfilter)
	|| ydk::is_set(adjacency_media_type.yfilter)
	|| ydk::is_set(adjacency_neighbor_priority.yfilter)
	|| ydk::is_set(adjacency_snpa.yfilter)
	|| ydk::is_set(adjacency_state.yfilter)
	|| ydk::is_set(adjacency_system_id.yfilter)
	|| ydk::is_set(adjacency_uptime.yfilter)
	|| ydk::is_set(adjacency_uptime_valid_flag.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_dis_flag.yfilter)
	|| ydk::is_set(neighbor_dis_flag.yfilter)
	|| ydk::is_set(nsr_standby.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_ipv4bfd_retry_count.is_set || is_set(adj_ipv4bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_count.get_name_leafdata());
    if (adj_ipv4bfd_retry_exp.is_set || is_set(adj_ipv4bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_exp.get_name_leafdata());
    if (adj_ipv4bfd_retry_running.is_set || is_set(adj_ipv4bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_running.get_name_leafdata());
    if (adj_ipv6bfd_retry_count.is_set || is_set(adj_ipv6bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_count.get_name_leafdata());
    if (adj_ipv6bfd_retry_exp.is_set || is_set(adj_ipv6bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_exp.get_name_leafdata());
    if (adj_ipv6bfd_retry_running.is_set || is_set(adj_ipv6bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_running.get_name_leafdata());
    if (adjacency_bfd_state.is_set || is_set(adjacency_bfd_state.yfilter)) leaf_name_data.push_back(adjacency_bfd_state.get_name_leafdata());
    if (adjacency_checkpoint_object_id.is_set || is_set(adjacency_checkpoint_object_id.yfilter)) leaf_name_data.push_back(adjacency_checkpoint_object_id.get_name_leafdata());
    if (adjacency_dispriority.is_set || is_set(adjacency_dispriority.yfilter)) leaf_name_data.push_back(adjacency_dispriority.get_name_leafdata());
    if (adjacency_holdtime.is_set || is_set(adjacency_holdtime.yfilter)) leaf_name_data.push_back(adjacency_holdtime.get_name_leafdata());
    if (adjacency_ietf_nsf_capable_flag.is_set || is_set(adjacency_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(adjacency_ietf_nsf_capable_flag.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.yfilter)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (adjacency_ipv6bfd_state.is_set || is_set(adjacency_ipv6bfd_state.yfilter)) leaf_name_data.push_back(adjacency_ipv6bfd_state.get_name_leafdata());
    if (adjacency_local_priority.is_set || is_set(adjacency_local_priority.yfilter)) leaf_name_data.push_back(adjacency_local_priority.get_name_leafdata());
    if (adjacency_media_type.is_set || is_set(adjacency_media_type.yfilter)) leaf_name_data.push_back(adjacency_media_type.get_name_leafdata());
    if (adjacency_neighbor_priority.is_set || is_set(adjacency_neighbor_priority.yfilter)) leaf_name_data.push_back(adjacency_neighbor_priority.get_name_leafdata());
    if (adjacency_snpa.is_set || is_set(adjacency_snpa.yfilter)) leaf_name_data.push_back(adjacency_snpa.get_name_leafdata());
    if (adjacency_state.is_set || is_set(adjacency_state.yfilter)) leaf_name_data.push_back(adjacency_state.get_name_leafdata());
    if (adjacency_system_id.is_set || is_set(adjacency_system_id.yfilter)) leaf_name_data.push_back(adjacency_system_id.get_name_leafdata());
    if (adjacency_uptime.is_set || is_set(adjacency_uptime.yfilter)) leaf_name_data.push_back(adjacency_uptime.get_name_leafdata());
    if (adjacency_uptime_valid_flag.is_set || is_set(adjacency_uptime_valid_flag.yfilter)) leaf_name_data.push_back(adjacency_uptime_valid_flag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_dis_flag.is_set || is_set(local_dis_flag.yfilter)) leaf_name_data.push_back(local_dis_flag.get_name_leafdata());
    if (neighbor_dis_flag.is_set || is_set(neighbor_dis_flag.yfilter)) leaf_name_data.push_back(neighbor_dis_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-area-address")
    {
        for(auto const & c : adjacency_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress>();
        c->parent = this;
        adjacency_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "adjacency-per-address-family-data")
    {
        for(auto const & c : adjacency_per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData>();
        c->parent = this;
        adjacency_per_address_family_data.push_back(c);
        return c;
    }

    if(child_yang_name == "adjacency-topology")
    {
        for(auto const & c : adjacency_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology>();
        c->parent = this;
        adjacency_topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : adjacency_per_address_family_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : adjacency_topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count = value;
        adj_ipv4bfd_retry_count.value_namespace = name_space;
        adj_ipv4bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp = value;
        adj_ipv4bfd_retry_exp.value_namespace = name_space;
        adj_ipv4bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running = value;
        adj_ipv4bfd_retry_running.value_namespace = name_space;
        adj_ipv4bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count = value;
        adj_ipv6bfd_retry_count.value_namespace = name_space;
        adj_ipv6bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp = value;
        adj_ipv6bfd_retry_exp.value_namespace = name_space;
        adj_ipv6bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running = value;
        adj_ipv6bfd_retry_running.value_namespace = name_space;
        adj_ipv6bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state = value;
        adjacency_bfd_state.value_namespace = name_space;
        adjacency_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id = value;
        adjacency_checkpoint_object_id.value_namespace = name_space;
        adjacency_checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority = value;
        adjacency_dispriority.value_namespace = name_space;
        adjacency_dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime = value;
        adjacency_holdtime.value_namespace = name_space;
        adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag = value;
        adjacency_ietf_nsf_capable_flag.value_namespace = name_space;
        adjacency_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
        adjacency_interface.value_namespace = name_space;
        adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state = value;
        adjacency_ipv6bfd_state.value_namespace = name_space;
        adjacency_ipv6bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority = value;
        adjacency_local_priority.value_namespace = name_space;
        adjacency_local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type = value;
        adjacency_media_type.value_namespace = name_space;
        adjacency_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority = value;
        adjacency_neighbor_priority.value_namespace = name_space;
        adjacency_neighbor_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa = value;
        adjacency_snpa.value_namespace = name_space;
        adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state = value;
        adjacency_state.value_namespace = name_space;
        adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id = value;
        adjacency_system_id.value_namespace = name_space;
        adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime = value;
        adjacency_uptime.value_namespace = name_space;
        adjacency_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag = value;
        adjacency_uptime_valid_flag.value_namespace = name_space;
        adjacency_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-dis-flag")
    {
        local_dis_flag = value;
        local_dis_flag.value_namespace = name_space;
        local_dis_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dis-flag")
    {
        neighbor_dis_flag = value;
        neighbor_dis_flag.value_namespace = name_space;
        neighbor_dis_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
        nsr_standby.value_namespace = name_space;
        nsr_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority.yfilter = yfilter;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority.yfilter = yfilter;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type.yfilter = yfilter;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority.yfilter = yfilter;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-dis-flag")
    {
        local_dis_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-dis-flag")
    {
        neighbor_dis_flag.yfilter = yfilter;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-area-address" || name == "adjacency-per-address-family-data" || name == "adjacency-topology" || name == "adj-ipv4bfd-retry-count" || name == "adj-ipv4bfd-retry-exp" || name == "adj-ipv4bfd-retry-running" || name == "adj-ipv6bfd-retry-count" || name == "adj-ipv6bfd-retry-exp" || name == "adj-ipv6bfd-retry-running" || name == "adjacency-bfd-state" || name == "adjacency-checkpoint-object-id" || name == "adjacency-dispriority" || name == "adjacency-holdtime" || name == "adjacency-ietf-nsf-capable-flag" || name == "adjacency-interface" || name == "adjacency-ipv6bfd-state" || name == "adjacency-local-priority" || name == "adjacency-media-type" || name == "adjacency-neighbor-priority" || name == "adjacency-snpa" || name == "adjacency-state" || name == "adjacency-system-id" || name == "adjacency-uptime" || name == "adjacency-uptime-valid-flag" || name == "interface-name" || name == "local-dis-flag" || name == "neighbor-dis-flag" || name == "nsr-standby" || name == "system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::AdjacencyAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "adjacency-area-address"; yang_parent_name = "adjacency"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::~AdjacencyAreaAddress()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::AdjacencyPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "adjacency-per-address-family-data"; yang_parent_name = "adjacency"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::~AdjacencyPerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-per-address-family-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::Ipv4()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv4"; yang_parent_name = "adjacency-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        for(auto const & c : underlying_adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        for(auto const & c : underlying_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    for (auto const & c : underlying_adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : underlying_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "interface-address" || name == "non-frr-adjacency-sid" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::Ipv6()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv6"; yang_parent_name = "adjacency-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        for(auto const & c : underlying_adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        for(auto const & c : underlying_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    for (auto const & c : underlying_adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : underlying_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "interface-address" || name == "non-frr-adjacency-sid" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::AdjacencyTopology()
    :
    parallel_p2p_link_suppressed_flag{YType::boolean, "parallel-p2p-link-suppressed-flag"},
    topology_status{YType::enumeration, "topology-status"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id>())
{
    id->parent = this;

    yang_name = "adjacency-topology"; yang_parent_name = "adjacency"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::~AdjacencyTopology()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::has_data() const
{
    return parallel_p2p_link_suppressed_flag.is_set
	|| topology_status.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parallel_p2p_link_suppressed_flag.yfilter)
	|| ydk::is_set(topology_status.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parallel_p2p_link_suppressed_flag.is_set || is_set(parallel_p2p_link_suppressed_flag.yfilter)) leaf_name_data.push_back(parallel_p2p_link_suppressed_flag.get_name_leafdata());
    if (topology_status.is_set || is_set(topology_status.yfilter)) leaf_name_data.push_back(topology_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parallel-p2p-link-suppressed-flag")
    {
        parallel_p2p_link_suppressed_flag = value;
        parallel_p2p_link_suppressed_flag.value_namespace = name_space;
        parallel_p2p_link_suppressed_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-status")
    {
        topology_status = value;
        topology_status.value_namespace = name_space;
        topology_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parallel-p2p-link-suppressed-flag")
    {
        parallel_p2p_link_suppressed_flag.yfilter = yfilter;
    }
    if(value_path == "topology-status")
    {
        topology_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "parallel-p2p-link-suppressed-flag" || name == "topology-status")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "id"; yang_parent_name = "adjacency-topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::AdjacencyLog()
{

    yang_name = "adjacency-log"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::~AdjacencyLog()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::LogEntry()
    :
    adj_log_neighbor_system_id{YType::str, "adj-log-neighbor-system-id"},
    cur_adj_state{YType::enumeration, "cur-adj-state"},
    interface_name{YType::str, "interface-name"},
    prev_adj_state{YType::enumeration, "prev-adj-state"},
    state_reason{YType::enumeration, "state-reason"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "adjacency-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_data() const
{
    for (std::size_t index=0; index<adjacency_per_topology_change.size(); index++)
    {
        if(adjacency_per_topology_change[index]->has_data())
            return true;
    }
    return adj_log_neighbor_system_id.is_set
	|| cur_adj_state.is_set
	|| interface_name.is_set
	|| prev_adj_state.is_set
	|| state_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_operation() const
{
    for (std::size_t index=0; index<adjacency_per_topology_change.size(); index++)
    {
        if(adjacency_per_topology_change[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adj_log_neighbor_system_id.yfilter)
	|| ydk::is_set(cur_adj_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(prev_adj_state.yfilter)
	|| ydk::is_set(state_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_log_neighbor_system_id.is_set || is_set(adj_log_neighbor_system_id.yfilter)) leaf_name_data.push_back(adj_log_neighbor_system_id.get_name_leafdata());
    if (cur_adj_state.is_set || is_set(cur_adj_state.yfilter)) leaf_name_data.push_back(cur_adj_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (prev_adj_state.is_set || is_set(prev_adj_state.yfilter)) leaf_name_data.push_back(prev_adj_state.get_name_leafdata());
    if (state_reason.is_set || is_set(state_reason.yfilter)) leaf_name_data.push_back(state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-per-topology-change")
    {
        for(auto const & c : adjacency_per_topology_change)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange>();
        c->parent = this;
        adjacency_per_topology_change.push_back(c);
        return c;
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_per_topology_change)
    {
        children[c->get_segment_path()] = c;
    }

    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-log-neighbor-system-id")
    {
        adj_log_neighbor_system_id = value;
        adj_log_neighbor_system_id.value_namespace = name_space;
        adj_log_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state = value;
        cur_adj_state.value_namespace = name_space;
        cur_adj_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state = value;
        prev_adj_state.value_namespace = name_space;
        prev_adj_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-reason")
    {
        state_reason = value;
        state_reason.value_namespace = name_space;
        state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-log-neighbor-system-id")
    {
        adj_log_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state.yfilter = yfilter;
    }
    if(value_path == "state-reason")
    {
        state_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-per-topology-change" || name == "generic-data" || name == "adj-log-neighbor-system-id" || name == "cur-adj-state" || name == "interface-name" || name == "prev-adj-state" || name == "state-reason")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::AdjacencyPerTopologyChange()
    :
    change{YType::enumeration, "change"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>())
{
    id->parent = this;

    yang_name = "adjacency-per-topology-change"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::~AdjacencyPerTopologyChange()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_data() const
{
    return change.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-per-topology-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "change")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "id"; yang_parent_name = "adjacency-per-topology-change"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::DatabaseLog()
{

    yang_name = "database-log"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::~DatabaseLog()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::LogEntry()
    :
    lspdb_operation{YType::enumeration, "lspdb-operation"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData>())
	,new_lsp_entry(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry>())
	,old_lsp_entry(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry>())
{
    generic_data->parent = this;
    new_lsp_entry->parent = this;
    old_lsp_entry->parent = this;

    yang_name = "log-entry"; yang_parent_name = "database-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::has_data() const
{
    return lspdb_operation.is_set
	|| (generic_data !=  nullptr && generic_data->has_data())
	|| (new_lsp_entry !=  nullptr && new_lsp_entry->has_data())
	|| (old_lsp_entry !=  nullptr && old_lsp_entry->has_data());
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspdb_operation.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation())
	|| (new_lsp_entry !=  nullptr && new_lsp_entry->has_operation())
	|| (old_lsp_entry !=  nullptr && old_lsp_entry->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspdb_operation.is_set || is_set(lspdb_operation.yfilter)) leaf_name_data.push_back(lspdb_operation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "new-lsp-entry")
    {
        if(new_lsp_entry == nullptr)
        {
            new_lsp_entry = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry>();
        }
        return new_lsp_entry;
    }

    if(child_yang_name == "old-lsp-entry")
    {
        if(old_lsp_entry == nullptr)
        {
            old_lsp_entry = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry>();
        }
        return old_lsp_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    if(new_lsp_entry != nullptr)
    {
        children["new-lsp-entry"] = new_lsp_entry;
    }

    if(old_lsp_entry != nullptr)
    {
        children["old-lsp-entry"] = old_lsp_entry;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspdb-operation")
    {
        lspdb_operation = value;
        lspdb_operation.value_namespace = name_space;
        lspdb_operation.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspdb-operation")
    {
        lspdb_operation.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "new-lsp-entry" || name == "old-lsp-entry" || name == "lspdb-operation")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::NewLspEntry()
    :
    id_length{YType::uint8, "id-length"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_id{YType::str, "lsp-id"},
    lsp_length{YType::uint16, "lsp-length"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"}
{

    yang_name = "new-lsp-entry"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::~NewLspEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_data() const
{
    return id_length.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set
	|| max_area_addresses.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-lsp-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
        local_lsp_flag.value_namespace = name_space;
        local_lsp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
        lsp_active_flag.value_namespace = name_space;
        lsp_active_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-length" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-attached-flag" || name == "lsp-checksum" || name == "lsp-holdtime" || name == "lsp-id" || name == "lsp-length" || name == "lsp-level" || name == "lsp-nonv1a-flag" || name == "lsp-overloaded-flag" || name == "lsp-partition-repair-supported-flag" || name == "lsp-sequence-number" || name == "max-area-addresses" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::OldLspEntry()
    :
    id_length{YType::uint8, "id-length"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_id{YType::str, "lsp-id"},
    lsp_length{YType::uint16, "lsp-length"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"}
{

    yang_name = "old-lsp-entry"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::~OldLspEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_data() const
{
    return id_length.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set
	|| max_area_addresses.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "old-lsp-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
        local_lsp_flag.value_namespace = name_space;
        local_lsp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
        lsp_active_flag.value_namespace = name_space;
        lsp_active_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-length" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-attached-flag" || name == "lsp-checksum" || name == "lsp-holdtime" || name == "lsp-id" || name == "lsp-length" || name == "lsp-level" || name == "lsp-nonv1a-flag" || name == "lsp-overloaded-flag" || name == "lsp-partition-repair-supported-flag" || name == "lsp-sequence-number" || name == "max-area-addresses" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsps()
{

    yang_name = "detailed-lsps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::~DetailedLsps()
{
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::has_data() const
{
    for (std::size_t index=0; index<detailed_lsp.size(); index++)
    {
        if(detailed_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::has_operation() const
{
    for (std::size_t index=0; index<detailed_lsp.size(); index++)
    {
        if(detailed_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DetailedLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detailed-lsp")
    {
        for(auto const & c : detailed_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp>();
        c->parent = this;
        detailed_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DetailedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detailed_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detailed-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::DetailedLsp()
    :
    lsp_id{YType::str, "lsp-id"},
    lsp_body{YType::str, "lsp-body"}
    	,
    lsp_header_data(std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData>())
{
    lsp_header_data->parent = this;

    yang_name = "detailed-lsp"; yang_parent_name = "detailed-lsps"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::~DetailedLsp()
{
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::has_data() const
{
    return lsp_id.is_set
	|| lsp_body.is_set
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_body.yfilter)
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-lsp" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_body.is_set || is_set(lsp_body.yfilter)) leaf_name_data.push_back(lsp_body.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-header-data")
    {
        if(lsp_header_data == nullptr)
        {
            lsp_header_data = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData>();
        }
        return lsp_header_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_header_data != nullptr)
    {
        children["lsp-header-data"] = lsp_header_data;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-body")
    {
        lsp_body = value;
        lsp_body.value_namespace = name_space;
        lsp_body.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-body")
    {
        lsp_body.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-header-data" || name == "lsp-id" || name == "lsp-body")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::LspHeaderData()
    :
    id_length{YType::uint8, "id-length"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_id{YType::str, "lsp-id"},
    lsp_length{YType::uint16, "lsp-length"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"}
{

    yang_name = "lsp-header-data"; yang_parent_name = "detailed-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::~LspHeaderData()
{
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_data() const
{
    return id_length.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set
	|| max_area_addresses.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-header-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
        local_lsp_flag.value_namespace = name_space;
        local_lsp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
        lsp_active_flag.value_namespace = name_space;
        lsp_active_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-length" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-attached-flag" || name == "lsp-checksum" || name == "lsp-holdtime" || name == "lsp-id" || name == "lsp-length" || name == "lsp-level" || name == "lsp-nonv1a-flag" || name == "lsp-overloaded-flag" || name == "lsp-partition-repair-supported-flag" || name == "lsp-sequence-number" || name == "max-area-addresses" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspLog::LspLog()
{

    yang_name = "lsp-log"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::~LspLog()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::LspLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::LogEntry()
    :
    delayed_trigger_count{YType::uint32, "delayed-trigger-count"},
    log_interface{YType::str, "log-interface"},
    pseudo_node_number{YType::uint8, "pseudo-node-number"},
    trigger_count{YType::uint32, "trigger-count"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "lsp-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::has_data() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return delayed_trigger_count.is_set
	|| log_interface.is_set
	|| pseudo_node_number.is_set
	|| trigger_count.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::has_operation() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delayed_trigger_count.yfilter)
	|| ydk::is_set(log_interface.yfilter)
	|| ydk::is_set(pseudo_node_number.yfilter)
	|| ydk::is_set(trigger_count.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_trigger_count.is_set || is_set(delayed_trigger_count.yfilter)) leaf_name_data.push_back(delayed_trigger_count.get_name_leafdata());
    if (log_interface.is_set || is_set(log_interface.yfilter)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (pseudo_node_number.is_set || is_set(pseudo_node_number.yfilter)) leaf_name_data.push_back(pseudo_node_number.get_name_leafdata());
    if (trigger_count.is_set || is_set(trigger_count.yfilter)) leaf_name_data.push_back(trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "trigger")
    {
        for(auto const & c : trigger)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger>();
        c->parent = this;
        trigger.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    for (auto const & c : trigger)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-trigger-count")
    {
        delayed_trigger_count = value;
        delayed_trigger_count.value_namespace = name_space;
        delayed_trigger_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-interface")
    {
        log_interface = value;
        log_interface.value_namespace = name_space;
        log_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-node-number")
    {
        pseudo_node_number = value;
        pseudo_node_number.value_namespace = name_space;
        pseudo_node_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-count")
    {
        trigger_count = value;
        trigger_count.value_namespace = name_space;
        trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-trigger-count")
    {
        delayed_trigger_count.yfilter = yfilter;
    }
    if(value_path == "log-interface")
    {
        log_interface.yfilter = yfilter;
    }
    if(value_path == "pseudo-node-number")
    {
        pseudo_node_number.yfilter = yfilter;
    }
    if(value_path == "trigger-count")
    {
        trigger_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "trigger" || name == "delayed-trigger-count" || name == "log-interface" || name == "pseudo-node-number" || name == "trigger-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::Trigger()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "trigger"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::~Trigger()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::LspTableSummary()
    :
    all_fragment_lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>())
	,fragment0lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>())
{
    all_fragment_lsp_stats->parent = this;
    fragment0lsp_stats->parent = this;

    yang_name = "lsp-table-summary"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::~LspTableSummary()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_data() const
{
    return (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_data())
	|| (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_operation())
	|| (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-table-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-fragment-lsp-stats")
    {
        if(all_fragment_lsp_stats == nullptr)
        {
            all_fragment_lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>();
        }
        return all_fragment_lsp_stats;
    }

    if(child_yang_name == "fragment0lsp-stats")
    {
        if(fragment0lsp_stats == nullptr)
        {
            fragment0lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>();
        }
        return fragment0lsp_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_fragment_lsp_stats != nullptr)
    {
        children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
    }

    if(fragment0lsp_stats != nullptr)
    {
        children["fragment0lsp-stats"] = fragment0lsp_stats;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-fragment-lsp-stats" || name == "fragment0lsp-stats")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::AllFragmentLspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>())
{
    node_counters->parent = this;

    yang_name = "all-fragment-lsp-stats"; yang_parent_name = "lsp-table-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::~AllFragmentLspStats()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_data() const
{
    return (node_counters !=  nullptr && node_counters->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_operation() const
{
    return is_set(yfilter)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-fragment-lsp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-counters")
    {
        if(node_counters == nullptr)
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>();
        }
        return node_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_counters != nullptr)
    {
        children["node-counters"] = node_counters;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-counters")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::NodeCounters()
    :
    pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>())
	,route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>())
{
    pseudo_node_lsp_count->parent = this;
    route_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "all-fragment-lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_data() const
{
    return (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudo_node_lsp_count != nullptr)
    {
        children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
    }

    if(route_lsp_count != nullptr)
    {
        children["route-lsp-count"] = route_lsp_count;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudo-node-lsp-count" || name == "route-lsp-count")
        return true;
    return false;
}

const Enum::YLeaf IsisSubAfId::unicast {0, "unicast"};
const Enum::YLeaf IsisSubAfId::multicast {1, "multicast"};

const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_interface {0, "isis-sh-route-adv-origin-interface"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_redistributed {1, "isis-sh-route-adv-origin-redistributed"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_native {2, "isis-sh-route-adv-origin-native"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_summary {3, "isis-sh-route-adv-origin-summary"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_default {4, "isis-sh-route-adv-origin-default"};

const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_intf_suppressed {0, "isis-intf-topo-adv-prefix-disabled-intf-suppressed"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_not_up {1, "isis-intf-topo-adv-prefix-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown {2, "isis-intf-topo-adv-prefix-disabled-af-prefixes-unknown"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_internal_error {3, "isis-intf-topo-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_if_cfg_suppressed {0, "isis-intf-adv-prefix-disabled-if-cfg-suppressed"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_no_topo_participate {1, "isis-intf-adv-prefix-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_internal_error {2, "isis-intf-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisMetricStyle::isis_metric_style_narrow {0, "isis-metric-style-narrow"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_wide {1, "isis-metric-style-wide"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_transition {2, "isis-metric-style-transition"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf IsisUp::isis_down {0, "isis-down"};
const Enum::YLeaf IsisUp::isis_up {1, "isis-up"};

const Enum::YLeaf IsisLevels::isis_levels_none {0, "isis-levels-none"};
const Enum::YLeaf IsisLevels::isis_levels_1 {1, "isis-levels-1"};
const Enum::YLeaf IsisLevels::isis_levels_2 {2, "isis-levels-2"};
const Enum::YLeaf IsisLevels::isis_levels_12 {3, "isis-levels-12"};
const Enum::YLeaf IsisLevels::isis_levels_total {4, "isis-levels-total"};

const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_join_error {0, "isis-intf-mcast-invalid-join-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_internal_error {1, "isis-intf-mcast-invalid-internal-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_not_yet_needed {2, "isis-intf-mcast-invalid-not-yet-needed"};

const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_config {0, "isis-spf-trig-config"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_nsr_fo {1, "isis-spf-trig-nsr-fo"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_periodic {2, "isis-spf-trig-periodic"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_clear {3, "isis-spf-trig-clear"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_newadj {4, "isis-spf-trig-newadj"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_deladj {5, "isis-spf-trig-deladj"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_next_hop {6, "isis-spf-trig-next-hop"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_metric {7, "isis-spf-trig-metric"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_dis {8, "isis-spf-trig-dis"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_frr_per_link {9, "isis-spf-trig-frr-per-link"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_frr_per_prefix {10, "isis-spf-trig-frr-per-prefix"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_ucmp {11, "isis-spf-trig-ucmp"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_new_tunnel {12, "isis-spf-trig-new-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_del_tunnel {13, "isis-spf-trig-del-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_chg_tunnel {14, "isis-spf-trig-chg-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_new_node {15, "isis-spf-trig-new-node"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_del_node {16, "isis-spf-trig-del-node"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_newlsp {17, "isis-spf-trig-newlsp"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_lsp_expiry {18, "isis-spf-trig-lsp-expiry"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_attach_set {19, "isis-spf-trig-attach-set"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_attach_clr {20, "isis-spf-trig-attach-clr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_overload_set {21, "isis-spf-trig-overload-set"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_overload_clr {22, "isis-spf-trig-overload-clr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_link_good {23, "isis-spf-trig-link-good"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_link_bad {24, "isis-spf-trig-link-bad"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_good {25, "isis-spf-trig-prefix-good"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_bad {26, "isis-spf-trig-prefix-bad"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix {27, "isis-spf-trig-prefix"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_area_addr {28, "isis-spf-trig-area-addr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_ip_addr {29, "isis-spf-trig-ip-addr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_rtrid {30, "isis-spf-trig-rtrid"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_policy {31, "isis-spf-trig-prefix-policy"};

const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_critical {0, "isis-prefix-priority-critical"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_high {1, "isis-prefix-priority-high"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_med {2, "isis-prefix-priority-med"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_low {3, "isis-prefix-priority-low"};

const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l1_summary_null {0, "isis-prefix-origin-l1-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l1 {1, "isis-prefix-origin-l1"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l2_summary_null {2, "isis-prefix-origin-l2-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l2 {3, "isis-prefix-origin-l2"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_inter_area_summary_null {4, "isis-prefix-origin-inter-area-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_inter_area {5, "isis-prefix-origin-inter-area"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_default_nearest_attached {6, "isis-prefix-origin-default-nearest-attached"};

const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_none {0, "isis-nsf-flav-or-none"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_cisco {1, "isis-nsf-flav-or-cisco"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_ietf {2, "isis-nsf-flav-or-ietf"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_nsr {3, "isis-nsf-flav-or-nsr"};

const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_too_small {0, "isis-intf-clns-mtu-invalid-too-small"};
const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_internal_error {1, "isis-intf-clns-mtu-invalid-internal-error"};

const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_cfg_passive {0, "isis-intf-af-fwd-addr-unknown-cfg-passive"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_proto_doesnt_exist {1, "isis-intf-af-fwd-addr-unknown-proto-doesnt-exist"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_next_hop_reg_error {2, "isis-intf-af-fwd-addr-unknown-next-hop-reg-error"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_no_link_local_add {3, "isis-intf-af-fwd-addr-unknown-no-link-local-add"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_af_not_up {4, "isis-intf-af-fwd-addr-unknown-af-not-up"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_vrf_enabled {5, "isis-intf-af-fwd-addr-unknown-vrf-enabled"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_internal_error {6, "isis-intf-af-fwd-addr-unknown-internal-error"};

const Enum::YLeaf IsisKnown::isis_unknown {0, "isis-unknown"};
const Enum::YLeaf IsisKnown::isis_known {1, "isis-known"};

const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_access_error {0, "isis-intf-clns-snpa-unknown-access-error"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_not_lan {1, "isis-intf-clns-snpa-unknown-not-lan"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_internal_error {2, "isis-intf-clns-snpa-unknown-internal-error"};

const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_intf_passive {0, "isis-intf-topo-adj-form-disabled-intf-passive"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_af_not_up {1, "isis-intf-topo-adj-form-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown {2, "isis-intf-topo-adj-form-disabled-af-fwd-addr-unknown"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_topo_not_cfg {3, "isis-intf-topo-adj-form-disabled-topo-not-cfg"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_topo_can_not_participate {4, "isis-intf-topo-adj-form-disabled-topo-can-not-participate"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_idle {5, "isis-intf-topo-adj-form-disabled-idle"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_internal_error {6, "isis-intf-topo-adj-form-disabled-internal-error"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_mtu {7, "isis-intf-topo-adj-form-disabled-mtu"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_snpa {8, "isis-intf-topo-adj-form-disabled-snpa"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_mcast {9, "isis-intf-topo-adj-form-disabled-mcast"};

const Enum::YLeaf IsisMetricMode::isis_metric_mode_fixed {0, "isis-metric-mode-fixed"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_relative {1, "isis-metric-mode-relative"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_absolute {2, "isis-metric-mode-absolute"};

const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ok {0, "isis-adj-topo-status-ok"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_intf_not_configured {1, "isis-adj-topo-status-intf-not-configured"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_intf_not_running {2, "isis-adj-topo-status-intf-not-running"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_init_state {3, "isis-adj-topo-status-init-state"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_neighbor_doesnt_participate {4, "isis-adj-topo-status-neighbor-doesnt-participate"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_tlv_missing {5, "isis-adj-topo-status-ipv4-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_tlv_empty {6, "isis-adj-topo-status-ipv4-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_tlv_missing {7, "isis-adj-topo-status-ipv6-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_tlv_empty {8, "isis-adj-topo-status-ipv6-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_matches_ours {9, "isis-adj-topo-status-ipv4-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_matches_ours {10, "isis-adj-topo-status-ipv6-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_subnet_mismatch {11, "isis-adj-topo-status-ipv4-address-subnet-mismatch"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_not_link_local {12, "isis-adj-topo-status-ipv6-address-not-link-local"};

const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_none {0, "isis-u-loop-avoidance-type-none"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_all {1, "isis-u-loop-avoidance-type-all"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_protected {2, "isis-u-loop-avoidance-type-protected"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_sr {3, "isis-u-loop-avoidance-type-sr"};

const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_adv_suppressed {0, "isis-intf-af-prefix-unknown-adv-suppressed"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_global_addr_reg_error {1, "isis-intf-af-prefix-unknown-global-addr-reg-error"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_internal_error {2, "isis-intf-af-prefix-unknown-internal-error"};

const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_no_state {0, "isis-adj-bfd-no-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_down_state {1, "isis-adj-bfd-down-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_init_state {2, "isis-adj-bfd-init-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_up_state {3, "isis-adj-bfd-up-state"};

const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_none {0, "isis-tilfa-comp-none"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_link {1, "isis-tilfa-comp-link"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node {2, "isis-tilfa-comp-node"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_srlg {3, "isis-tilfa-comp-srlg"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node_srlg {4, "isis-tilfa-comp-node-srlg"};

const Enum::YLeaf IsisFrr::isis_frr_type_none {0, "isis-frr-type-none"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_link {1, "isis-frr-type-per-link"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_prefix {2, "isis-frr-type-per-prefix"};
const Enum::YLeaf IsisFrr::isis_frr_type_sr_u_loop {3, "isis-frr-type-sr-u-loop"};

const Enum::YLeaf IsisReachable::isis_unreachable {0, "isis-unreachable"};
const Enum::YLeaf IsisReachable::isis_reachable {1, "isis-reachable"};

const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_active {0, "isis-startup-ssm-active"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_complete {1, "isis-startup-ssm-complete"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_aborted {2, "isis-startup-ssm-aborted"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_not_run {3, "isis-startup-ssm-not-run"};

const Enum::YLeaf IsisEnabled::isis_disabled {0, "isis-disabled"};
const Enum::YLeaf IsisEnabled::isis_enabled {1, "isis-enabled"};

const Enum::YLeaf IsisLevel::isis_level0 {0, "isis-level0"};
const Enum::YLeaf IsisLevel::isis_level1 {1, "isis-level1"};
const Enum::YLeaf IsisLevel::isis_level2 {2, "isis-level2"};

const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_add_to_intf_stack_fail {0, "isis-intf-clns-proto-down-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_no_imd_conn {1, "isis-intf-clns-proto-down-no-imd-conn"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_node_doesnt_exist {2, "isis-intf-clns-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_exist_reg_error {3, "isis-intf-clns-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_state_reg_error {4, "isis-intf-clns-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_clns_not_up {5, "isis-intf-clns-proto-down-clns-not-up"};

const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_up_change {0, "isis-adj-topo-up-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_next_hop_change {1, "isis-adj-topo-next-hop-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_down_change {2, "isis-adj-topo-down-change"};

const Enum::YLeaf IsisShTePceFloodingScope::none {0, "none"};
const Enum::YLeaf IsisShTePceFloodingScope::area {1, "area"};
const Enum::YLeaf IsisShTePceFloodingScope::domain {2, "domain"};

const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_conn_fail {0, "isis-intf-af-proto-down-imd-conn-fail"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_node_doesnt_exist {1, "isis-intf-af-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_exist_reg_error {2, "isis-intf-af-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_state_reg_error {3, "isis-intf-af-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_af_not_up {4, "isis-intf-af-proto-down-af-not-up"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_internal_error {5, "isis-intf-af-proto-down-internal-error"};

const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config {0, "isis-lsp-trig-config"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_newadj {1, "isis-lsp-trig-newadj"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_deladj {2, "isis-lsp-trig-deladj"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_dr_change {3, "isis-lsp-trig-dr-change"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_area_set {4, "isis-lsp-trig-area-set"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_attach {5, "isis-lsp-trig-attach"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_hippity {6, "isis-lsp-trig-hippity"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_regen {7, "isis-lsp-trig-regen"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_if_up {8, "isis-lsp-trig-ip-if-up"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_if_down {9, "isis-lsp-trig-ip-if-down"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_inter_area {10, "isis-lsp-trig-ip-inter-area"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_external {11, "isis-lsp-trig-ip-external"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_external_full {12, "isis-lsp-trig-ip-external-full"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_def_orig {13, "isis-lsp-trig-ip-def-orig"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_addr_chg {14, "isis-lsp-trig-ip-addr-chg"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_info {15, "isis-lsp-trig-te-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_pce_info {16, "isis-lsp-trig-te-pce-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_fa_info {17, "isis-lsp-trig-te-fa-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_nsr_fo {18, "isis-lsp-trig-nsr-fo"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pn_cancel {19, "isis-lsp-trig-pn-cancel"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_lkgp {20, "isis-lsp-trig-lkgp"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pp {21, "isis-lsp-trig-pp"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config_force_send {22, "isis-lsp-trig-config-force-send"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config_force_init {23, "isis-lsp-trig-config-force-init"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_add {24, "isis-lsp-trig-adj-sid-add"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_delete {25, "isis-lsp-trig-adj-sid-delete"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_msd {26, "isis-lsp-trig-msd"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_wait_timer {27, "isis-lsp-trig-adj-sid-wait-timer"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_direct_gen {28, "isis-lsp-trig-direct-gen"};

const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_info {0, "isis-err-log-level-info"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_warn {1, "isis-err-log-level-warn"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_critical {2, "isis-err-log-level-critical"};

const Enum::YLeaf IsisLspDbOp::isis_lsp_db_clear {0, "isis-lsp-db-clear"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_insert_new_lsp {1, "isis-lsp-db-insert-new-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_replace_lsp_with_lsp {2, "isis-lsp-db-replace-lsp-with-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_purge_lsp {3, "isis-lsp-db-purge-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_delete_lsp {4, "isis-lsp-db-delete-lsp"};

const Enum::YLeaf IsisAdjState::isis_adj_up_state {0, "isis-adj-up-state"};
const Enum::YLeaf IsisAdjState::isis_adj_init_state {1, "isis-adj-init-state"};
const Enum::YLeaf IsisAdjState::isis_adj_failed_state {2, "isis-adj-failed-state"};

const Enum::YLeaf IsisAdjStateReason::isis_adj_up_nsf_restart {0, "isis-adj-up-nsf-restart"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_new_adj {1, "isis-adj-up-new-adj"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_restarted {2, "isis-adj-up-restarted"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_nsf_restored {3, "isis-adj-up-nsf-restored"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_chkpt_restored {4, "isis-adj-up-chkpt-restored"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_init_reason {5, "isis-adj-init-reason"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_init_neighbor_forgot {6, "isis-adj-init-neighbor-forgot"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_hold_time {7, "isis-adj-down-hold-time"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_if_down {8, "isis-adj-down-if-down"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_cfg_mismatch {9, "isis-adj-down-cfg-mismatch"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_circ_id {10, "isis-adj-down-circ-id"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_nsf_ack_fail {11, "isis-adj-down-nsf-ack-fail"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_db_clear {12, "isis-adj-down-db-clear"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_no_common_topology {13, "isis-adj-down-no-common-topology"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_restart_tlv_missing {14, "isis-adj-down-restart-tlv-missing"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_bfd_down {15, "isis-adj-down-bfd-down"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_3way_down {16, "isis-adj-down-3way-down"};

const Enum::YLeaf IsisAfId::ipv4 {0, "ipv4"};
const Enum::YLeaf IsisAfId::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_no_topo_enabled {0, "isis-intf-af-disabled-no-topo-enabled"};
const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_internal_error {1, "isis-intf-af-disabled-internal-error"};

const Enum::YLeaf IsisRedistProto::isis_redist_connected {0, "isis-redist-connected"};
const Enum::YLeaf IsisRedistProto::isis_redist_static {1, "isis-redist-static"};
const Enum::YLeaf IsisRedistProto::isis_redist_ospf {2, "isis-redist-ospf"};
const Enum::YLeaf IsisRedistProto::isis_redist_bgp {3, "isis-redist-bgp"};
const Enum::YLeaf IsisRedistProto::isis_redist_isis {4, "isis-redist-isis"};
const Enum::YLeaf IsisRedistProto::isis_redist_ospfv3 {5, "isis-redist-ospfv3"};
const Enum::YLeaf IsisRedistProto::isis_redist_rip {6, "isis-redist-rip"};
const Enum::YLeaf IsisRedistProto::isis_redist_eigrp {7, "isis-redist-eigrp"};
const Enum::YLeaf IsisRedistProto::isis_redist_subscriber {8, "isis-redist-subscriber"};
const Enum::YLeaf IsisRedistProto::isis_redist_application {9, "isis-redist-application"};
const Enum::YLeaf IsisRedistProto::isis_redist_mobile {10, "isis-redist-mobile"};

const Enum::YLeaf IsisSpfClass::isis_spf_frr_sr_u_loop {0, "isis-spf-frr-sr-u-loop"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_link {1, "isis-spf-frr-per-link"};
const Enum::YLeaf IsisSpfClass::isis_spf_partial {2, "isis-spf-partial"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_prefix {3, "isis-spf-frr-per-prefix"};
const Enum::YLeaf IsisSpfClass::isis_spf_ucmp_calc {4, "isis-spf-ucmp-calc"};
const Enum::YLeaf IsisSpfClass::isis_spf_next_hop {5, "isis-spf-next-hop"};
const Enum::YLeaf IsisSpfClass::isis_spf_incremental {6, "isis-spf-incremental"};
const Enum::YLeaf IsisSpfClass::isis_spf_full {7, "isis-spf-full"};

const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_not_cfg {0, "isis-intf-topo-disabled-not-cfg"};
const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_internal_error {1, "isis-intf-topo-disabled-internal-error"};

const Enum::YLeaf IsisShTeLink::isis_sh_te_link_p2p {0, "isis-sh-te-link-p2p"};
const Enum::YLeaf IsisShTeLink::isis_sh_te_link_broadcast {1, "isis-sh-te-link-broadcast"};

const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_net_cfg {0, "isis-intf-disabled-no-net-cfg"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_area_missing {1, "isis-intf-disabled-area-missing"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_area_running {2, "isis-intf-disabled-no-area-running"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_topos_cfg {3, "isis-intf-disabled-no-topos-cfg"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_imd_conn {4, "isis-intf-disabled-no-imd-conn"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_imd_reg_error {5, "isis-intf-disabled-imd-reg-error"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_level_mismatch {6, "isis-intf-disabled-level-mismatch"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_base_caps_error {7, "isis-intf-disabled-base-caps-error"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_intf_doesnt_exist {8, "isis-intf-disabled-intf-doesnt-exist"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_intf_shutdown {9, "isis-intf-disabled-intf-shutdown"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_internal_error {10, "isis-intf-disabled-internal-error"};

const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_down_stream {0, "isis-frr-tiebreaker-down-stream"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_lc_disjoint {1, "isis-frr-tiebreaker-lc-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_low_est_backup_metric {2, "isis-frr-tiebreaker-low-est-backup-metric"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_node_protecting {3, "isis-frr-tiebreaker-node-protecting"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_primary_path {4, "isis-frr-tiebreaker-primary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_secondary_path {5, "isis-frr-tiebreaker-secondary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_srlg_disjoint {6, "isis-frr-tiebreaker-srlg-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_default {7, "isis-frr-tiebreaker-default"};

const Enum::YLeaf IsisValid::isis_invalid {0, "isis-invalid"};
const Enum::YLeaf IsisValid::isis_valid {1, "isis-valid"};

const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_cfg_passive {0, "isis-intf-adj-form-disabled-cfg-passive"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_no_topo_participate {1, "isis-intf-adj-form-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_add_to_intf_stack_fail {2, "isis-intf-adj-form-disabled-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_clns_io {3, "isis-intf-adj-form-disabled-clns-io"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_internal_error {4, "isis-intf-adj-form-disabled-internal-error"};

const Enum::YLeaf IsisMediaClass::isis_media_class_lan {0, "isis-media-class-lan"};
const Enum::YLeaf IsisMediaClass::isis_media_class_p2p {1, "isis-media-class-p2p"};
const Enum::YLeaf IsisMediaClass::isis_media_class_loop_back {2, "isis-media-class-loop-back"};

const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_none {0, "isis-u-loop-event-none"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_down {1, "isis-u-loop-event-link-down"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_up {2, "isis-u-loop-event-link-up"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_set {3, "isis-u-loop-event-ol-bit-set"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_unset {4, "isis-u-loop-event-ol-bit-unset"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};


}
}

