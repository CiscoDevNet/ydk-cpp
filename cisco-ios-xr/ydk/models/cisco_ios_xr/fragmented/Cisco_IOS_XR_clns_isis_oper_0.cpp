
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    neighbors(std::make_shared<Isis::Instances::Instance::Neighbors>())
	,host_names(std::make_shared<Isis::Instances::Instance::HostNames>())
	,statistics_global(std::make_shared<Isis::Instances::Instance::StatisticsGlobal>())
	,levels(std::make_shared<Isis::Instances::Instance::Levels>())
	,topologies(std::make_shared<Isis::Instances::Instance::Topologies>())
	,nsr_status(std::make_shared<Isis::Instances::Instance::NsrStatus>())
	,interfaces(std::make_shared<Isis::Instances::Instance::Interfaces>())
	,checkpoint_adjacencies(std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>())
	,srms(std::make_shared<Isis::Instances::Instance::Srms>())
	,error_log(std::make_shared<Isis::Instances::Instance::ErrorLog>())
	,checkpoint_interfaces(std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>())
	,interface_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics>())
	,protocol(std::make_shared<Isis::Instances::Instance::Protocol>())
	,neighbor_summaries(std::make_shared<Isis::Instances::Instance::NeighborSummaries>())
	,checkpoint_lsps(std::make_shared<Isis::Instances::Instance::CheckpointLsps>())
	,mesh_groups(std::make_shared<Isis::Instances::Instance::MeshGroups>())
	,nsr_statistics(std::make_shared<Isis::Instances::Instance::NsrStatistics>())
	,checkpoint_te_tunnels(std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>())
{
    neighbors->parent = this;
    host_names->parent = this;
    statistics_global->parent = this;
    levels->parent = this;
    topologies->parent = this;
    nsr_status->parent = this;
    interfaces->parent = this;
    checkpoint_adjacencies->parent = this;
    srms->parent = this;
    error_log->parent = this;
    checkpoint_interfaces->parent = this;
    interface_statistics->parent = this;
    protocol->parent = this;
    neighbor_summaries->parent = this;
    checkpoint_lsps->parent = this;
    mesh_groups->parent = this;
    nsr_statistics->parent = this;
    checkpoint_te_tunnels->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false;
}

Isis::Instances::Instance::~Instance()
{
}

bool Isis::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (host_names !=  nullptr && host_names->has_data())
	|| (statistics_global !=  nullptr && statistics_global->has_data())
	|| (levels !=  nullptr && levels->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_data())
	|| (srms !=  nullptr && srms->has_data())
	|| (error_log !=  nullptr && error_log->has_data())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_data())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_data());
}

bool Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (host_names !=  nullptr && host_names->has_operation())
	|| (statistics_global !=  nullptr && statistics_global->has_operation())
	|| (levels !=  nullptr && levels->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (checkpoint_adjacencies !=  nullptr && checkpoint_adjacencies->has_operation())
	|| (srms !=  nullptr && srms->has_operation())
	|| (error_log !=  nullptr && error_log->has_operation())
	|| (checkpoint_interfaces !=  nullptr && checkpoint_interfaces->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (checkpoint_lsps !=  nullptr && checkpoint_lsps->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (nsr_statistics !=  nullptr && nsr_statistics->has_operation())
	|| (checkpoint_te_tunnels !=  nullptr && checkpoint_te_tunnels->has_operation());
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
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Isis::Instances::Instance::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "host-names")
    {
        if(host_names == nullptr)
        {
            host_names = std::make_shared<Isis::Instances::Instance::HostNames>();
        }
        return host_names;
    }

    if(child_yang_name == "statistics-global")
    {
        if(statistics_global == nullptr)
        {
            statistics_global = std::make_shared<Isis::Instances::Instance::StatisticsGlobal>();
        }
        return statistics_global;
    }

    if(child_yang_name == "levels")
    {
        if(levels == nullptr)
        {
            levels = std::make_shared<Isis::Instances::Instance::Levels>();
        }
        return levels;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Isis::Instances::Instance::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<Isis::Instances::Instance::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "checkpoint-adjacencies")
    {
        if(checkpoint_adjacencies == nullptr)
        {
            checkpoint_adjacencies = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>();
        }
        return checkpoint_adjacencies;
    }

    if(child_yang_name == "srms")
    {
        if(srms == nullptr)
        {
            srms = std::make_shared<Isis::Instances::Instance::Srms>();
        }
        return srms;
    }

    if(child_yang_name == "error-log")
    {
        if(error_log == nullptr)
        {
            error_log = std::make_shared<Isis::Instances::Instance::ErrorLog>();
        }
        return error_log;
    }

    if(child_yang_name == "checkpoint-interfaces")
    {
        if(checkpoint_interfaces == nullptr)
        {
            checkpoint_interfaces = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>();
        }
        return checkpoint_interfaces;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Isis::Instances::Instance::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Isis::Instances::Instance::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "checkpoint-lsps")
    {
        if(checkpoint_lsps == nullptr)
        {
            checkpoint_lsps = std::make_shared<Isis::Instances::Instance::CheckpointLsps>();
        }
        return checkpoint_lsps;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<Isis::Instances::Instance::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "nsr-statistics")
    {
        if(nsr_statistics == nullptr)
        {
            nsr_statistics = std::make_shared<Isis::Instances::Instance::NsrStatistics>();
        }
        return nsr_statistics;
    }

    if(child_yang_name == "checkpoint-te-tunnels")
    {
        if(checkpoint_te_tunnels == nullptr)
        {
            checkpoint_te_tunnels = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>();
        }
        return checkpoint_te_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(host_names != nullptr)
    {
        children["host-names"] = host_names;
    }

    if(statistics_global != nullptr)
    {
        children["statistics-global"] = statistics_global;
    }

    if(levels != nullptr)
    {
        children["levels"] = levels;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(checkpoint_adjacencies != nullptr)
    {
        children["checkpoint-adjacencies"] = checkpoint_adjacencies;
    }

    if(srms != nullptr)
    {
        children["srms"] = srms;
    }

    if(error_log != nullptr)
    {
        children["error-log"] = error_log;
    }

    if(checkpoint_interfaces != nullptr)
    {
        children["checkpoint-interfaces"] = checkpoint_interfaces;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(checkpoint_lsps != nullptr)
    {
        children["checkpoint-lsps"] = checkpoint_lsps;
    }

    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(nsr_statistics != nullptr)
    {
        children["nsr-statistics"] = nsr_statistics;
    }

    if(checkpoint_te_tunnels != nullptr)
    {
        children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
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
    if(name == "neighbors" || name == "host-names" || name == "statistics-global" || name == "levels" || name == "topologies" || name == "nsr-status" || name == "interfaces" || name == "checkpoint-adjacencies" || name == "srms" || name == "error-log" || name == "checkpoint-interfaces" || name == "interface-statistics" || name == "protocol" || name == "neighbor-summaries" || name == "checkpoint-lsps" || name == "mesh-groups" || name == "nsr-statistics" || name == "checkpoint-te-tunnels" || name == "instance-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::~Neighbors()
{
}

bool Isis::Instances::Instance::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::get_children() const
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

void Isis::Instances::Instance::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::Neighbor()
    :
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    local_interface{YType::str, "local-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_circuit_type{YType::enumeration, "neighbor-circuit-type"},
    neighbor_ietf_nsf_capable_flag{YType::uint32, "neighbor-ietf-nsf-capable-flag"},
    neighbor_media_type{YType::enumeration, "neighbor-media-type"},
    neighbor_holdtime{YType::uint32, "neighbor-holdtime"},
    neighbor_uptime_valid_flag{YType::boolean, "neighbor-uptime-valid-flag"},
    neighbor_uptime{YType::uint32, "neighbor-uptime"},
    nsr_standby{YType::boolean, "nsr-standby"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::~Neighbor()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_active_area_address.size(); index++)
    {
        if(neighbor_active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_data())
            return true;
    }
    return system_id.is_set
	|| interface_name.is_set
	|| neighbor_system_id.is_set
	|| neighbor_snpa.is_set
	|| local_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_circuit_type.is_set
	|| neighbor_ietf_nsf_capable_flag.is_set
	|| neighbor_media_type.is_set
	|| neighbor_holdtime.is_set
	|| neighbor_uptime_valid_flag.is_set
	|| neighbor_uptime.is_set
	|| nsr_standby.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_active_area_address.size(); index++)
    {
        if(neighbor_active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(local_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_circuit_type.yfilter)
	|| ydk::is_set(neighbor_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(neighbor_media_type.yfilter)
	|| ydk::is_set(neighbor_holdtime.yfilter)
	|| ydk::is_set(neighbor_uptime_valid_flag.yfilter)
	|| ydk::is_set(neighbor_uptime.yfilter)
	|| ydk::is_set(nsr_standby.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.yfilter)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_circuit_type.is_set || is_set(neighbor_circuit_type.yfilter)) leaf_name_data.push_back(neighbor_circuit_type.get_name_leafdata());
    if (neighbor_ietf_nsf_capable_flag.is_set || is_set(neighbor_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(neighbor_ietf_nsf_capable_flag.get_name_leafdata());
    if (neighbor_media_type.is_set || is_set(neighbor_media_type.yfilter)) leaf_name_data.push_back(neighbor_media_type.get_name_leafdata());
    if (neighbor_holdtime.is_set || is_set(neighbor_holdtime.yfilter)) leaf_name_data.push_back(neighbor_holdtime.get_name_leafdata());
    if (neighbor_uptime_valid_flag.is_set || is_set(neighbor_uptime_valid_flag.yfilter)) leaf_name_data.push_back(neighbor_uptime_valid_flag.get_name_leafdata());
    if (neighbor_uptime.is_set || is_set(neighbor_uptime.yfilter)) leaf_name_data.push_back(neighbor_uptime.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-active-area-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress>();
        c->parent = this;
        neighbor_active_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "topologies-supported")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported>();
        c->parent = this;
        topologies_supported.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-per-address-family-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData>();
        c->parent = this;
        neighbor_per_address_family_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_active_area_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : topologies_supported)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : neighbor_per_address_family_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
        local_interface.value_namespace = name_space;
        local_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type = value;
        neighbor_circuit_type.value_namespace = name_space;
        neighbor_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag = value;
        neighbor_ietf_nsf_capable_flag.value_namespace = name_space;
        neighbor_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type = value;
        neighbor_media_type.value_namespace = name_space;
        neighbor_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime = value;
        neighbor_holdtime.value_namespace = name_space;
        neighbor_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag = value;
        neighbor_uptime_valid_flag.value_namespace = name_space;
        neighbor_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime = value;
        neighbor_uptime.value_namespace = name_space;
        neighbor_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
        nsr_standby.value_namespace = name_space;
        nsr_standby.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "local-interface")
    {
        local_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime.yfilter = yfilter;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-active-area-address" || name == "topologies-supported" || name == "neighbor-per-address-family-data" || name == "system-id" || name == "interface-name" || name == "neighbor-system-id" || name == "neighbor-snpa" || name == "local-interface" || name == "neighbor-state" || name == "neighbor-circuit-type" || name == "neighbor-ietf-nsf-capable-flag" || name == "neighbor-media-type" || name == "neighbor-holdtime" || name == "neighbor-uptime-valid-flag" || name == "neighbor-uptime" || name == "nsr-standby")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::NeighborActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-active-area-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::~NeighborActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-active-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::TopologiesSupported()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "topologies-supported"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::~TopologiesSupported()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies-supported";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::NeighborPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "neighbor-per-address-family-data"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::~NeighborPerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-per-address-family-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::Ipv4()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_data() const
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

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_operation() const
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

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    count = 0;
    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::Ipv6()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv6"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_data() const
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

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_operation() const
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

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    count = 0;
    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
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
    char count=0;
    count = 0;
    for (auto const & c : host_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    local_is_flag{YType::boolean, "local-is-flag"},
    host_levels{YType::enumeration, "host-levels"},
    host_name{YType::str, "host-name"}
{

    yang_name = "host-name"; yang_parent_name = "host-names"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::HostNames::HostName::~HostName()
{
}

bool Isis::Instances::Instance::HostNames::HostName::has_data() const
{
    return system_id.is_set
	|| local_is_flag.is_set
	|| host_levels.is_set
	|| host_name.is_set;
}

bool Isis::Instances::Instance::HostNames::HostName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(local_is_flag.yfilter)
	|| ydk::is_set(host_levels.yfilter)
	|| ydk::is_set(host_name.yfilter);
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
    if (local_is_flag.is_set || is_set(local_is_flag.yfilter)) leaf_name_data.push_back(local_is_flag.get_name_leafdata());
    if (host_levels.is_set || is_set(host_levels.yfilter)) leaf_name_data.push_back(host_levels.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::HostNames::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::HostNames::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "local-is-flag")
    {
        local_is_flag = value;
        local_is_flag.value_namespace = name_space;
        local_is_flag.value_namespace_prefix = name_space_prefix;
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
}

void Isis::Instances::Instance::HostNames::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag.yfilter = yfilter;
    }
    if(value_path == "host-levels")
    {
        host_levels.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::HostNames::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "local-is-flag" || name == "host-levels" || name == "host-name")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::StatisticsGlobal()
    :
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>())
{
    statistics->parent = this;

    yang_name = "statistics-global"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::~StatisticsGlobal()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "per-area-data")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::Statistics()
    :
    fast_psnp_lookup_count{YType::uint32, "fast-psnp-lookup-count"},
    fast_psnp_lookup_hit_count{YType::uint32, "fast-psnp-lookup-hit-count"},
    fast_csnp_lookup_count{YType::uint32, "fast-csnp-lookup-count"},
    fast_csnp_lookup_hit_count{YType::uint32, "fast-csnp-lookup-hit-count"},
    fast_csnp_cache_update_count{YType::uint32, "fast-csnp-cache-update-count"},
    zero_holdtime_lsp_count{YType::uint32, "zero-holdtime-lsp-count"},
    invalid_checksum_lsp_count{YType::uint32, "invalid-checksum-lsp-count"},
    iih_dropped_count{YType::uint32, "iih-dropped-count"},
    lsp_dropped_count{YType::uint32, "lsp-dropped-count"},
    snp_dropped_count{YType::uint32, "snp-dropped-count"},
    maximum_iih_queue_length{YType::uint32, "maximum-iih-queue-length"},
    maximum_pdu_queue_length{YType::uint32, "maximum-pdu-queue-length"},
    pdu_queue_length{YType::uint32, "pdu-queue-length"},
    avg_hello_recv_rate{YType::uint32, "avg-hello-recv-rate"},
    avg_csnp_recv_rate{YType::uint32, "avg-csnp-recv-rate"},
    avg_psnp_recv_rate{YType::uint32, "avg-psnp-recv-rate"},
    avg_lsp_recv_rate{YType::uint32, "avg-lsp-recv-rate"},
    avg_hello_send_rate{YType::uint32, "avg-hello-send-rate"},
    avg_csnp_send_rate{YType::uint32, "avg-csnp-send-rate"},
    avg_psnp_send_rate{YType::uint32, "avg-psnp-send-rate"},
    avg_lsp_send_rate{YType::uint32, "avg-lsp-send-rate"}
    	,
    avg_hello_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>())
	,avg_csnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>())
	,avg_psnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>())
	,avg_lsp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>())
	,avg_hello_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>())
	,avg_csnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>())
	,avg_psnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>())
	,avg_lsp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>())
{
    avg_hello_process_time->parent = this;
    avg_csnp_process_time->parent = this;
    avg_psnp_process_time->parent = this;
    avg_lsp_process_time->parent = this;
    avg_hello_transmit_time->parent = this;
    avg_csnp_transmit_time->parent = this;
    avg_psnp_transmit_time->parent = this;
    avg_lsp_transmit_time->parent = this;

    yang_name = "statistics"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_data() const
{
    return fast_psnp_lookup_count.is_set
	|| fast_psnp_lookup_hit_count.is_set
	|| fast_csnp_lookup_count.is_set
	|| fast_csnp_lookup_hit_count.is_set
	|| fast_csnp_cache_update_count.is_set
	|| zero_holdtime_lsp_count.is_set
	|| invalid_checksum_lsp_count.is_set
	|| iih_dropped_count.is_set
	|| lsp_dropped_count.is_set
	|| snp_dropped_count.is_set
	|| maximum_iih_queue_length.is_set
	|| maximum_pdu_queue_length.is_set
	|| pdu_queue_length.is_set
	|| avg_hello_recv_rate.is_set
	|| avg_csnp_recv_rate.is_set
	|| avg_psnp_recv_rate.is_set
	|| avg_lsp_recv_rate.is_set
	|| avg_hello_send_rate.is_set
	|| avg_csnp_send_rate.is_set
	|| avg_psnp_send_rate.is_set
	|| avg_lsp_send_rate.is_set
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_data())
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_data())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_data())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_data())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_data())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_data())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_data())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_psnp_lookup_count.yfilter)
	|| ydk::is_set(fast_psnp_lookup_hit_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_hit_count.yfilter)
	|| ydk::is_set(fast_csnp_cache_update_count.yfilter)
	|| ydk::is_set(zero_holdtime_lsp_count.yfilter)
	|| ydk::is_set(invalid_checksum_lsp_count.yfilter)
	|| ydk::is_set(iih_dropped_count.yfilter)
	|| ydk::is_set(lsp_dropped_count.yfilter)
	|| ydk::is_set(snp_dropped_count.yfilter)
	|| ydk::is_set(maximum_iih_queue_length.yfilter)
	|| ydk::is_set(maximum_pdu_queue_length.yfilter)
	|| ydk::is_set(pdu_queue_length.yfilter)
	|| ydk::is_set(avg_hello_recv_rate.yfilter)
	|| ydk::is_set(avg_csnp_recv_rate.yfilter)
	|| ydk::is_set(avg_psnp_recv_rate.yfilter)
	|| ydk::is_set(avg_lsp_recv_rate.yfilter)
	|| ydk::is_set(avg_hello_send_rate.yfilter)
	|| ydk::is_set(avg_csnp_send_rate.yfilter)
	|| ydk::is_set(avg_psnp_send_rate.yfilter)
	|| ydk::is_set(avg_lsp_send_rate.yfilter)
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_operation())
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_operation())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_operation())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_operation())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_operation())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_operation())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_operation())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_psnp_lookup_count.is_set || is_set(fast_psnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_count.get_name_leafdata());
    if (fast_psnp_lookup_hit_count.is_set || is_set(fast_psnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_hit_count.get_name_leafdata());
    if (fast_csnp_lookup_count.is_set || is_set(fast_csnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_count.get_name_leafdata());
    if (fast_csnp_lookup_hit_count.is_set || is_set(fast_csnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_hit_count.get_name_leafdata());
    if (fast_csnp_cache_update_count.is_set || is_set(fast_csnp_cache_update_count.yfilter)) leaf_name_data.push_back(fast_csnp_cache_update_count.get_name_leafdata());
    if (zero_holdtime_lsp_count.is_set || is_set(zero_holdtime_lsp_count.yfilter)) leaf_name_data.push_back(zero_holdtime_lsp_count.get_name_leafdata());
    if (invalid_checksum_lsp_count.is_set || is_set(invalid_checksum_lsp_count.yfilter)) leaf_name_data.push_back(invalid_checksum_lsp_count.get_name_leafdata());
    if (iih_dropped_count.is_set || is_set(iih_dropped_count.yfilter)) leaf_name_data.push_back(iih_dropped_count.get_name_leafdata());
    if (lsp_dropped_count.is_set || is_set(lsp_dropped_count.yfilter)) leaf_name_data.push_back(lsp_dropped_count.get_name_leafdata());
    if (snp_dropped_count.is_set || is_set(snp_dropped_count.yfilter)) leaf_name_data.push_back(snp_dropped_count.get_name_leafdata());
    if (maximum_iih_queue_length.is_set || is_set(maximum_iih_queue_length.yfilter)) leaf_name_data.push_back(maximum_iih_queue_length.get_name_leafdata());
    if (maximum_pdu_queue_length.is_set || is_set(maximum_pdu_queue_length.yfilter)) leaf_name_data.push_back(maximum_pdu_queue_length.get_name_leafdata());
    if (pdu_queue_length.is_set || is_set(pdu_queue_length.yfilter)) leaf_name_data.push_back(pdu_queue_length.get_name_leafdata());
    if (avg_hello_recv_rate.is_set || is_set(avg_hello_recv_rate.yfilter)) leaf_name_data.push_back(avg_hello_recv_rate.get_name_leafdata());
    if (avg_csnp_recv_rate.is_set || is_set(avg_csnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_csnp_recv_rate.get_name_leafdata());
    if (avg_psnp_recv_rate.is_set || is_set(avg_psnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_psnp_recv_rate.get_name_leafdata());
    if (avg_lsp_recv_rate.is_set || is_set(avg_lsp_recv_rate.yfilter)) leaf_name_data.push_back(avg_lsp_recv_rate.get_name_leafdata());
    if (avg_hello_send_rate.is_set || is_set(avg_hello_send_rate.yfilter)) leaf_name_data.push_back(avg_hello_send_rate.get_name_leafdata());
    if (avg_csnp_send_rate.is_set || is_set(avg_csnp_send_rate.yfilter)) leaf_name_data.push_back(avg_csnp_send_rate.get_name_leafdata());
    if (avg_psnp_send_rate.is_set || is_set(avg_psnp_send_rate.yfilter)) leaf_name_data.push_back(avg_psnp_send_rate.get_name_leafdata());
    if (avg_lsp_send_rate.is_set || is_set(avg_lsp_send_rate.yfilter)) leaf_name_data.push_back(avg_lsp_send_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avg-hello-process-time")
    {
        if(avg_hello_process_time == nullptr)
        {
            avg_hello_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>();
        }
        return avg_hello_process_time;
    }

    if(child_yang_name == "avg-csnp-process-time")
    {
        if(avg_csnp_process_time == nullptr)
        {
            avg_csnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>();
        }
        return avg_csnp_process_time;
    }

    if(child_yang_name == "avg-psnp-process-time")
    {
        if(avg_psnp_process_time == nullptr)
        {
            avg_psnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>();
        }
        return avg_psnp_process_time;
    }

    if(child_yang_name == "avg-lsp-process-time")
    {
        if(avg_lsp_process_time == nullptr)
        {
            avg_lsp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>();
        }
        return avg_lsp_process_time;
    }

    if(child_yang_name == "avg-hello-transmit-time")
    {
        if(avg_hello_transmit_time == nullptr)
        {
            avg_hello_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>();
        }
        return avg_hello_transmit_time;
    }

    if(child_yang_name == "avg-csnp-transmit-time")
    {
        if(avg_csnp_transmit_time == nullptr)
        {
            avg_csnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>();
        }
        return avg_csnp_transmit_time;
    }

    if(child_yang_name == "avg-psnp-transmit-time")
    {
        if(avg_psnp_transmit_time == nullptr)
        {
            avg_psnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>();
        }
        return avg_psnp_transmit_time;
    }

    if(child_yang_name == "avg-lsp-transmit-time")
    {
        if(avg_lsp_transmit_time == nullptr)
        {
            avg_lsp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>();
        }
        return avg_lsp_transmit_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(avg_hello_process_time != nullptr)
    {
        children["avg-hello-process-time"] = avg_hello_process_time;
    }

    if(avg_csnp_process_time != nullptr)
    {
        children["avg-csnp-process-time"] = avg_csnp_process_time;
    }

    if(avg_psnp_process_time != nullptr)
    {
        children["avg-psnp-process-time"] = avg_psnp_process_time;
    }

    if(avg_lsp_process_time != nullptr)
    {
        children["avg-lsp-process-time"] = avg_lsp_process_time;
    }

    if(avg_hello_transmit_time != nullptr)
    {
        children["avg-hello-transmit-time"] = avg_hello_transmit_time;
    }

    if(avg_csnp_transmit_time != nullptr)
    {
        children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
    }

    if(avg_psnp_transmit_time != nullptr)
    {
        children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
    }

    if(avg_lsp_transmit_time != nullptr)
    {
        children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count = value;
        fast_psnp_lookup_count.value_namespace = name_space;
        fast_psnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count = value;
        fast_psnp_lookup_hit_count.value_namespace = name_space;
        fast_psnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count = value;
        fast_csnp_lookup_count.value_namespace = name_space;
        fast_csnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count = value;
        fast_csnp_lookup_hit_count.value_namespace = name_space;
        fast_csnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count = value;
        fast_csnp_cache_update_count.value_namespace = name_space;
        fast_csnp_cache_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count = value;
        zero_holdtime_lsp_count.value_namespace = name_space;
        zero_holdtime_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count = value;
        invalid_checksum_lsp_count.value_namespace = name_space;
        invalid_checksum_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count = value;
        iih_dropped_count.value_namespace = name_space;
        iih_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count = value;
        lsp_dropped_count.value_namespace = name_space;
        lsp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count = value;
        snp_dropped_count.value_namespace = name_space;
        snp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length = value;
        maximum_iih_queue_length.value_namespace = name_space;
        maximum_iih_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length = value;
        maximum_pdu_queue_length.value_namespace = name_space;
        maximum_pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length = value;
        pdu_queue_length.value_namespace = name_space;
        pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate = value;
        avg_hello_recv_rate.value_namespace = name_space;
        avg_hello_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate = value;
        avg_csnp_recv_rate.value_namespace = name_space;
        avg_csnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate = value;
        avg_psnp_recv_rate.value_namespace = name_space;
        avg_psnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate = value;
        avg_lsp_recv_rate.value_namespace = name_space;
        avg_lsp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate = value;
        avg_hello_send_rate.value_namespace = name_space;
        avg_hello_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate = value;
        avg_csnp_send_rate.value_namespace = name_space;
        avg_csnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate = value;
        avg_psnp_send_rate.value_namespace = name_space;
        avg_psnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate = value;
        avg_lsp_send_rate.value_namespace = name_space;
        avg_lsp_send_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count.yfilter = yfilter;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count.yfilter = yfilter;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count.yfilter = yfilter;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count.yfilter = yfilter;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length.yfilter = yfilter;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg-hello-process-time" || name == "avg-csnp-process-time" || name == "avg-psnp-process-time" || name == "avg-lsp-process-time" || name == "avg-hello-transmit-time" || name == "avg-csnp-transmit-time" || name == "avg-psnp-transmit-time" || name == "avg-lsp-transmit-time" || name == "fast-psnp-lookup-count" || name == "fast-psnp-lookup-hit-count" || name == "fast-csnp-lookup-count" || name == "fast-csnp-lookup-hit-count" || name == "fast-csnp-cache-update-count" || name == "zero-holdtime-lsp-count" || name == "invalid-checksum-lsp-count" || name == "iih-dropped-count" || name == "lsp-dropped-count" || name == "snp-dropped-count" || name == "maximum-iih-queue-length" || name == "maximum-pdu-queue-length" || name == "pdu-queue-length" || name == "avg-hello-recv-rate" || name == "avg-csnp-recv-rate" || name == "avg-psnp-recv-rate" || name == "avg-lsp-recv-rate" || name == "avg-hello-send-rate" || name == "avg-csnp-send-rate" || name == "avg-psnp-send-rate" || name == "avg-lsp-send-rate")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::AvgHelloProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-hello-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::~AvgHelloProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::AvgCsnpProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-csnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::~AvgCsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::AvgPsnpProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-psnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::~AvgPsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::AvgLspProcessTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-lsp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::~AvgLspProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::AvgHelloTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-hello-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::~AvgHelloTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::AvgCsnpTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-csnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::~AvgCsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::AvgPsnpTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-psnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::~AvgPsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::AvgLspTransmitTime()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "avg-lsp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::~AvgLspTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>())
{
    statistics->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_data() const
{
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    return level.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_operation() const
{
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "per-topology-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData>();
        c->parent = this;
        per_topology_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto const & c : per_topology_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "per-topology-data" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::Statistics()
    :
    system_lsp_build_count{YType::uint32, "system-lsp-build-count"},
    system_lsp_refresh_count{YType::uint32, "system-lsp-refresh-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_data() const
{
    return system_lsp_build_count.is_set
	|| system_lsp_refresh_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_lsp_build_count.yfilter)
	|| ydk::is_set(system_lsp_refresh_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_lsp_build_count.is_set || is_set(system_lsp_build_count.yfilter)) leaf_name_data.push_back(system_lsp_build_count.get_name_leafdata());
    if (system_lsp_refresh_count.is_set || is_set(system_lsp_refresh_count.yfilter)) leaf_name_data.push_back(system_lsp_refresh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count = value;
        system_lsp_build_count.value_namespace = name_space;
        system_lsp_build_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count = value;
        system_lsp_refresh_count.value_namespace = name_space;
        system_lsp_refresh_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count.yfilter = yfilter;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-lsp-build-count" || name == "system-lsp-refresh-count")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::PerTopologyData()
    :
    id(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>())
	,statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>())
{
    id->parent = this;
    statistics->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>();
        }
        return id;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "statistics")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::~Id()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::Statistics()
    :
    spf_run_count{YType::uint32, "spf-run-count"},
    ispf_run_count{YType::uint32, "ispf-run-count"},
    nhc_run_count{YType::uint32, "nhc-run-count"},
    prc_run_count{YType::uint32, "prc-run-count"},
    periodic_run_count{YType::uint32, "periodic-run-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_data() const
{
    return spf_run_count.is_set
	|| ispf_run_count.is_set
	|| nhc_run_count.is_set
	|| prc_run_count.is_set
	|| periodic_run_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_run_count.yfilter)
	|| ydk::is_set(ispf_run_count.yfilter)
	|| ydk::is_set(nhc_run_count.yfilter)
	|| ydk::is_set(prc_run_count.yfilter)
	|| ydk::is_set(periodic_run_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_count.is_set || is_set(spf_run_count.yfilter)) leaf_name_data.push_back(spf_run_count.get_name_leafdata());
    if (ispf_run_count.is_set || is_set(ispf_run_count.yfilter)) leaf_name_data.push_back(ispf_run_count.get_name_leafdata());
    if (nhc_run_count.is_set || is_set(nhc_run_count.yfilter)) leaf_name_data.push_back(nhc_run_count.get_name_leafdata());
    if (prc_run_count.is_set || is_set(prc_run_count.yfilter)) leaf_name_data.push_back(prc_run_count.get_name_leafdata());
    if (periodic_run_count.is_set || is_set(periodic_run_count.yfilter)) leaf_name_data.push_back(periodic_run_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-count")
    {
        spf_run_count = value;
        spf_run_count.value_namespace = name_space;
        spf_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-run-count")
    {
        ispf_run_count = value;
        ispf_run_count.value_namespace = name_space;
        ispf_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count = value;
        nhc_run_count.value_namespace = name_space;
        nhc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count = value;
        prc_run_count.value_namespace = name_space;
        prc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count = value;
        periodic_run_count.value_namespace = name_space;
        periodic_run_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-count")
    {
        spf_run_count.yfilter = yfilter;
    }
    if(value_path == "ispf-run-count")
    {
        ispf_run_count.yfilter = yfilter;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count.yfilter = yfilter;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count.yfilter = yfilter;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-count" || name == "ispf-run-count" || name == "nhc-run-count" || name == "prc-run-count" || name == "periodic-run-count")
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
    char count=0;
    count = 0;
    for (auto const & c : level)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    adjacency_log(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>())
	,lsp_table_summary(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>())
	,adjacencies(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>())
	,detailed_lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>())
	,lsps(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>())
	,lsp_log(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>())
	,database_log(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>())
{
    adjacency_log->parent = this;
    lsp_table_summary->parent = this;
    adjacencies->parent = this;
    detailed_lsps->parent = this;
    lsps->parent = this;
    lsp_log->parent = this;
    database_log->parent = this;

    yang_name = "level"; yang_parent_name = "levels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::~Level()
{
}

bool Isis::Instances::Instance::Levels::Level::has_data() const
{
    return level.is_set
	|| (adjacency_log !=  nullptr && adjacency_log->has_data())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_data())
	|| (adjacencies !=  nullptr && adjacencies->has_data())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_data())
	|| (lsps !=  nullptr && lsps->has_data())
	|| (lsp_log !=  nullptr && lsp_log->has_data())
	|| (database_log !=  nullptr && database_log->has_data());
}

bool Isis::Instances::Instance::Levels::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (adjacency_log !=  nullptr && adjacency_log->has_operation())
	|| (lsp_table_summary !=  nullptr && lsp_table_summary->has_operation())
	|| (adjacencies !=  nullptr && adjacencies->has_operation())
	|| (detailed_lsps !=  nullptr && detailed_lsps->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (lsp_log !=  nullptr && lsp_log->has_operation())
	|| (database_log !=  nullptr && database_log->has_operation());
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
    if(child_yang_name == "adjacency-log")
    {
        if(adjacency_log == nullptr)
        {
            adjacency_log = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>();
        }
        return adjacency_log;
    }

    if(child_yang_name == "lsp-table-summary")
    {
        if(lsp_table_summary == nullptr)
        {
            lsp_table_summary = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>();
        }
        return lsp_table_summary;
    }

    if(child_yang_name == "adjacencies")
    {
        if(adjacencies == nullptr)
        {
            adjacencies = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>();
        }
        return adjacencies;
    }

    if(child_yang_name == "detailed-lsps")
    {
        if(detailed_lsps == nullptr)
        {
            detailed_lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>();
        }
        return detailed_lsps;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "lsp-log")
    {
        if(lsp_log == nullptr)
        {
            lsp_log = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>();
        }
        return lsp_log;
    }

    if(child_yang_name == "database-log")
    {
        if(database_log == nullptr)
        {
            database_log = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>();
        }
        return database_log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjacency_log != nullptr)
    {
        children["adjacency-log"] = adjacency_log;
    }

    if(lsp_table_summary != nullptr)
    {
        children["lsp-table-summary"] = lsp_table_summary;
    }

    if(adjacencies != nullptr)
    {
        children["adjacencies"] = adjacencies;
    }

    if(detailed_lsps != nullptr)
    {
        children["detailed-lsps"] = detailed_lsps;
    }

    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(lsp_log != nullptr)
    {
        children["lsp-log"] = lsp_log;
    }

    if(database_log != nullptr)
    {
        children["database-log"] = database_log;
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
    if(name == "adjacency-log" || name == "lsp-table-summary" || name == "adjacencies" || name == "detailed-lsps" || name == "lsps" || name == "lsp-log" || name == "database-log" || name == "level")
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
    char count=0;
    count = 0;
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    interface_name{YType::str, "interface-name"},
    prev_adj_state{YType::enumeration, "prev-adj-state"},
    cur_adj_state{YType::enumeration, "cur-adj-state"},
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
	|| interface_name.is_set
	|| prev_adj_state.is_set
	|| cur_adj_state.is_set
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
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(prev_adj_state.yfilter)
	|| ydk::is_set(cur_adj_state.yfilter)
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
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (prev_adj_state.is_set || is_set(prev_adj_state.yfilter)) leaf_name_data.push_back(prev_adj_state.get_name_leafdata());
    if (cur_adj_state.is_set || is_set(cur_adj_state.yfilter)) leaf_name_data.push_back(cur_adj_state.get_name_leafdata());
    if (state_reason.is_set || is_set(state_reason.yfilter)) leaf_name_data.push_back(state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "adjacency-per-topology-change")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange>();
        c->parent = this;
        adjacency_per_topology_change.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    count = 0;
    for (auto const & c : adjacency_per_topology_change)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(value_path == "cur-adj-state")
    {
        cur_adj_state = value;
        cur_adj_state.value_namespace = name_space;
        cur_adj_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state.yfilter = yfilter;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state.yfilter = yfilter;
    }
    if(value_path == "state-reason")
    {
        state_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "adjacency-per-topology-change" || name == "adj-log-neighbor-system-id" || name == "interface-name" || name == "prev-adj-state" || name == "cur-adj-state" || name == "state-reason")
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
    char count=0;
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
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
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

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
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
    char count=0;
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
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
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
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
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
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::LspTableSummary()
    :
    fragment0lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>())
	,all_fragment_lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>())
{
    fragment0lsp_stats->parent = this;
    all_fragment_lsp_stats->parent = this;

    yang_name = "lsp-table-summary"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::~LspTableSummary()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_data() const
{
    return (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_data())
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_operation())
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_operation());
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
    if(child_yang_name == "fragment0lsp-stats")
    {
        if(fragment0lsp_stats == nullptr)
        {
            fragment0lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>();
        }
        return fragment0lsp_stats;
    }

    if(child_yang_name == "all-fragment-lsp-stats")
    {
        if(all_fragment_lsp_stats == nullptr)
        {
            all_fragment_lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>();
        }
        return all_fragment_lsp_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fragment0lsp_stats != nullptr)
    {
        children["fragment0lsp-stats"] = fragment0lsp_stats;
    }

    if(all_fragment_lsp_stats != nullptr)
    {
        children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
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
    if(name == "fragment0lsp-stats" || name == "all-fragment-lsp-stats")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::Fragment0LspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>())
{
    node_counters->parent = this;

    yang_name = "fragment0lsp-stats"; yang_parent_name = "lsp-table-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::~Fragment0LspStats()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_data() const
{
    for (std::size_t index=0; index<per_topology_counter.size(); index++)
    {
        if(per_topology_counter[index]->has_data())
            return true;
    }
    return (node_counters !=  nullptr && node_counters->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_operation() const
{
    for (std::size_t index=0; index<per_topology_counter.size(); index++)
    {
        if(per_topology_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment0lsp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-counters")
    {
        if(node_counters == nullptr)
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>();
        }
        return node_counters;
    }

    if(child_yang_name == "per-topology-counter")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter>();
        c->parent = this;
        per_topology_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_counters != nullptr)
    {
        children["node-counters"] = node_counters;
    }

    count = 0;
    for (auto const & c : per_topology_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-counters" || name == "per-topology-counter")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::NodeCounters()
    :
    route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>())
	,pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>())
{
    route_lsp_count->parent = this;
    pseudo_node_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_data() const
{
    return (route_lsp_count !=  nullptr && route_lsp_count->has_data())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_lsp_count != nullptr)
    {
        children["route-lsp-count"] = route_lsp_count;
    }

    if(pseudo_node_lsp_count != nullptr)
    {
        children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-lsp-count" || name == "pseudo-node-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::PerTopologyCounter()
    :
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>())
	,overloaded_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>())
	,attached_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>())
{
    id->parent = this;
    overloaded_lsp_count->parent = this;
    attached_lsp_count->parent = this;

    yang_name = "per-topology-counter"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::~PerTopologyCounter()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_data())
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_operation())
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>();
        }
        return id;
    }

    if(child_yang_name == "overloaded-lsp-count")
    {
        if(overloaded_lsp_count == nullptr)
        {
            overloaded_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>();
        }
        return overloaded_lsp_count;
    }

    if(child_yang_name == "attached-lsp-count")
    {
        if(attached_lsp_count == nullptr)
        {
            attached_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>();
        }
        return attached_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(overloaded_lsp_count != nullptr)
    {
        children["overloaded-lsp-count"] = overloaded_lsp_count;
    }

    if(attached_lsp_count != nullptr)
    {
        children["attached-lsp-count"] = attached_lsp_count;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "overloaded-lsp-count" || name == "attached-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::OverloadedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "overloaded-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::~OverloadedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overloaded-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::AttachedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "attached-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::~AttachedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
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
    char count=0;
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
    route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>())
	,pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>())
{
    route_lsp_count->parent = this;
    pseudo_node_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "all-fragment-lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_data() const
{
    return (route_lsp_count !=  nullptr && route_lsp_count->has_data())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation())
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation());
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
    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_lsp_count != nullptr)
    {
        children["route-lsp-count"] = route_lsp_count;
    }

    if(pseudo_node_lsp_count != nullptr)
    {
        children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
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
    if(name == "route-lsp-count" || name == "pseudo-node-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
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
    char count=0;
    count = 0;
    for (auto const & c : adjacency)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    adjacency_system_id{YType::str, "adjacency-system-id"},
    adjacency_snpa{YType::str, "adjacency-snpa"},
    adjacency_interface{YType::str, "adjacency-interface"},
    adjacency_media_type{YType::enumeration, "adjacency-media-type"},
    adjacency_state{YType::enumeration, "adjacency-state"},
    adjacency_bfd_state{YType::enumeration, "adjacency-bfd-state"},
    adjacency_ipv6bfd_state{YType::enumeration, "adjacency-ipv6bfd-state"},
    adj_ipv4bfd_retry_running{YType::boolean, "adj-ipv4bfd-retry-running"},
    adj_ipv6bfd_retry_running{YType::boolean, "adj-ipv6bfd-retry-running"},
    adj_ipv4bfd_retry_exp{YType::uint32, "adj-ipv4bfd-retry-exp"},
    adj_ipv6bfd_retry_exp{YType::uint32, "adj-ipv6bfd-retry-exp"},
    adj_ipv4bfd_retry_count{YType::uint32, "adj-ipv4bfd-retry-count"},
    adj_ipv6bfd_retry_count{YType::uint32, "adj-ipv6bfd-retry-count"},
    adjacency_uptime_valid_flag{YType::boolean, "adjacency-uptime-valid-flag"},
    adjacency_uptime{YType::uint32, "adjacency-uptime"},
    adjacency_holdtime{YType::uint32, "adjacency-holdtime"},
    adjacency_checkpoint_object_id{YType::uint32, "adjacency-checkpoint-object-id"},
    adjacency_ietf_nsf_capable_flag{YType::boolean, "adjacency-ietf-nsf-capable-flag"},
    adjacency_dispriority{YType::uint8, "adjacency-dispriority"},
    adjacency_neighbor_priority{YType::uint8, "adjacency-neighbor-priority"},
    adjacency_local_priority{YType::uint8, "adjacency-local-priority"},
    local_dis_flag{YType::boolean, "local-dis-flag"},
    neighbor_dis_flag{YType::boolean, "neighbor-dis-flag"},
    nsr_standby{YType::uint8, "nsr-standby"}
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
    for (std::size_t index=0; index<adjacency_topology.size(); index++)
    {
        if(adjacency_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.size(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_data())
            return true;
    }
    return system_id.is_set
	|| interface_name.is_set
	|| adjacency_system_id.is_set
	|| adjacency_snpa.is_set
	|| adjacency_interface.is_set
	|| adjacency_media_type.is_set
	|| adjacency_state.is_set
	|| adjacency_bfd_state.is_set
	|| adjacency_ipv6bfd_state.is_set
	|| adj_ipv4bfd_retry_running.is_set
	|| adj_ipv6bfd_retry_running.is_set
	|| adj_ipv4bfd_retry_exp.is_set
	|| adj_ipv6bfd_retry_exp.is_set
	|| adj_ipv4bfd_retry_count.is_set
	|| adj_ipv6bfd_retry_count.is_set
	|| adjacency_uptime_valid_flag.is_set
	|| adjacency_uptime.is_set
	|| adjacency_holdtime.is_set
	|| adjacency_checkpoint_object_id.is_set
	|| adjacency_ietf_nsf_capable_flag.is_set
	|| adjacency_dispriority.is_set
	|| adjacency_neighbor_priority.is_set
	|| adjacency_local_priority.is_set
	|| local_dis_flag.is_set
	|| neighbor_dis_flag.is_set
	|| nsr_standby.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_operation() const
{
    for (std::size_t index=0; index<adjacency_area_address.size(); index++)
    {
        if(adjacency_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_topology.size(); index++)
    {
        if(adjacency_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_per_address_family_data.size(); index++)
    {
        if(adjacency_per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(adjacency_system_id.yfilter)
	|| ydk::is_set(adjacency_snpa.yfilter)
	|| ydk::is_set(adjacency_interface.yfilter)
	|| ydk::is_set(adjacency_media_type.yfilter)
	|| ydk::is_set(adjacency_state.yfilter)
	|| ydk::is_set(adjacency_bfd_state.yfilter)
	|| ydk::is_set(adjacency_ipv6bfd_state.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_running.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_running.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_exp.yfilter)
	|| ydk::is_set(adj_ipv4bfd_retry_count.yfilter)
	|| ydk::is_set(adj_ipv6bfd_retry_count.yfilter)
	|| ydk::is_set(adjacency_uptime_valid_flag.yfilter)
	|| ydk::is_set(adjacency_uptime.yfilter)
	|| ydk::is_set(adjacency_holdtime.yfilter)
	|| ydk::is_set(adjacency_checkpoint_object_id.yfilter)
	|| ydk::is_set(adjacency_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(adjacency_dispriority.yfilter)
	|| ydk::is_set(adjacency_neighbor_priority.yfilter)
	|| ydk::is_set(adjacency_local_priority.yfilter)
	|| ydk::is_set(local_dis_flag.yfilter)
	|| ydk::is_set(neighbor_dis_flag.yfilter)
	|| ydk::is_set(nsr_standby.yfilter);
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

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (adjacency_system_id.is_set || is_set(adjacency_system_id.yfilter)) leaf_name_data.push_back(adjacency_system_id.get_name_leafdata());
    if (adjacency_snpa.is_set || is_set(adjacency_snpa.yfilter)) leaf_name_data.push_back(adjacency_snpa.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.yfilter)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (adjacency_media_type.is_set || is_set(adjacency_media_type.yfilter)) leaf_name_data.push_back(adjacency_media_type.get_name_leafdata());
    if (adjacency_state.is_set || is_set(adjacency_state.yfilter)) leaf_name_data.push_back(adjacency_state.get_name_leafdata());
    if (adjacency_bfd_state.is_set || is_set(adjacency_bfd_state.yfilter)) leaf_name_data.push_back(adjacency_bfd_state.get_name_leafdata());
    if (adjacency_ipv6bfd_state.is_set || is_set(adjacency_ipv6bfd_state.yfilter)) leaf_name_data.push_back(adjacency_ipv6bfd_state.get_name_leafdata());
    if (adj_ipv4bfd_retry_running.is_set || is_set(adj_ipv4bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_running.get_name_leafdata());
    if (adj_ipv6bfd_retry_running.is_set || is_set(adj_ipv6bfd_retry_running.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_running.get_name_leafdata());
    if (adj_ipv4bfd_retry_exp.is_set || is_set(adj_ipv4bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_exp.get_name_leafdata());
    if (adj_ipv6bfd_retry_exp.is_set || is_set(adj_ipv6bfd_retry_exp.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_exp.get_name_leafdata());
    if (adj_ipv4bfd_retry_count.is_set || is_set(adj_ipv4bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv4bfd_retry_count.get_name_leafdata());
    if (adj_ipv6bfd_retry_count.is_set || is_set(adj_ipv6bfd_retry_count.yfilter)) leaf_name_data.push_back(adj_ipv6bfd_retry_count.get_name_leafdata());
    if (adjacency_uptime_valid_flag.is_set || is_set(adjacency_uptime_valid_flag.yfilter)) leaf_name_data.push_back(adjacency_uptime_valid_flag.get_name_leafdata());
    if (adjacency_uptime.is_set || is_set(adjacency_uptime.yfilter)) leaf_name_data.push_back(adjacency_uptime.get_name_leafdata());
    if (adjacency_holdtime.is_set || is_set(adjacency_holdtime.yfilter)) leaf_name_data.push_back(adjacency_holdtime.get_name_leafdata());
    if (adjacency_checkpoint_object_id.is_set || is_set(adjacency_checkpoint_object_id.yfilter)) leaf_name_data.push_back(adjacency_checkpoint_object_id.get_name_leafdata());
    if (adjacency_ietf_nsf_capable_flag.is_set || is_set(adjacency_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(adjacency_ietf_nsf_capable_flag.get_name_leafdata());
    if (adjacency_dispriority.is_set || is_set(adjacency_dispriority.yfilter)) leaf_name_data.push_back(adjacency_dispriority.get_name_leafdata());
    if (adjacency_neighbor_priority.is_set || is_set(adjacency_neighbor_priority.yfilter)) leaf_name_data.push_back(adjacency_neighbor_priority.get_name_leafdata());
    if (adjacency_local_priority.is_set || is_set(adjacency_local_priority.yfilter)) leaf_name_data.push_back(adjacency_local_priority.get_name_leafdata());
    if (local_dis_flag.is_set || is_set(local_dis_flag.yfilter)) leaf_name_data.push_back(local_dis_flag.get_name_leafdata());
    if (neighbor_dis_flag.is_set || is_set(neighbor_dis_flag.yfilter)) leaf_name_data.push_back(neighbor_dis_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-area-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress>();
        c->parent = this;
        adjacency_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "adjacency-topology")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology>();
        c->parent = this;
        adjacency_topology.push_back(c);
        return c;
    }

    if(child_yang_name == "adjacency-per-address-family-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData>();
        c->parent = this;
        adjacency_per_address_family_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : adjacency_area_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : adjacency_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : adjacency_per_address_family_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id = value;
        adjacency_system_id.value_namespace = name_space;
        adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa = value;
        adjacency_snpa.value_namespace = name_space;
        adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
        adjacency_interface.value_namespace = name_space;
        adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type = value;
        adjacency_media_type.value_namespace = name_space;
        adjacency_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state = value;
        adjacency_state.value_namespace = name_space;
        adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state = value;
        adjacency_bfd_state.value_namespace = name_space;
        adjacency_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state = value;
        adjacency_ipv6bfd_state.value_namespace = name_space;
        adjacency_ipv6bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running = value;
        adj_ipv4bfd_retry_running.value_namespace = name_space;
        adj_ipv4bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running = value;
        adj_ipv6bfd_retry_running.value_namespace = name_space;
        adj_ipv6bfd_retry_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp = value;
        adj_ipv4bfd_retry_exp.value_namespace = name_space;
        adj_ipv4bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp = value;
        adj_ipv6bfd_retry_exp.value_namespace = name_space;
        adj_ipv6bfd_retry_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count = value;
        adj_ipv4bfd_retry_count.value_namespace = name_space;
        adj_ipv4bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count = value;
        adj_ipv6bfd_retry_count.value_namespace = name_space;
        adj_ipv6bfd_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag = value;
        adjacency_uptime_valid_flag.value_namespace = name_space;
        adjacency_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime = value;
        adjacency_uptime.value_namespace = name_space;
        adjacency_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime = value;
        adjacency_holdtime.value_namespace = name_space;
        adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id = value;
        adjacency_checkpoint_object_id.value_namespace = name_space;
        adjacency_checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag = value;
        adjacency_ietf_nsf_capable_flag.value_namespace = name_space;
        adjacency_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority = value;
        adjacency_dispriority.value_namespace = name_space;
        adjacency_dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority = value;
        adjacency_neighbor_priority.value_namespace = name_space;
        adjacency_neighbor_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority = value;
        adjacency_local_priority.value_namespace = name_space;
        adjacency_local_priority.value_namespace_prefix = name_space_prefix;
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
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type.yfilter = yfilter;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state.yfilter = yfilter;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp.yfilter = yfilter;
    }
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime.yfilter = yfilter;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority.yfilter = yfilter;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority.yfilter = yfilter;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority.yfilter = yfilter;
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
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-area-address" || name == "adjacency-topology" || name == "adjacency-per-address-family-data" || name == "system-id" || name == "interface-name" || name == "adjacency-system-id" || name == "adjacency-snpa" || name == "adjacency-interface" || name == "adjacency-media-type" || name == "adjacency-state" || name == "adjacency-bfd-state" || name == "adjacency-ipv6bfd-state" || name == "adj-ipv4bfd-retry-running" || name == "adj-ipv6bfd-retry-running" || name == "adj-ipv4bfd-retry-exp" || name == "adj-ipv6bfd-retry-exp" || name == "adj-ipv4bfd-retry-count" || name == "adj-ipv6bfd-retry-count" || name == "adjacency-uptime-valid-flag" || name == "adjacency-uptime" || name == "adjacency-holdtime" || name == "adjacency-checkpoint-object-id" || name == "adjacency-ietf-nsf-capable-flag" || name == "adjacency-dispriority" || name == "adjacency-neighbor-priority" || name == "adjacency-local-priority" || name == "local-dis-flag" || name == "neighbor-dis-flag" || name == "nsr-standby")
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
    char count=0;
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

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::AdjacencyTopology()
    :
    topology_status{YType::enumeration, "topology-status"},
    parallel_p2p_link_suppressed_flag{YType::boolean, "parallel-p2p-link-suppressed-flag"}
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
    return topology_status.is_set
	|| parallel_p2p_link_suppressed_flag.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_status.yfilter)
	|| ydk::is_set(parallel_p2p_link_suppressed_flag.yfilter)
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

    if (topology_status.is_set || is_set(topology_status.yfilter)) leaf_name_data.push_back(topology_status.get_name_leafdata());
    if (parallel_p2p_link_suppressed_flag.is_set || is_set(parallel_p2p_link_suppressed_flag.yfilter)) leaf_name_data.push_back(parallel_p2p_link_suppressed_flag.get_name_leafdata());

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
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-status")
    {
        topology_status = value;
        topology_status.value_namespace = name_space;
        topology_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parallel-p2p-link-suppressed-flag")
    {
        parallel_p2p_link_suppressed_flag = value;
        parallel_p2p_link_suppressed_flag.value_namespace = name_space;
        parallel_p2p_link_suppressed_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-status")
    {
        topology_status.yfilter = yfilter;
    }
    if(value_path == "parallel-p2p-link-suppressed-flag")
    {
        parallel_p2p_link_suppressed_flag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "topology-status" || name == "parallel-p2p-link-suppressed-flag")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
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
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
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
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
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
    char count=0;
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

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
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
    char count=0;
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    count = 0;
    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
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
    char count=0;
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    count = 0;
    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : underlying_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "adjacency-sid" || name == "non-frr-adjacency-sid" || name == "interface-address" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_node_address{YType::str, "backup-node-address"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_interface{YType::str, "backup-interface"}
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
    return backup_label_stack_size.is_set
	|| backup_node_address.is_set
	|| backup_nexthop.is_set
	|| backup_interface.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_node_address.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_interface.yfilter);
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

    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : backup_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-label-stack-size" || name == "backup-node-address" || name == "backup-nexthop" || name == "backup-interface")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : detailed_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    lsp_id{YType::str, "lsp-id"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_length{YType::uint16, "lsp-length"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    id_length{YType::uint8, "id-length"},
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
    return lsp_id.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_holdtime.is_set
	|| lsp_sequence_number.is_set
	|| lsp_checksum.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_level.is_set
	|| lsp_length.is_set
	|| max_area_addresses.is_set
	|| id_length.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(id_length.yfilter)
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

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
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
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
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
    if(name == "lsp-id" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-holdtime" || name == "lsp-sequence-number" || name == "lsp-checksum" || name == "lsp-partition-repair-supported-flag" || name == "lsp-attached-flag" || name == "lsp-overloaded-flag" || name == "lsp-nonv1a-flag" || name == "lsp-level" || name == "lsp-length" || name == "max-area-addresses" || name == "id-length" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsps()
{

    yang_name = "lsps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::~Lsps()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::Lsp()
    :
    lsp_id{YType::str, "lsp-id"},
    lsp_body{YType::str, "lsp-body"}
    	,
    lsp_header_data(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>())
{
    lsp_header_data->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::~Lsp()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_data() const
{
    return lsp_id.is_set
	|| lsp_body.is_set
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_body.yfilter)
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_body.is_set || is_set(lsp_body.yfilter)) leaf_name_data.push_back(lsp_body.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-header-data")
    {
        if(lsp_header_data == nullptr)
        {
            lsp_header_data = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>();
        }
        return lsp_header_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_header_data != nullptr)
    {
        children["lsp-header-data"] = lsp_header_data;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-header-data" || name == "lsp-id" || name == "lsp-body")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::LspHeaderData()
    :
    lsp_id{YType::str, "lsp-id"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_length{YType::uint16, "lsp-length"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    id_length{YType::uint8, "id-length"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"}
{

    yang_name = "lsp-header-data"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::~LspHeaderData()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_data() const
{
    return lsp_id.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_holdtime.is_set
	|| lsp_sequence_number.is_set
	|| lsp_checksum.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_level.is_set
	|| lsp_length.is_set
	|| max_area_addresses.is_set
	|| id_length.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-header-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
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

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
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

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-holdtime" || name == "lsp-sequence-number" || name == "lsp-checksum" || name == "lsp-partition-repair-supported-flag" || name == "lsp-attached-flag" || name == "lsp-overloaded-flag" || name == "lsp-nonv1a-flag" || name == "lsp-level" || name == "lsp-length" || name == "max-area-addresses" || name == "id-length" || name == "version" || name == "version2")
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
    char count=0;
    count = 0;
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    trigger_count{YType::uint32, "trigger-count"},
    delayed_trigger_count{YType::uint32, "delayed-trigger-count"},
    log_interface{YType::str, "log-interface"},
    pseudo_node_number{YType::uint8, "pseudo-node-number"}
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
    return trigger_count.is_set
	|| delayed_trigger_count.is_set
	|| log_interface.is_set
	|| pseudo_node_number.is_set
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
	|| ydk::is_set(trigger_count.yfilter)
	|| ydk::is_set(delayed_trigger_count.yfilter)
	|| ydk::is_set(log_interface.yfilter)
	|| ydk::is_set(pseudo_node_number.yfilter)
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

    if (trigger_count.is_set || is_set(trigger_count.yfilter)) leaf_name_data.push_back(trigger_count.get_name_leafdata());
    if (delayed_trigger_count.is_set || is_set(delayed_trigger_count.yfilter)) leaf_name_data.push_back(delayed_trigger_count.get_name_leafdata());
    if (log_interface.is_set || is_set(log_interface.yfilter)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (pseudo_node_number.is_set || is_set(pseudo_node_number.yfilter)) leaf_name_data.push_back(pseudo_node_number.get_name_leafdata());

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
    char count=0;
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    count = 0;
    for (auto const & c : trigger)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-count")
    {
        trigger_count = value;
        trigger_count.value_namespace = name_space;
        trigger_count.value_namespace_prefix = name_space_prefix;
    }
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
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-count")
    {
        trigger_count.yfilter = yfilter;
    }
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
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "trigger" || name == "trigger-count" || name == "delayed-trigger-count" || name == "log-interface" || name == "pseudo-node-number")
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
    char count=0;
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
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
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

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
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

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::NewLspEntry()
    :
    lsp_id{YType::str, "lsp-id"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_length{YType::uint16, "lsp-length"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    id_length{YType::uint8, "id-length"},
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
    return lsp_id.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_holdtime.is_set
	|| lsp_sequence_number.is_set
	|| lsp_checksum.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_level.is_set
	|| lsp_length.is_set
	|| max_area_addresses.is_set
	|| id_length.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(id_length.yfilter)
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

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
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
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
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
    if(name == "lsp-id" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-holdtime" || name == "lsp-sequence-number" || name == "lsp-checksum" || name == "lsp-partition-repair-supported-flag" || name == "lsp-attached-flag" || name == "lsp-overloaded-flag" || name == "lsp-nonv1a-flag" || name == "lsp-level" || name == "lsp-length" || name == "max-area-addresses" || name == "id-length" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::OldLspEntry()
    :
    lsp_id{YType::str, "lsp-id"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_length{YType::uint16, "lsp-length"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    id_length{YType::uint8, "id-length"},
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
    return lsp_id.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_holdtime.is_set
	|| lsp_sequence_number.is_set
	|| lsp_checksum.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_level.is_set
	|| lsp_length.is_set
	|| max_area_addresses.is_set
	|| id_length.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(id_length.yfilter)
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

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
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
    char count=0;
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
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
    if(name == "lsp-id" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-holdtime" || name == "lsp-sequence-number" || name == "lsp-checksum" || name == "lsp-partition-repair-supported-flag" || name == "lsp-attached-flag" || name == "lsp-overloaded-flag" || name == "lsp-nonv1a-flag" || name == "lsp-level" || name == "lsp-length" || name == "max-area-addresses" || name == "id-length" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::~Topologies()
{
}

bool Isis::Instances::Instance::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Topology()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    frr_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>())
	,topology_levels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>())
	,ipv6_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>())
	,ipv6frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>())
	,ipv4frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>())
	,ipv4_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>())
{
    frr_summary->parent = this;
    topology_levels->parent = this;
    ipv6_routes->parent = this;
    ipv6frr_backups->parent = this;
    ipv4frr_backups->parent = this;
    ipv4_routes->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::~Topology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| (frr_summary !=  nullptr && frr_summary->has_data())
	|| (topology_levels !=  nullptr && topology_levels->has_data())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_data())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_data())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_data())
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (frr_summary !=  nullptr && frr_summary->has_operation())
	|| (topology_levels !=  nullptr && topology_levels->has_operation())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_operation())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_operation())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_operation())
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-summary")
    {
        if(frr_summary == nullptr)
        {
            frr_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>();
        }
        return frr_summary;
    }

    if(child_yang_name == "topology-levels")
    {
        if(topology_levels == nullptr)
        {
            topology_levels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>();
        }
        return topology_levels;
    }

    if(child_yang_name == "ipv6-routes")
    {
        if(ipv6_routes == nullptr)
        {
            ipv6_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>();
        }
        return ipv6_routes;
    }

    if(child_yang_name == "ipv6frr-backups")
    {
        if(ipv6frr_backups == nullptr)
        {
            ipv6frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>();
        }
        return ipv6frr_backups;
    }

    if(child_yang_name == "ipv4frr-backups")
    {
        if(ipv4frr_backups == nullptr)
        {
            ipv4frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>();
        }
        return ipv4frr_backups;
    }

    if(child_yang_name == "ipv4-routes")
    {
        if(ipv4_routes == nullptr)
        {
            ipv4_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>();
        }
        return ipv4_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_summary != nullptr)
    {
        children["frr-summary"] = frr_summary;
    }

    if(topology_levels != nullptr)
    {
        children["topology-levels"] = topology_levels;
    }

    if(ipv6_routes != nullptr)
    {
        children["ipv6-routes"] = ipv6_routes;
    }

    if(ipv6frr_backups != nullptr)
    {
        children["ipv6frr-backups"] = ipv6frr_backups;
    }

    if(ipv4frr_backups != nullptr)
    {
        children["ipv4frr-backups"] = ipv4frr_backups;
    }

    if(ipv4_routes != nullptr)
    {
        children["ipv4-routes"] = ipv4_routes;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Isis::Instances::Instance::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-summary" || name == "topology-levels" || name == "ipv6-routes" || name == "ipv6frr-backups" || name == "ipv4frr-backups" || name == "ipv4-routes" || name == "af-name" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::FrrSummary()
    :
    level1_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>())
	,level2_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>())
	,unreachable_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>())
{
    level1_prefixes->parent = this;
    level2_prefixes->parent = this;
    unreachable_prefixes->parent = this;

    yang_name = "frr-summary"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::~FrrSummary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_data() const
{
    return (level1_prefixes !=  nullptr && level1_prefixes->has_data())
	|| (level2_prefixes !=  nullptr && level2_prefixes->has_data())
	|| (unreachable_prefixes !=  nullptr && unreachable_prefixes->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_operation() const
{
    return is_set(yfilter)
	|| (level1_prefixes !=  nullptr && level1_prefixes->has_operation())
	|| (level2_prefixes !=  nullptr && level2_prefixes->has_operation())
	|| (unreachable_prefixes !=  nullptr && unreachable_prefixes->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-prefixes")
    {
        if(level1_prefixes == nullptr)
        {
            level1_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>();
        }
        return level1_prefixes;
    }

    if(child_yang_name == "level2-prefixes")
    {
        if(level2_prefixes == nullptr)
        {
            level2_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>();
        }
        return level2_prefixes;
    }

    if(child_yang_name == "unreachable-prefixes")
    {
        if(unreachable_prefixes == nullptr)
        {
            unreachable_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>();
        }
        return unreachable_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level1_prefixes != nullptr)
    {
        children["level1-prefixes"] = level1_prefixes;
    }

    if(level2_prefixes != nullptr)
    {
        children["level2-prefixes"] = level2_prefixes;
    }

    if(unreachable_prefixes != nullptr)
    {
        children["unreachable-prefixes"] = unreachable_prefixes;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-prefixes" || name == "level2-prefixes" || name == "unreachable-prefixes")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Level1Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    some_paths_protected->parent = this;
    unprotected->parent = this;

    yang_name = "level1-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::~Level1Prefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_data() const
{
    return (all_paths_protected !=  nullptr && all_paths_protected->has_data())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_data())
	|| (unprotected !=  nullptr && unprotected->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| (all_paths_protected !=  nullptr && all_paths_protected->has_operation())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_operation())
	|| (unprotected !=  nullptr && unprotected->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected == nullptr)
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>();
        }
        return all_paths_protected;
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected == nullptr)
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>();
        }
        return some_paths_protected;
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected == nullptr)
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>();
        }
        return unprotected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_paths_protected != nullptr)
    {
        children["all-paths-protected"] = all_paths_protected;
    }

    if(some_paths_protected != nullptr)
    {
        children["some-paths-protected"] = some_paths_protected;
    }

    if(unprotected != nullptr)
    {
        children["unprotected"] = unprotected;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-paths-protected" || name == "some-paths-protected" || name == "unprotected")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "all-paths-protected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "some-paths-protected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unprotected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Level2Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    some_paths_protected->parent = this;
    unprotected->parent = this;

    yang_name = "level2-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::~Level2Prefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_data() const
{
    return (all_paths_protected !=  nullptr && all_paths_protected->has_data())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_data())
	|| (unprotected !=  nullptr && unprotected->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| (all_paths_protected !=  nullptr && all_paths_protected->has_operation())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_operation())
	|| (unprotected !=  nullptr && unprotected->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected == nullptr)
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>();
        }
        return all_paths_protected;
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected == nullptr)
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>();
        }
        return some_paths_protected;
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected == nullptr)
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>();
        }
        return unprotected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_paths_protected != nullptr)
    {
        children["all-paths-protected"] = all_paths_protected;
    }

    if(some_paths_protected != nullptr)
    {
        children["some-paths-protected"] = some_paths_protected;
    }

    if(unprotected != nullptr)
    {
        children["unprotected"] = unprotected;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-paths-protected" || name == "some-paths-protected" || name == "unprotected")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "all-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "some-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unprotected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::UnreachablePrefixes()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "unreachable-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::~UnreachablePrefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevels()
{

    yang_name = "topology-levels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::~TopologyLevels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_data() const
{
    for (std::size_t index=0; index<topology_level.size(); index++)
    {
        if(topology_level[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_operation() const
{
    for (std::size_t index=0; index<topology_level.size(); index++)
    {
        if(topology_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-level")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel>();
        c->parent = this;
        topology_level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_level)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologyLevel()
    :
    level{YType::enumeration, "level"}
    	,
    te_advertisements(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>())
	,te_adjacency_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>())
	,spf_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>())
	,te_tunnels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>())
	,ipv4_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>())
	,topology_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>())
	,ipv6_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>())
{
    te_advertisements->parent = this;
    te_adjacency_log->parent = this;
    spf_log->parent = this;
    te_tunnels->parent = this;
    ipv4_link_topologies->parent = this;
    topology_summary->parent = this;
    ipv6_link_topologies->parent = this;

    yang_name = "topology-level"; yang_parent_name = "topology-levels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::~TopologyLevel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_data() const
{
    return level.is_set
	|| (te_advertisements !=  nullptr && te_advertisements->has_data())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_data())
	|| (spf_log !=  nullptr && spf_log->has_data())
	|| (te_tunnels !=  nullptr && te_tunnels->has_data())
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (te_advertisements !=  nullptr && te_advertisements->has_operation())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_operation())
	|| (spf_log !=  nullptr && spf_log->has_operation())
	|| (te_tunnels !=  nullptr && te_tunnels->has_operation())
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-level" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-advertisements")
    {
        if(te_advertisements == nullptr)
        {
            te_advertisements = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>();
        }
        return te_advertisements;
    }

    if(child_yang_name == "te-adjacency-log")
    {
        if(te_adjacency_log == nullptr)
        {
            te_adjacency_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>();
        }
        return te_adjacency_log;
    }

    if(child_yang_name == "spf-log")
    {
        if(spf_log == nullptr)
        {
            spf_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>();
        }
        return spf_log;
    }

    if(child_yang_name == "te-tunnels")
    {
        if(te_tunnels == nullptr)
        {
            te_tunnels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>();
        }
        return te_tunnels;
    }

    if(child_yang_name == "ipv4-link-topologies")
    {
        if(ipv4_link_topologies == nullptr)
        {
            ipv4_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>();
        }
        return ipv4_link_topologies;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "ipv6-link-topologies")
    {
        if(ipv6_link_topologies == nullptr)
        {
            ipv6_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>();
        }
        return ipv6_link_topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_advertisements != nullptr)
    {
        children["te-advertisements"] = te_advertisements;
    }

    if(te_adjacency_log != nullptr)
    {
        children["te-adjacency-log"] = te_adjacency_log;
    }

    if(spf_log != nullptr)
    {
        children["spf-log"] = spf_log;
    }

    if(te_tunnels != nullptr)
    {
        children["te-tunnels"] = te_tunnels;
    }

    if(ipv4_link_topologies != nullptr)
    {
        children["ipv4-link-topologies"] = ipv4_link_topologies;
    }

    if(topology_summary != nullptr)
    {
        children["topology-summary"] = topology_summary;
    }

    if(ipv6_link_topologies != nullptr)
    {
        children["ipv6-link-topologies"] = ipv6_link_topologies;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-advertisements" || name == "te-adjacency-log" || name == "spf-log" || name == "te-tunnels" || name == "ipv4-link-topologies" || name == "topology-summary" || name == "ipv6-link-topologies" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdvertisements()
    :
    te_adv_data_present{YType::boolean, "te-adv-data-present"},
    te_system_id{YType::str, "te-system-id"},
    te_local_router_id{YType::str, "te-local-router-id"}
    	,
    tepceadv(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>())
{
    tepceadv->parent = this;

    yang_name = "te-advertisements"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::~TeAdvertisements()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_data() const
{
    for (std::size_t index=0; index<te_adv.size(); index++)
    {
        if(te_adv[index]->has_data())
            return true;
    }
    return te_adv_data_present.is_set
	|| te_system_id.is_set
	|| te_local_router_id.is_set
	|| (tepceadv !=  nullptr && tepceadv->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_operation() const
{
    for (std::size_t index=0; index<te_adv.size(); index++)
    {
        if(te_adv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_adv_data_present.yfilter)
	|| ydk::is_set(te_system_id.yfilter)
	|| ydk::is_set(te_local_router_id.yfilter)
	|| (tepceadv !=  nullptr && tepceadv->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_adv_data_present.is_set || is_set(te_adv_data_present.yfilter)) leaf_name_data.push_back(te_adv_data_present.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.yfilter)) leaf_name_data.push_back(te_system_id.get_name_leafdata());
    if (te_local_router_id.is_set || is_set(te_local_router_id.yfilter)) leaf_name_data.push_back(te_local_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tepceadv")
    {
        if(tepceadv == nullptr)
        {
            tepceadv = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>();
        }
        return tepceadv;
    }

    if(child_yang_name == "te-adv")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv>();
        c->parent = this;
        te_adv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tepceadv != nullptr)
    {
        children["tepceadv"] = tepceadv;
    }

    count = 0;
    for (auto const & c : te_adv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present = value;
        te_adv_data_present.value_namespace = name_space;
        te_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
        te_system_id.value_namespace = name_space;
        te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id = value;
        te_local_router_id.value_namespace = name_space;
        te_local_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "te-system-id")
    {
        te_system_id.yfilter = yfilter;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tepceadv" || name == "te-adv" || name == "te-adv-data-present" || name == "te-system-id" || name == "te-local-router-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::Tepceadv()
    :
    pce_adv_data_present{YType::boolean, "pce-adv-data-present"},
    pce_flooding_scope{YType::enumeration, "pce-flooding-scope"},
    pce_address_ipv4{YType::str, "pce-address-ipv4"},
    pce_path_scope_bits{YType::uint8, "pce-path-scope-bits"},
    pce_path_scope_prefs{YType::uint16, "pce-path-scope-prefs"}
{

    yang_name = "tepceadv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::~Tepceadv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_data() const
{
    return pce_adv_data_present.is_set
	|| pce_flooding_scope.is_set
	|| pce_address_ipv4.is_set
	|| pce_path_scope_bits.is_set
	|| pce_path_scope_prefs.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_adv_data_present.yfilter)
	|| ydk::is_set(pce_flooding_scope.yfilter)
	|| ydk::is_set(pce_address_ipv4.yfilter)
	|| ydk::is_set(pce_path_scope_bits.yfilter)
	|| ydk::is_set(pce_path_scope_prefs.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tepceadv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_adv_data_present.is_set || is_set(pce_adv_data_present.yfilter)) leaf_name_data.push_back(pce_adv_data_present.get_name_leafdata());
    if (pce_flooding_scope.is_set || is_set(pce_flooding_scope.yfilter)) leaf_name_data.push_back(pce_flooding_scope.get_name_leafdata());
    if (pce_address_ipv4.is_set || is_set(pce_address_ipv4.yfilter)) leaf_name_data.push_back(pce_address_ipv4.get_name_leafdata());
    if (pce_path_scope_bits.is_set || is_set(pce_path_scope_bits.yfilter)) leaf_name_data.push_back(pce_path_scope_bits.get_name_leafdata());
    if (pce_path_scope_prefs.is_set || is_set(pce_path_scope_prefs.yfilter)) leaf_name_data.push_back(pce_path_scope_prefs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present = value;
        pce_adv_data_present.value_namespace = name_space;
        pce_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope = value;
        pce_flooding_scope.value_namespace = name_space;
        pce_flooding_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4 = value;
        pce_address_ipv4.value_namespace = name_space;
        pce_address_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits = value;
        pce_path_scope_bits.value_namespace = name_space;
        pce_path_scope_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs = value;
        pce_path_scope_prefs.value_namespace = name_space;
        pce_path_scope_prefs.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope.yfilter = yfilter;
    }
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-adv-data-present" || name == "pce-flooding-scope" || name == "pce-address-ipv4" || name == "pce-path-scope-bits" || name == "pce-path-scope-prefs")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeAdv()
    :
    te_neighbor_system_id{YType::str, "te-neighbor-system-id"},
    link_type{YType::enumeration, "link-type"},
    local_ip_address{YType::str, "local-ip-address"},
    te_neighbor_ip_address{YType::str, "te-neighbor-ip-address"},
    te_metric{YType::uint32, "te-metric"},
    te_physical_link_bandwidth{YType::uint32, "te-physical-link-bandwidth"},
    te_reserved_link_bandwidth{YType::uint32, "te-reserved-link-bandwidth"},
    te_subpool_reserved_link_bandwidth{YType::uint32, "te-subpool-reserved-link-bandwidth"},
    te_affinity{YType::uint32, "te-affinity"},
    te_ext_admin_num{YType::uint32, "te-ext-admin-num"},
    te_sub_tlv_data_present{YType::boolean, "te-sub-tlv-data-present"}
{

    yang_name = "te-adv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::~TeAdv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_data() const
{
    for (std::size_t index=0; index<te_transmitted_bandwidth.size(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.size(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_ext_admin_sub.size(); index++)
    {
        if(te_ext_admin_sub[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_data())
            return true;
    }
    return te_neighbor_system_id.is_set
	|| link_type.is_set
	|| local_ip_address.is_set
	|| te_neighbor_ip_address.is_set
	|| te_metric.is_set
	|| te_physical_link_bandwidth.is_set
	|| te_reserved_link_bandwidth.is_set
	|| te_subpool_reserved_link_bandwidth.is_set
	|| te_affinity.is_set
	|| te_ext_admin_num.is_set
	|| te_sub_tlv_data_present.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_operation() const
{
    for (std::size_t index=0; index<te_transmitted_bandwidth.size(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.size(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_ext_admin_sub.size(); index++)
    {
        if(te_ext_admin_sub[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_neighbor_system_id.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(te_neighbor_ip_address.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(te_physical_link_bandwidth.yfilter)
	|| ydk::is_set(te_reserved_link_bandwidth.yfilter)
	|| ydk::is_set(te_subpool_reserved_link_bandwidth.yfilter)
	|| ydk::is_set(te_affinity.yfilter)
	|| ydk::is_set(te_ext_admin_num.yfilter)
	|| ydk::is_set(te_sub_tlv_data_present.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_neighbor_system_id.is_set || is_set(te_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_neighbor_system_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (te_neighbor_ip_address.is_set || is_set(te_neighbor_ip_address.yfilter)) leaf_name_data.push_back(te_neighbor_ip_address.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (te_physical_link_bandwidth.is_set || is_set(te_physical_link_bandwidth.yfilter)) leaf_name_data.push_back(te_physical_link_bandwidth.get_name_leafdata());
    if (te_reserved_link_bandwidth.is_set || is_set(te_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_reserved_link_bandwidth.get_name_leafdata());
    if (te_subpool_reserved_link_bandwidth.is_set || is_set(te_subpool_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_subpool_reserved_link_bandwidth.get_name_leafdata());
    if (te_affinity.is_set || is_set(te_affinity.yfilter)) leaf_name_data.push_back(te_affinity.get_name_leafdata());
    if (te_ext_admin_num.is_set || is_set(te_ext_admin_num.yfilter)) leaf_name_data.push_back(te_ext_admin_num.get_name_leafdata());
    if (te_sub_tlv_data_present.is_set || is_set(te_sub_tlv_data_present.yfilter)) leaf_name_data.push_back(te_sub_tlv_data_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-transmitted-bandwidth")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth>();
        c->parent = this;
        te_transmitted_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "te-subpool-transmitted-bandwidth")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth>();
        c->parent = this;
        te_subpool_transmitted_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "te-ext-admin-sub")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub>();
        c->parent = this;
        te_ext_admin_sub.push_back(c);
        return c;
    }

    if(child_yang_name == "te-sub-tlv")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv>();
        c->parent = this;
        te_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_transmitted_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : te_subpool_transmitted_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : te_ext_admin_sub)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : te_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id = value;
        te_neighbor_system_id.value_namespace = name_space;
        te_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address = value;
        te_neighbor_ip_address.value_namespace = name_space;
        te_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth = value;
        te_physical_link_bandwidth.value_namespace = name_space;
        te_physical_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth = value;
        te_reserved_link_bandwidth.value_namespace = name_space;
        te_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth = value;
        te_subpool_reserved_link_bandwidth.value_namespace = name_space;
        te_subpool_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-affinity")
    {
        te_affinity = value;
        te_affinity.value_namespace = name_space;
        te_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num = value;
        te_ext_admin_num.value_namespace = name_space;
        te_ext_admin_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present = value;
        te_sub_tlv_data_present.value_namespace = name_space;
        te_sub_tlv_data_present.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-affinity")
    {
        te_affinity.yfilter = yfilter;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-transmitted-bandwidth" || name == "te-subpool-transmitted-bandwidth" || name == "te-ext-admin-sub" || name == "te-sub-tlv" || name == "te-neighbor-system-id" || name == "link-type" || name == "local-ip-address" || name == "te-neighbor-ip-address" || name == "te-metric" || name == "te-physical-link-bandwidth" || name == "te-reserved-link-bandwidth" || name == "te-subpool-reserved-link-bandwidth" || name == "te-affinity" || name == "te-ext-admin-num" || name == "te-sub-tlv-data-present")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::TeTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::~TeTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-transmitted-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::TeSubpoolTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-subpool-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::~TeSubpoolTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-subpool-transmitted-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::TeExtAdminSub()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-ext-admin-sub"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::~TeExtAdminSub()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-ext-admin-sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::TeSubTlv()
    :
    te_sub_tlv_type{YType::uint16, "te-sub-tlv-type"},
    te_sub_tlv_length{YType::uint16, "te-sub-tlv-length"},
    te_sub_tlv_value{YType::str, "te-sub-tlv-value"}
{

    yang_name = "te-sub-tlv"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::~TeSubTlv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_data() const
{
    return te_sub_tlv_type.is_set
	|| te_sub_tlv_length.is_set
	|| te_sub_tlv_value.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_sub_tlv_type.yfilter)
	|| ydk::is_set(te_sub_tlv_length.yfilter)
	|| ydk::is_set(te_sub_tlv_value.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_sub_tlv_type.is_set || is_set(te_sub_tlv_type.yfilter)) leaf_name_data.push_back(te_sub_tlv_type.get_name_leafdata());
    if (te_sub_tlv_length.is_set || is_set(te_sub_tlv_length.yfilter)) leaf_name_data.push_back(te_sub_tlv_length.get_name_leafdata());
    if (te_sub_tlv_value.is_set || is_set(te_sub_tlv_value.yfilter)) leaf_name_data.push_back(te_sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type = value;
        te_sub_tlv_type.value_namespace = name_space;
        te_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length = value;
        te_sub_tlv_length.value_namespace = name_space;
        te_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value = value;
        te_sub_tlv_value.value_namespace = name_space;
        te_sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-sub-tlv-type" || name == "te-sub-tlv-length" || name == "te-sub-tlv-value")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::TeAdjacencyLog()
{

    yang_name = "te-adjacency-log"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::~TeAdjacencyLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adjacency-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::LogEntry()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    status{YType::boolean, "status"},
    log_interface{YType::str, "log-interface"},
    te_log_neighbor_system_id{YType::str, "te-log-neighbor-system-id"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "te-adjacency-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_data() const
{
    return neighbor_ip_address.is_set
	|| status.is_set
	|| log_interface.is_set
	|| te_log_neighbor_system_id.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(log_interface.yfilter)
	|| ydk::is_set(te_log_neighbor_system_id.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (log_interface.is_set || is_set(log_interface.yfilter)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (te_log_neighbor_system_id.is_set || is_set(te_log_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_log_neighbor_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-interface")
    {
        log_interface = value;
        log_interface.value_namespace = name_space;
        log_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id = value;
        te_log_neighbor_system_id.value_namespace = name_space;
        te_log_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "log-interface")
    {
        log_interface.yfilter = yfilter;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "neighbor-ip-address" || name == "status" || name == "log-interface" || name == "te-log-neighbor-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};

const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_none {0, "isis-u-loop-event-none"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_down {1, "isis-u-loop-event-link-down"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_up {2, "isis-u-loop-event-link-up"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_set {3, "isis-u-loop-event-ol-bit-set"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_unset {4, "isis-u-loop-event-ol-bit-unset"};

const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_none {0, "isis-u-loop-avoidance-type-none"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_all {1, "isis-u-loop-avoidance-type-all"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_protected {2, "isis-u-loop-avoidance-type-protected"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_sr {3, "isis-u-loop-avoidance-type-sr"};

const Enum::YLeaf IsisMetricStyle::isis_metric_style_narrow {0, "isis-metric-style-narrow"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_wide {1, "isis-metric-style-wide"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_transition {2, "isis-metric-style-transition"};

const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_active {0, "isis-startup-ssm-active"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_complete {1, "isis-startup-ssm-complete"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_aborted {2, "isis-startup-ssm-aborted"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_not_run {3, "isis-startup-ssm-not-run"};

const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_none {0, "isis-nsf-flav-or-none"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_cisco {1, "isis-nsf-flav-or-cisco"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_ietf {2, "isis-nsf-flav-or-ietf"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_nsr {3, "isis-nsf-flav-or-nsr"};

const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_info {0, "isis-err-log-level-info"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_warn {1, "isis-err-log-level-warn"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_critical {2, "isis-err-log-level-critical"};

const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_adv_suppressed {0, "isis-intf-af-prefix-unknown-adv-suppressed"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_global_addr_reg_error {1, "isis-intf-af-prefix-unknown-global-addr-reg-error"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_internal_error {2, "isis-intf-af-prefix-unknown-internal-error"};

const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_cfg_passive {0, "isis-intf-af-fwd-addr-unknown-cfg-passive"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_proto_doesnt_exist {1, "isis-intf-af-fwd-addr-unknown-proto-doesnt-exist"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_next_hop_reg_error {2, "isis-intf-af-fwd-addr-unknown-next-hop-reg-error"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_no_link_local_add {3, "isis-intf-af-fwd-addr-unknown-no-link-local-add"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_af_not_up {4, "isis-intf-af-fwd-addr-unknown-af-not-up"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_vrf_enabled {5, "isis-intf-af-fwd-addr-unknown-vrf-enabled"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_internal_error {6, "isis-intf-af-fwd-addr-unknown-internal-error"};

const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_conn_fail {0, "isis-intf-af-proto-down-imd-conn-fail"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_node_doesnt_exist {1, "isis-intf-af-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_exist_reg_error {2, "isis-intf-af-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_state_reg_error {3, "isis-intf-af-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_af_not_up {4, "isis-intf-af-proto-down-af-not-up"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_internal_error {5, "isis-intf-af-proto-down-internal-error"};

const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_no_topo_enabled {0, "isis-intf-af-disabled-no-topo-enabled"};
const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_internal_error {1, "isis-intf-af-disabled-internal-error"};

const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_down_stream {0, "isis-frr-tiebreaker-down-stream"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_lc_disjoint {1, "isis-frr-tiebreaker-lc-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_low_est_backup_metric {2, "isis-frr-tiebreaker-low-est-backup-metric"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_node_protecting {3, "isis-frr-tiebreaker-node-protecting"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_primary_path {4, "isis-frr-tiebreaker-primary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_secondary_path {5, "isis-frr-tiebreaker-secondary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_srlg_disjoint {6, "isis-frr-tiebreaker-srlg-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_default {7, "isis-frr-tiebreaker-default"};

const Enum::YLeaf IsisFrr::isis_frr_type_none {0, "isis-frr-type-none"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_link {1, "isis-frr-type-per-link"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_prefix {2, "isis-frr-type-per-prefix"};
const Enum::YLeaf IsisFrr::isis_frr_type_sr_u_loop {3, "isis-frr-type-sr-u-loop"};

const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_intf_suppressed {0, "isis-intf-topo-adv-prefix-disabled-intf-suppressed"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_not_up {1, "isis-intf-topo-adv-prefix-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown {2, "isis-intf-topo-adv-prefix-disabled-af-prefixes-unknown"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_internal_error {3, "isis-intf-topo-adv-prefix-disabled-internal-error"};

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

const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_not_cfg {0, "isis-intf-topo-disabled-not-cfg"};
const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_internal_error {1, "isis-intf-topo-disabled-internal-error"};

const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_join_error {0, "isis-intf-mcast-invalid-join-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_internal_error {1, "isis-intf-mcast-invalid-internal-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_not_yet_needed {2, "isis-intf-mcast-invalid-not-yet-needed"};

const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_access_error {0, "isis-intf-clns-snpa-unknown-access-error"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_not_lan {1, "isis-intf-clns-snpa-unknown-not-lan"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_internal_error {2, "isis-intf-clns-snpa-unknown-internal-error"};

const Enum::YLeaf IsisKnown::isis_unknown {0, "isis-unknown"};
const Enum::YLeaf IsisKnown::isis_known {1, "isis-known"};

const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_too_small {0, "isis-intf-clns-mtu-invalid-too-small"};
const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_internal_error {1, "isis-intf-clns-mtu-invalid-internal-error"};

const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_add_to_intf_stack_fail {0, "isis-intf-clns-proto-down-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_no_imd_conn {1, "isis-intf-clns-proto-down-no-imd-conn"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_node_doesnt_exist {2, "isis-intf-clns-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_exist_reg_error {3, "isis-intf-clns-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_state_reg_error {4, "isis-intf-clns-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_clns_not_up {5, "isis-intf-clns-proto-down-clns-not-up"};

const Enum::YLeaf IsisUp::isis_down {0, "isis-down"};
const Enum::YLeaf IsisUp::isis_up {1, "isis-up"};

const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_if_cfg_suppressed {0, "isis-intf-adv-prefix-disabled-if-cfg-suppressed"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_no_topo_participate {1, "isis-intf-adv-prefix-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_internal_error {2, "isis-intf-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_cfg_passive {0, "isis-intf-adj-form-disabled-cfg-passive"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_no_topo_participate {1, "isis-intf-adj-form-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_add_to_intf_stack_fail {2, "isis-intf-adj-form-disabled-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_clns_io {3, "isis-intf-adj-form-disabled-clns-io"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_internal_error {4, "isis-intf-adj-form-disabled-internal-error"};

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

const Enum::YLeaf IsisEnabled::isis_disabled {0, "isis-disabled"};
const Enum::YLeaf IsisEnabled::isis_enabled {1, "isis-enabled"};

const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_interface {0, "isis-sh-route-adv-origin-interface"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_redistributed {1, "isis-sh-route-adv-origin-redistributed"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_native {2, "isis-sh-route-adv-origin-native"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_summary {3, "isis-sh-route-adv-origin-summary"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_default {4, "isis-sh-route-adv-origin-default"};

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

const Enum::YLeaf IsisValid::isis_invalid {0, "isis-invalid"};
const Enum::YLeaf IsisValid::isis_valid {1, "isis-valid"};

const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_none {0, "isis-tilfa-comp-none"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_link {1, "isis-tilfa-comp-link"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node {2, "isis-tilfa-comp-node"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_srlg {3, "isis-tilfa-comp-srlg"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node_srlg {4, "isis-tilfa-comp-node-srlg"};

const Enum::YLeaf IsisReachable::isis_unreachable {0, "isis-unreachable"};
const Enum::YLeaf IsisReachable::isis_reachable {1, "isis-reachable"};

const Enum::YLeaf IsisMetricMode::isis_metric_mode_fixed {0, "isis-metric-mode-fixed"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_relative {1, "isis-metric-mode-relative"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_absolute {2, "isis-metric-mode-absolute"};

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

const Enum::YLeaf IsisSpfClass::isis_spf_frr_sr_u_loop {0, "isis-spf-frr-sr-u-loop"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_link {1, "isis-spf-frr-per-link"};
const Enum::YLeaf IsisSpfClass::isis_spf_partial {2, "isis-spf-partial"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_prefix {3, "isis-spf-frr-per-prefix"};
const Enum::YLeaf IsisSpfClass::isis_spf_ucmp_calc {4, "isis-spf-ucmp-calc"};
const Enum::YLeaf IsisSpfClass::isis_spf_next_hop {5, "isis-spf-next-hop"};
const Enum::YLeaf IsisSpfClass::isis_spf_incremental {6, "isis-spf-incremental"};
const Enum::YLeaf IsisSpfClass::isis_spf_full {7, "isis-spf-full"};

const Enum::YLeaf IsisShTePceFloodingScope::none {0, "none"};
const Enum::YLeaf IsisShTePceFloodingScope::area {1, "area"};
const Enum::YLeaf IsisShTePceFloodingScope::domain {2, "domain"};

const Enum::YLeaf IsisShTeLink::isis_sh_te_link_p2p {0, "isis-sh-te-link-p2p"};
const Enum::YLeaf IsisShTeLink::isis_sh_te_link_broadcast {1, "isis-sh-te-link-broadcast"};

const Enum::YLeaf IsisLspDbOp::isis_lsp_db_clear {0, "isis-lsp-db-clear"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_insert_new_lsp {1, "isis-lsp-db-insert-new-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_replace_lsp_with_lsp {2, "isis-lsp-db-replace-lsp-with-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_purge_lsp {3, "isis-lsp-db-purge-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_delete_lsp {4, "isis-lsp-db-delete-lsp"};

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

const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_no_state {0, "isis-adj-bfd-no-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_down_state {1, "isis-adj-bfd-down-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_init_state {2, "isis-adj-bfd-init-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_up_state {3, "isis-adj-bfd-up-state"};

const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_up_change {0, "isis-adj-topo-up-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_next_hop_change {1, "isis-adj-topo-next-hop-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_down_change {2, "isis-adj-topo-down-change"};

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

const Enum::YLeaf IsisLevel::isis_level0 {0, "isis-level0"};
const Enum::YLeaf IsisLevel::isis_level1 {1, "isis-level1"};
const Enum::YLeaf IsisLevel::isis_level2 {2, "isis-level2"};

const Enum::YLeaf IsisSubAfId::unicast {0, "unicast"};
const Enum::YLeaf IsisSubAfId::multicast {1, "multicast"};

const Enum::YLeaf IsisAfId::ipv4 {0, "ipv4"};
const Enum::YLeaf IsisAfId::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisMediaClass::isis_media_class_lan {0, "isis-media-class-lan"};
const Enum::YLeaf IsisMediaClass::isis_media_class_p2p {1, "isis-media-class-p2p"};
const Enum::YLeaf IsisMediaClass::isis_media_class_loop_back {2, "isis-media-class-loop-back"};

const Enum::YLeaf IsisLevels::isis_levels_none {0, "isis-levels-none"};
const Enum::YLeaf IsisLevels::isis_levels_1 {1, "isis-levels-1"};
const Enum::YLeaf IsisLevels::isis_levels_2 {2, "isis-levels-2"};
const Enum::YLeaf IsisLevels::isis_levels_12 {3, "isis-levels-12"};
const Enum::YLeaf IsisLevels::isis_levels_total {4, "isis-levels-total"};

const Enum::YLeaf IsisAdjState::isis_adj_up_state {0, "isis-adj-up-state"};
const Enum::YLeaf IsisAdjState::isis_adj_init_state {1, "isis-adj-init-state"};
const Enum::YLeaf IsisAdjState::isis_adj_failed_state {2, "isis-adj-failed-state"};


}
}

