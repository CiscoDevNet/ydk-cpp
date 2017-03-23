
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Isis()
    :
    instances(std::make_shared<Isis::Instances>())
{
    instances->parent = this;
    children["instances"] = instances;

    yang_name = "isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-oper";
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
    return is_set(operation)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis";

    return path_buffer.str();

}

EntityPath Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instances")
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
        else
        {
            instances = std::make_shared<Isis::Instances>();
            instances->parent = this;
            children["instances"] = instances;
        }
        return children.at("instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::get_children()
{
    if(children.find("instances") == children.end())
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
    }

    return children;
}

void Isis::set_value(const std::string & value_path, std::string value)
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

Isis::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "isis";
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
    return is_set(operation);
}

std::string Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

EntityPath Isis::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::set_value(const std::string & value_path, std::string value)
{
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
    children["checkpoint-adjacencies"] = checkpoint_adjacencies;

    checkpoint_interfaces->parent = this;
    children["checkpoint-interfaces"] = checkpoint_interfaces;

    checkpoint_lsps->parent = this;
    children["checkpoint-lsps"] = checkpoint_lsps;

    checkpoint_te_tunnels->parent = this;
    children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;

    error_log->parent = this;
    children["error-log"] = error_log;

    host_names->parent = this;
    children["host-names"] = host_names;

    interface_statistics->parent = this;
    children["interface-statistics"] = interface_statistics;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    levels->parent = this;
    children["levels"] = levels;

    mesh_groups->parent = this;
    children["mesh-groups"] = mesh_groups;

    neighbor_summaries->parent = this;
    children["neighbor-summaries"] = neighbor_summaries;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    nsr_statistics->parent = this;
    children["nsr-statistics"] = nsr_statistics;

    nsr_status->parent = this;
    children["nsr-status"] = nsr_status;

    protocol->parent = this;
    children["protocol"] = protocol;

    srms->parent = this;
    children["srms"] = srms;

    statistics_global->parent = this;
    children["statistics-global"] = statistics_global;

    topologies->parent = this;
    children["topologies"] = topologies;

    yang_name = "instance"; yang_parent_name = "instances";
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
    return is_set(operation)
	|| is_set(instance_name.operation)
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

std::string Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-clns-isis-oper:isis/instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-adjacencies")
    {
        if(checkpoint_adjacencies != nullptr)
        {
            children["checkpoint-adjacencies"] = checkpoint_adjacencies;
        }
        else
        {
            checkpoint_adjacencies = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies>();
            checkpoint_adjacencies->parent = this;
            children["checkpoint-adjacencies"] = checkpoint_adjacencies;
        }
        return children.at("checkpoint-adjacencies");
    }

    if(child_yang_name == "checkpoint-interfaces")
    {
        if(checkpoint_interfaces != nullptr)
        {
            children["checkpoint-interfaces"] = checkpoint_interfaces;
        }
        else
        {
            checkpoint_interfaces = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces>();
            checkpoint_interfaces->parent = this;
            children["checkpoint-interfaces"] = checkpoint_interfaces;
        }
        return children.at("checkpoint-interfaces");
    }

    if(child_yang_name == "checkpoint-lsps")
    {
        if(checkpoint_lsps != nullptr)
        {
            children["checkpoint-lsps"] = checkpoint_lsps;
        }
        else
        {
            checkpoint_lsps = std::make_shared<Isis::Instances::Instance::CheckpointLsps>();
            checkpoint_lsps->parent = this;
            children["checkpoint-lsps"] = checkpoint_lsps;
        }
        return children.at("checkpoint-lsps");
    }

    if(child_yang_name == "checkpoint-te-tunnels")
    {
        if(checkpoint_te_tunnels != nullptr)
        {
            children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
        }
        else
        {
            checkpoint_te_tunnels = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels>();
            checkpoint_te_tunnels->parent = this;
            children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
        }
        return children.at("checkpoint-te-tunnels");
    }

    if(child_yang_name == "error-log")
    {
        if(error_log != nullptr)
        {
            children["error-log"] = error_log;
        }
        else
        {
            error_log = std::make_shared<Isis::Instances::Instance::ErrorLog>();
            error_log->parent = this;
            children["error-log"] = error_log;
        }
        return children.at("error-log");
    }

    if(child_yang_name == "host-names")
    {
        if(host_names != nullptr)
        {
            children["host-names"] = host_names;
        }
        else
        {
            host_names = std::make_shared<Isis::Instances::Instance::HostNames>();
            host_names->parent = this;
            children["host-names"] = host_names;
        }
        return children.at("host-names");
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
        else
        {
            interface_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics>();
            interface_statistics->parent = this;
            children["interface-statistics"] = interface_statistics;
        }
        return children.at("interface-statistics");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "levels")
    {
        if(levels != nullptr)
        {
            children["levels"] = levels;
        }
        else
        {
            levels = std::make_shared<Isis::Instances::Instance::Levels>();
            levels->parent = this;
            children["levels"] = levels;
        }
        return children.at("levels");
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
        else
        {
            mesh_groups = std::make_shared<Isis::Instances::Instance::MeshGroups>();
            mesh_groups->parent = this;
            children["mesh-groups"] = mesh_groups;
        }
        return children.at("mesh-groups");
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
        else
        {
            neighbor_summaries = std::make_shared<Isis::Instances::Instance::NeighborSummaries>();
            neighbor_summaries->parent = this;
            children["neighbor-summaries"] = neighbor_summaries;
        }
        return children.at("neighbor-summaries");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Isis::Instances::Instance::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "nsr-statistics")
    {
        if(nsr_statistics != nullptr)
        {
            children["nsr-statistics"] = nsr_statistics;
        }
        else
        {
            nsr_statistics = std::make_shared<Isis::Instances::Instance::NsrStatistics>();
            nsr_statistics->parent = this;
            children["nsr-statistics"] = nsr_statistics;
        }
        return children.at("nsr-statistics");
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
        else
        {
            nsr_status = std::make_shared<Isis::Instances::Instance::NsrStatus>();
            nsr_status->parent = this;
            children["nsr-status"] = nsr_status;
        }
        return children.at("nsr-status");
    }

    if(child_yang_name == "protocol")
    {
        if(protocol != nullptr)
        {
            children["protocol"] = protocol;
        }
        else
        {
            protocol = std::make_shared<Isis::Instances::Instance::Protocol>();
            protocol->parent = this;
            children["protocol"] = protocol;
        }
        return children.at("protocol");
    }

    if(child_yang_name == "srms")
    {
        if(srms != nullptr)
        {
            children["srms"] = srms;
        }
        else
        {
            srms = std::make_shared<Isis::Instances::Instance::Srms>();
            srms->parent = this;
            children["srms"] = srms;
        }
        return children.at("srms");
    }

    if(child_yang_name == "statistics-global")
    {
        if(statistics_global != nullptr)
        {
            children["statistics-global"] = statistics_global;
        }
        else
        {
            statistics_global = std::make_shared<Isis::Instances::Instance::StatisticsGlobal>();
            statistics_global->parent = this;
            children["statistics-global"] = statistics_global;
        }
        return children.at("statistics-global");
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<Isis::Instances::Instance::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::get_children()
{
    if(children.find("checkpoint-adjacencies") == children.end())
    {
        if(checkpoint_adjacencies != nullptr)
        {
            children["checkpoint-adjacencies"] = checkpoint_adjacencies;
        }
    }

    if(children.find("checkpoint-interfaces") == children.end())
    {
        if(checkpoint_interfaces != nullptr)
        {
            children["checkpoint-interfaces"] = checkpoint_interfaces;
        }
    }

    if(children.find("checkpoint-lsps") == children.end())
    {
        if(checkpoint_lsps != nullptr)
        {
            children["checkpoint-lsps"] = checkpoint_lsps;
        }
    }

    if(children.find("checkpoint-te-tunnels") == children.end())
    {
        if(checkpoint_te_tunnels != nullptr)
        {
            children["checkpoint-te-tunnels"] = checkpoint_te_tunnels;
        }
    }

    if(children.find("error-log") == children.end())
    {
        if(error_log != nullptr)
        {
            children["error-log"] = error_log;
        }
    }

    if(children.find("host-names") == children.end())
    {
        if(host_names != nullptr)
        {
            children["host-names"] = host_names;
        }
    }

    if(children.find("interface-statistics") == children.end())
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("levels") == children.end())
    {
        if(levels != nullptr)
        {
            children["levels"] = levels;
        }
    }

    if(children.find("mesh-groups") == children.end())
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
    }

    if(children.find("neighbor-summaries") == children.end())
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("nsr-statistics") == children.end())
    {
        if(nsr_statistics != nullptr)
        {
            children["nsr-statistics"] = nsr_statistics;
        }
    }

    if(children.find("nsr-status") == children.end())
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
    }

    if(children.find("protocol") == children.end())
    {
        if(protocol != nullptr)
        {
            children["protocol"] = protocol;
        }
    }

    if(children.find("srms") == children.end())
    {
        if(srms != nullptr)
        {
            children["srms"] = srms;
        }
    }

    if(children.find("statistics-global") == children.end())
    {
        if(statistics_global != nullptr)
        {
            children["statistics-global"] = statistics_global;
        }
    }

    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    return children;
}

void Isis::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "instance";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    local_interface{YType::str, "local-interface"},
    neighbor_active_area_address{YType::str, "neighbor-active-area-address"},
    neighbor_circuit_type{YType::enumeration, "neighbor-circuit-type"},
    neighbor_holdtime{YType::uint32, "neighbor-holdtime"},
    neighbor_ietf_nsf_capable_flag{YType::uint32, "neighbor-ietf-nsf-capable-flag"},
    neighbor_media_type{YType::enumeration, "neighbor-media-type"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    neighbor_uptime{YType::uint32, "neighbor-uptime"},
    neighbor_uptime_valid_flag{YType::boolean, "neighbor-uptime-valid-flag"},
    nsr_standby{YType::boolean, "nsr-standby"},
    system_id{YType::str, "system-id"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Isis::Instances::Instance::Neighbors::Neighbor::~Neighbor()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_data())
            return true;
    }
    for (auto const & leaf : neighbor_active_area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| local_interface.is_set
	|| neighbor_circuit_type.is_set
	|| neighbor_holdtime.is_set
	|| neighbor_ietf_nsf_capable_flag.is_set
	|| neighbor_media_type.is_set
	|| neighbor_snpa.is_set
	|| neighbor_state.is_set
	|| neighbor_system_id.is_set
	|| neighbor_uptime.is_set
	|| neighbor_uptime_valid_flag.is_set
	|| nsr_standby.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_operation())
            return true;
    }
    for (auto const & leaf : neighbor_active_area_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(local_interface.operation)
	|| is_set(neighbor_active_area_address.operation)
	|| is_set(neighbor_circuit_type.operation)
	|| is_set(neighbor_holdtime.operation)
	|| is_set(neighbor_ietf_nsf_capable_flag.operation)
	|| is_set(neighbor_media_type.operation)
	|| is_set(neighbor_snpa.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(neighbor_uptime.operation)
	|| is_set(neighbor_uptime_valid_flag.operation)
	|| is_set(nsr_standby.operation)
	|| is_set(system_id.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.operation)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (neighbor_circuit_type.is_set || is_set(neighbor_circuit_type.operation)) leaf_name_data.push_back(neighbor_circuit_type.get_name_leafdata());
    if (neighbor_holdtime.is_set || is_set(neighbor_holdtime.operation)) leaf_name_data.push_back(neighbor_holdtime.get_name_leafdata());
    if (neighbor_ietf_nsf_capable_flag.is_set || is_set(neighbor_ietf_nsf_capable_flag.operation)) leaf_name_data.push_back(neighbor_ietf_nsf_capable_flag.get_name_leafdata());
    if (neighbor_media_type.is_set || is_set(neighbor_media_type.operation)) leaf_name_data.push_back(neighbor_media_type.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.operation)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (neighbor_uptime.is_set || is_set(neighbor_uptime.operation)) leaf_name_data.push_back(neighbor_uptime.get_name_leafdata());
    if (neighbor_uptime_valid_flag.is_set || is_set(neighbor_uptime_valid_flag.operation)) leaf_name_data.push_back(neighbor_uptime_valid_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.operation)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());

    auto neighbor_active_area_address_name_datas = neighbor_active_area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_active_area_address_name_datas.begin(), neighbor_active_area_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-per-address-family-data")
    {
        for(auto const & c : neighbor_per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData>();
        c->parent = this;
        neighbor_per_address_family_data.push_back(std::move(c));
        children[segment_path] = neighbor_per_address_family_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "topologies-supported")
    {
        for(auto const & c : topologies_supported)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported>();
        c->parent = this;
        topologies_supported.push_back(std::move(c));
        children[segment_path] = topologies_supported.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::get_children()
{
    for (auto const & c : neighbor_per_address_family_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : topologies_supported)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
    }
    if(value_path == "neighbor-active-area-address")
    {
        neighbor_active_area_address.append(value);
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type = value;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime = value;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag = value;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type = value;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime = value;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag = value;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::TopologiesSupported()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "topologies-supported"; yang_parent_name = "neighbor";
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::~TopologiesSupported()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies-supported";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologiesSupported' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::NeighborPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "neighbor-per-address-family-data"; yang_parent_name = "neighbor";
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
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-per-address-family-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPerAddressFamilyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::Ipv4()
    :
    interface_address{YType::str, "interface-address"},
    next_hop{YType::str, "next-hop"},
    underlying_adjacency_sid{YType::uint32, "underlying-adjacency-sid"},
    underlying_interface{YType::str, "underlying-interface"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    children["adjacency-sid"] = adjacency_sid;

    non_frr_adjacency_sid->parent = this;
    children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;

    yang_name = "ipv4"; yang_parent_name = "neighbor-per-address-family-data";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_data() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_operation() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(next_hop.operation)
	|| is_set(underlying_adjacency_sid.operation)
	|| is_set(underlying_interface.operation)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto interface_address_name_datas = interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_address_name_datas.begin(), interface_address_name_datas.end());
    auto underlying_adjacency_sid_name_datas = underlying_adjacency_sid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_adjacency_sid_name_datas.begin(), underlying_adjacency_sid_name_datas.end());
    auto underlying_interface_name_datas = underlying_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_interface_name_datas.begin(), underlying_interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
        else
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>();
            adjacency_sid->parent = this;
            children["adjacency-sid"] = adjacency_sid;
        }
        return children.at("adjacency-sid");
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        else
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
            non_frr_adjacency_sid->parent = this;
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        return children.at("non-frr-adjacency-sid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_children()
{
    if(children.find("adjacency-sid") == children.end())
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
    }

    if(children.find("non-frr-adjacency-sid") == children.end())
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address.append(value);
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "underlying-adjacency-sid")
    {
        underlying_adjacency_sid.append(value);
    }
    if(value_path == "underlying-interface")
    {
        underlying_interface.append(value);
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonFrrAdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::Ipv6()
    :
    interface_address{YType::str, "interface-address"},
    next_hop{YType::str, "next-hop"},
    underlying_adjacency_sid{YType::uint32, "underlying-adjacency-sid"},
    underlying_interface{YType::str, "underlying-interface"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    children["adjacency-sid"] = adjacency_sid;

    non_frr_adjacency_sid->parent = this;
    children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;

    yang_name = "ipv6"; yang_parent_name = "neighbor-per-address-family-data";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_data() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_operation() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(next_hop.operation)
	|| is_set(underlying_adjacency_sid.operation)
	|| is_set(underlying_interface.operation)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto interface_address_name_datas = interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_address_name_datas.begin(), interface_address_name_datas.end());
    auto underlying_adjacency_sid_name_datas = underlying_adjacency_sid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_adjacency_sid_name_datas.begin(), underlying_adjacency_sid_name_datas.end());
    auto underlying_interface_name_datas = underlying_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_interface_name_datas.begin(), underlying_interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
        else
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>();
            adjacency_sid->parent = this;
            children["adjacency-sid"] = adjacency_sid;
        }
        return children.at("adjacency-sid");
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        else
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
            non_frr_adjacency_sid->parent = this;
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        return children.at("non-frr-adjacency-sid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_children()
{
    if(children.find("adjacency-sid") == children.end())
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
    }

    if(children.find("non-frr-adjacency-sid") == children.end())
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address.append(value);
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "underlying-adjacency-sid")
    {
        underlying_adjacency_sid.append(value);
    }
    if(value_path == "underlying-interface")
    {
        underlying_interface.append(value);
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonFrrAdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::HostNames::HostNames()
{
    yang_name = "host-names"; yang_parent_name = "instance";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-names";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::HostNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostNames' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host-name")
    {
        for(auto const & c : host_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::HostNames::HostName>();
        c->parent = this;
        host_name.push_back(std::move(c));
        children[segment_path] = host_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::HostNames::get_children()
{
    for (auto const & c : host_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::HostNames::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::HostNames::HostName::HostName()
    :
    system_id{YType::str, "system-id"},
    host_levels{YType::enumeration, "host-levels"},
    host_name{YType::str, "host-name"},
    local_is_flag{YType::boolean, "local-is-flag"}
{
    yang_name = "host-name"; yang_parent_name = "host-names";
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
    return is_set(operation)
	|| is_set(system_id.operation)
	|| is_set(host_levels.operation)
	|| is_set(host_name.operation)
	|| is_set(local_is_flag.operation);
}

std::string Isis::Instances::Instance::HostNames::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name" <<"[system-id='" <<system_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::HostNames::HostName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostName' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (host_levels.is_set || is_set(host_levels.operation)) leaf_name_data.push_back(host_levels.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (local_is_flag.is_set || is_set(local_is_flag.operation)) leaf_name_data.push_back(local_is_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::HostNames::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::HostNames::HostName::get_children()
{
    return children;
}

void Isis::Instances::Instance::HostNames::HostName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-id")
    {
        system_id = value;
    }
    if(value_path == "host-levels")
    {
        host_levels = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "local-is-flag")
    {
        local_is_flag = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::StatisticsGlobal()
    :
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "statistics-global"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-global";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatisticsGlobal' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(std::move(c));
        children[segment_path] = per_area_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::get_children()
{
    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::Statistics()
    :
    avg_csnp_recv_rate{YType::uint32, "avg-csnp-recv-rate"},
    avg_csnp_send_rate{YType::uint32, "avg-csnp-send-rate"},
    avg_hello_recv_rate{YType::uint32, "avg-hello-recv-rate"},
    avg_hello_send_rate{YType::uint32, "avg-hello-send-rate"},
    avg_lsp_recv_rate{YType::uint32, "avg-lsp-recv-rate"},
    avg_lsp_send_rate{YType::uint32, "avg-lsp-send-rate"},
    avg_psnp_recv_rate{YType::uint32, "avg-psnp-recv-rate"},
    avg_psnp_send_rate{YType::uint32, "avg-psnp-send-rate"},
    fast_csnp_cache_update_count{YType::uint32, "fast-csnp-cache-update-count"},
    fast_csnp_lookup_count{YType::uint32, "fast-csnp-lookup-count"},
    fast_csnp_lookup_hit_count{YType::uint32, "fast-csnp-lookup-hit-count"},
    fast_psnp_lookup_count{YType::uint32, "fast-psnp-lookup-count"},
    fast_psnp_lookup_hit_count{YType::uint32, "fast-psnp-lookup-hit-count"},
    iih_dropped_count{YType::uint32, "iih-dropped-count"},
    invalid_checksum_lsp_count{YType::uint32, "invalid-checksum-lsp-count"},
    lsp_dropped_count{YType::uint32, "lsp-dropped-count"},
    maximum_iih_queue_length{YType::uint32, "maximum-iih-queue-length"},
    maximum_pdu_queue_length{YType::uint32, "maximum-pdu-queue-length"},
    pdu_queue_length{YType::uint32, "pdu-queue-length"},
    snp_dropped_count{YType::uint32, "snp-dropped-count"},
    zero_holdtime_lsp_count{YType::uint32, "zero-holdtime-lsp-count"}
    	,
    avg_csnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>())
	,avg_csnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>())
	,avg_hello_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>())
	,avg_hello_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>())
	,avg_lsp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>())
	,avg_lsp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>())
	,avg_psnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>())
	,avg_psnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>())
{
    avg_csnp_process_time->parent = this;
    children["avg-csnp-process-time"] = avg_csnp_process_time;

    avg_csnp_transmit_time->parent = this;
    children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;

    avg_hello_process_time->parent = this;
    children["avg-hello-process-time"] = avg_hello_process_time;

    avg_hello_transmit_time->parent = this;
    children["avg-hello-transmit-time"] = avg_hello_transmit_time;

    avg_lsp_process_time->parent = this;
    children["avg-lsp-process-time"] = avg_lsp_process_time;

    avg_lsp_transmit_time->parent = this;
    children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;

    avg_psnp_process_time->parent = this;
    children["avg-psnp-process-time"] = avg_psnp_process_time;

    avg_psnp_transmit_time->parent = this;
    children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;

    yang_name = "statistics"; yang_parent_name = "statistics-global";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_data() const
{
    return avg_csnp_recv_rate.is_set
	|| avg_csnp_send_rate.is_set
	|| avg_hello_recv_rate.is_set
	|| avg_hello_send_rate.is_set
	|| avg_lsp_recv_rate.is_set
	|| avg_lsp_send_rate.is_set
	|| avg_psnp_recv_rate.is_set
	|| avg_psnp_send_rate.is_set
	|| fast_csnp_cache_update_count.is_set
	|| fast_csnp_lookup_count.is_set
	|| fast_csnp_lookup_hit_count.is_set
	|| fast_psnp_lookup_count.is_set
	|| fast_psnp_lookup_hit_count.is_set
	|| iih_dropped_count.is_set
	|| invalid_checksum_lsp_count.is_set
	|| lsp_dropped_count.is_set
	|| maximum_iih_queue_length.is_set
	|| maximum_pdu_queue_length.is_set
	|| pdu_queue_length.is_set
	|| snp_dropped_count.is_set
	|| zero_holdtime_lsp_count.is_set
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_data())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_data())
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_data())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_data())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_data())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_data())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_data())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(avg_csnp_recv_rate.operation)
	|| is_set(avg_csnp_send_rate.operation)
	|| is_set(avg_hello_recv_rate.operation)
	|| is_set(avg_hello_send_rate.operation)
	|| is_set(avg_lsp_recv_rate.operation)
	|| is_set(avg_lsp_send_rate.operation)
	|| is_set(avg_psnp_recv_rate.operation)
	|| is_set(avg_psnp_send_rate.operation)
	|| is_set(fast_csnp_cache_update_count.operation)
	|| is_set(fast_csnp_lookup_count.operation)
	|| is_set(fast_csnp_lookup_hit_count.operation)
	|| is_set(fast_psnp_lookup_count.operation)
	|| is_set(fast_psnp_lookup_hit_count.operation)
	|| is_set(iih_dropped_count.operation)
	|| is_set(invalid_checksum_lsp_count.operation)
	|| is_set(lsp_dropped_count.operation)
	|| is_set(maximum_iih_queue_length.operation)
	|| is_set(maximum_pdu_queue_length.operation)
	|| is_set(pdu_queue_length.operation)
	|| is_set(snp_dropped_count.operation)
	|| is_set(zero_holdtime_lsp_count.operation)
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_operation())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_operation())
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_operation())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_operation())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_operation())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_operation())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_operation())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_csnp_recv_rate.is_set || is_set(avg_csnp_recv_rate.operation)) leaf_name_data.push_back(avg_csnp_recv_rate.get_name_leafdata());
    if (avg_csnp_send_rate.is_set || is_set(avg_csnp_send_rate.operation)) leaf_name_data.push_back(avg_csnp_send_rate.get_name_leafdata());
    if (avg_hello_recv_rate.is_set || is_set(avg_hello_recv_rate.operation)) leaf_name_data.push_back(avg_hello_recv_rate.get_name_leafdata());
    if (avg_hello_send_rate.is_set || is_set(avg_hello_send_rate.operation)) leaf_name_data.push_back(avg_hello_send_rate.get_name_leafdata());
    if (avg_lsp_recv_rate.is_set || is_set(avg_lsp_recv_rate.operation)) leaf_name_data.push_back(avg_lsp_recv_rate.get_name_leafdata());
    if (avg_lsp_send_rate.is_set || is_set(avg_lsp_send_rate.operation)) leaf_name_data.push_back(avg_lsp_send_rate.get_name_leafdata());
    if (avg_psnp_recv_rate.is_set || is_set(avg_psnp_recv_rate.operation)) leaf_name_data.push_back(avg_psnp_recv_rate.get_name_leafdata());
    if (avg_psnp_send_rate.is_set || is_set(avg_psnp_send_rate.operation)) leaf_name_data.push_back(avg_psnp_send_rate.get_name_leafdata());
    if (fast_csnp_cache_update_count.is_set || is_set(fast_csnp_cache_update_count.operation)) leaf_name_data.push_back(fast_csnp_cache_update_count.get_name_leafdata());
    if (fast_csnp_lookup_count.is_set || is_set(fast_csnp_lookup_count.operation)) leaf_name_data.push_back(fast_csnp_lookup_count.get_name_leafdata());
    if (fast_csnp_lookup_hit_count.is_set || is_set(fast_csnp_lookup_hit_count.operation)) leaf_name_data.push_back(fast_csnp_lookup_hit_count.get_name_leafdata());
    if (fast_psnp_lookup_count.is_set || is_set(fast_psnp_lookup_count.operation)) leaf_name_data.push_back(fast_psnp_lookup_count.get_name_leafdata());
    if (fast_psnp_lookup_hit_count.is_set || is_set(fast_psnp_lookup_hit_count.operation)) leaf_name_data.push_back(fast_psnp_lookup_hit_count.get_name_leafdata());
    if (iih_dropped_count.is_set || is_set(iih_dropped_count.operation)) leaf_name_data.push_back(iih_dropped_count.get_name_leafdata());
    if (invalid_checksum_lsp_count.is_set || is_set(invalid_checksum_lsp_count.operation)) leaf_name_data.push_back(invalid_checksum_lsp_count.get_name_leafdata());
    if (lsp_dropped_count.is_set || is_set(lsp_dropped_count.operation)) leaf_name_data.push_back(lsp_dropped_count.get_name_leafdata());
    if (maximum_iih_queue_length.is_set || is_set(maximum_iih_queue_length.operation)) leaf_name_data.push_back(maximum_iih_queue_length.get_name_leafdata());
    if (maximum_pdu_queue_length.is_set || is_set(maximum_pdu_queue_length.operation)) leaf_name_data.push_back(maximum_pdu_queue_length.get_name_leafdata());
    if (pdu_queue_length.is_set || is_set(pdu_queue_length.operation)) leaf_name_data.push_back(pdu_queue_length.get_name_leafdata());
    if (snp_dropped_count.is_set || is_set(snp_dropped_count.operation)) leaf_name_data.push_back(snp_dropped_count.get_name_leafdata());
    if (zero_holdtime_lsp_count.is_set || is_set(zero_holdtime_lsp_count.operation)) leaf_name_data.push_back(zero_holdtime_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "avg-csnp-process-time")
    {
        if(avg_csnp_process_time != nullptr)
        {
            children["avg-csnp-process-time"] = avg_csnp_process_time;
        }
        else
        {
            avg_csnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>();
            avg_csnp_process_time->parent = this;
            children["avg-csnp-process-time"] = avg_csnp_process_time;
        }
        return children.at("avg-csnp-process-time");
    }

    if(child_yang_name == "avg-csnp-transmit-time")
    {
        if(avg_csnp_transmit_time != nullptr)
        {
            children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
        }
        else
        {
            avg_csnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>();
            avg_csnp_transmit_time->parent = this;
            children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
        }
        return children.at("avg-csnp-transmit-time");
    }

    if(child_yang_name == "avg-hello-process-time")
    {
        if(avg_hello_process_time != nullptr)
        {
            children["avg-hello-process-time"] = avg_hello_process_time;
        }
        else
        {
            avg_hello_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>();
            avg_hello_process_time->parent = this;
            children["avg-hello-process-time"] = avg_hello_process_time;
        }
        return children.at("avg-hello-process-time");
    }

    if(child_yang_name == "avg-hello-transmit-time")
    {
        if(avg_hello_transmit_time != nullptr)
        {
            children["avg-hello-transmit-time"] = avg_hello_transmit_time;
        }
        else
        {
            avg_hello_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>();
            avg_hello_transmit_time->parent = this;
            children["avg-hello-transmit-time"] = avg_hello_transmit_time;
        }
        return children.at("avg-hello-transmit-time");
    }

    if(child_yang_name == "avg-lsp-process-time")
    {
        if(avg_lsp_process_time != nullptr)
        {
            children["avg-lsp-process-time"] = avg_lsp_process_time;
        }
        else
        {
            avg_lsp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>();
            avg_lsp_process_time->parent = this;
            children["avg-lsp-process-time"] = avg_lsp_process_time;
        }
        return children.at("avg-lsp-process-time");
    }

    if(child_yang_name == "avg-lsp-transmit-time")
    {
        if(avg_lsp_transmit_time != nullptr)
        {
            children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
        }
        else
        {
            avg_lsp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>();
            avg_lsp_transmit_time->parent = this;
            children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
        }
        return children.at("avg-lsp-transmit-time");
    }

    if(child_yang_name == "avg-psnp-process-time")
    {
        if(avg_psnp_process_time != nullptr)
        {
            children["avg-psnp-process-time"] = avg_psnp_process_time;
        }
        else
        {
            avg_psnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>();
            avg_psnp_process_time->parent = this;
            children["avg-psnp-process-time"] = avg_psnp_process_time;
        }
        return children.at("avg-psnp-process-time");
    }

    if(child_yang_name == "avg-psnp-transmit-time")
    {
        if(avg_psnp_transmit_time != nullptr)
        {
            children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
        }
        else
        {
            avg_psnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>();
            avg_psnp_transmit_time->parent = this;
            children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
        }
        return children.at("avg-psnp-transmit-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::get_children()
{
    if(children.find("avg-csnp-process-time") == children.end())
    {
        if(avg_csnp_process_time != nullptr)
        {
            children["avg-csnp-process-time"] = avg_csnp_process_time;
        }
    }

    if(children.find("avg-csnp-transmit-time") == children.end())
    {
        if(avg_csnp_transmit_time != nullptr)
        {
            children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
        }
    }

    if(children.find("avg-hello-process-time") == children.end())
    {
        if(avg_hello_process_time != nullptr)
        {
            children["avg-hello-process-time"] = avg_hello_process_time;
        }
    }

    if(children.find("avg-hello-transmit-time") == children.end())
    {
        if(avg_hello_transmit_time != nullptr)
        {
            children["avg-hello-transmit-time"] = avg_hello_transmit_time;
        }
    }

    if(children.find("avg-lsp-process-time") == children.end())
    {
        if(avg_lsp_process_time != nullptr)
        {
            children["avg-lsp-process-time"] = avg_lsp_process_time;
        }
    }

    if(children.find("avg-lsp-transmit-time") == children.end())
    {
        if(avg_lsp_transmit_time != nullptr)
        {
            children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
        }
    }

    if(children.find("avg-psnp-process-time") == children.end())
    {
        if(avg_psnp_process_time != nullptr)
        {
            children["avg-psnp-process-time"] = avg_psnp_process_time;
        }
    }

    if(children.find("avg-psnp-transmit-time") == children.end())
    {
        if(avg_psnp_transmit_time != nullptr)
        {
            children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
        }
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate = value;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate = value;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate = value;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate = value;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate = value;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate = value;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate = value;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate = value;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count = value;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count = value;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count = value;
    }
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count = value;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count = value;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count = value;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count = value;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count = value;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length = value;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length = value;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length = value;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count = value;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::AvgHelloProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-hello-process-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::~AvgHelloProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-process-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgHelloProcessTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::AvgCsnpProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-csnp-process-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::~AvgCsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-process-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgCsnpProcessTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::AvgPsnpProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-psnp-process-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::~AvgPsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-process-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgPsnpProcessTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::AvgLspProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-lsp-process-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::~AvgLspProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-process-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgLspProcessTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::AvgHelloTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-hello-transmit-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::~AvgHelloTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-transmit-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgHelloTransmitTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::AvgCsnpTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-csnp-transmit-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::~AvgCsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-transmit-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgCsnpTransmitTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::AvgPsnpTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-psnp-transmit-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::~AvgPsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-transmit-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgPsnpTransmitTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::AvgLspTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "avg-lsp-transmit-time"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::~AvgLspTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-transmit-time";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvgLspTransmitTime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "per-area-data"; yang_parent_name = "statistics-global";
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
    return is_set(operation)
	|| is_set(level.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-topology-data")
    {
        for(auto const & c : per_topology_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData>();
        c->parent = this;
        per_topology_data.push_back(std::move(c));
        children[segment_path] = per_topology_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_children()
{
    for (auto const & c : per_topology_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::Statistics()
    :
    system_lsp_build_count{YType::uint32, "system-lsp-build-count"},
    system_lsp_refresh_count{YType::uint32, "system-lsp-refresh-count"}
{
    yang_name = "statistics"; yang_parent_name = "per-area-data";
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
    return is_set(operation)
	|| is_set(system_lsp_build_count.operation)
	|| is_set(system_lsp_refresh_count.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_lsp_build_count.is_set || is_set(system_lsp_build_count.operation)) leaf_name_data.push_back(system_lsp_build_count.get_name_leafdata());
    if (system_lsp_refresh_count.is_set || is_set(system_lsp_refresh_count.operation)) leaf_name_data.push_back(system_lsp_refresh_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count = value;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::PerTopologyData()
    :
    id(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>())
	,statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>())
{
    id->parent = this;
    children["id"] = id;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "per-topology-data"; yang_parent_name = "per-area-data";
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
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopologyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::~Id()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::Statistics()
    :
    ispf_run_count{YType::uint32, "ispf-run-count"},
    nhc_run_count{YType::uint32, "nhc-run-count"},
    periodic_run_count{YType::uint32, "periodic-run-count"},
    prc_run_count{YType::uint32, "prc-run-count"},
    spf_run_count{YType::uint32, "spf-run-count"}
{
    yang_name = "statistics"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_data() const
{
    return ispf_run_count.is_set
	|| nhc_run_count.is_set
	|| periodic_run_count.is_set
	|| prc_run_count.is_set
	|| spf_run_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(ispf_run_count.operation)
	|| is_set(nhc_run_count.operation)
	|| is_set(periodic_run_count.operation)
	|| is_set(prc_run_count.operation)
	|| is_set(spf_run_count.operation);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ispf_run_count.is_set || is_set(ispf_run_count.operation)) leaf_name_data.push_back(ispf_run_count.get_name_leafdata());
    if (nhc_run_count.is_set || is_set(nhc_run_count.operation)) leaf_name_data.push_back(nhc_run_count.get_name_leafdata());
    if (periodic_run_count.is_set || is_set(periodic_run_count.operation)) leaf_name_data.push_back(periodic_run_count.get_name_leafdata());
    if (prc_run_count.is_set || is_set(prc_run_count.operation)) leaf_name_data.push_back(prc_run_count.get_name_leafdata());
    if (spf_run_count.is_set || is_set(spf_run_count.operation)) leaf_name_data.push_back(spf_run_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_children()
{
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ispf-run-count")
    {
        ispf_run_count = value;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count = value;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count = value;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count = value;
    }
    if(value_path == "spf-run-count")
    {
        spf_run_count = value;
    }
}

Isis::Instances::Instance::Levels::Levels()
{
    yang_name = "levels"; yang_parent_name = "instance";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Levels' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level>();
        c->parent = this;
        level.push_back(std::move(c));
        children[segment_path] = level.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::get_children()
{
    for (auto const & c : level)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::set_value(const std::string & value_path, std::string value)
{
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
    children["adjacencies"] = adjacencies;

    adjacency_log->parent = this;
    children["adjacency-log"] = adjacency_log;

    database_log->parent = this;
    children["database-log"] = database_log;

    detailed_lsps->parent = this;
    children["detailed-lsps"] = detailed_lsps;

    lsp_log->parent = this;
    children["lsp-log"] = lsp_log;

    lsp_table_summary->parent = this;
    children["lsp-table-summary"] = lsp_table_summary;

    lsps->parent = this;
    children["lsps"] = lsps;

    yang_name = "level"; yang_parent_name = "levels";
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
    return is_set(operation)
	|| is_set(level.operation)
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

EntityPath Isis::Instances::Instance::Levels::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacencies")
    {
        if(adjacencies != nullptr)
        {
            children["adjacencies"] = adjacencies;
        }
        else
        {
            adjacencies = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies>();
            adjacencies->parent = this;
            children["adjacencies"] = adjacencies;
        }
        return children.at("adjacencies");
    }

    if(child_yang_name == "adjacency-log")
    {
        if(adjacency_log != nullptr)
        {
            children["adjacency-log"] = adjacency_log;
        }
        else
        {
            adjacency_log = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog>();
            adjacency_log->parent = this;
            children["adjacency-log"] = adjacency_log;
        }
        return children.at("adjacency-log");
    }

    if(child_yang_name == "database-log")
    {
        if(database_log != nullptr)
        {
            children["database-log"] = database_log;
        }
        else
        {
            database_log = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog>();
            database_log->parent = this;
            children["database-log"] = database_log;
        }
        return children.at("database-log");
    }

    if(child_yang_name == "detailed-lsps")
    {
        if(detailed_lsps != nullptr)
        {
            children["detailed-lsps"] = detailed_lsps;
        }
        else
        {
            detailed_lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps>();
            detailed_lsps->parent = this;
            children["detailed-lsps"] = detailed_lsps;
        }
        return children.at("detailed-lsps");
    }

    if(child_yang_name == "lsp-log")
    {
        if(lsp_log != nullptr)
        {
            children["lsp-log"] = lsp_log;
        }
        else
        {
            lsp_log = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog>();
            lsp_log->parent = this;
            children["lsp-log"] = lsp_log;
        }
        return children.at("lsp-log");
    }

    if(child_yang_name == "lsp-table-summary")
    {
        if(lsp_table_summary != nullptr)
        {
            children["lsp-table-summary"] = lsp_table_summary;
        }
        else
        {
            lsp_table_summary = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary>();
            lsp_table_summary->parent = this;
            children["lsp-table-summary"] = lsp_table_summary;
        }
        return children.at("lsp-table-summary");
    }

    if(child_yang_name == "lsps")
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
        else
        {
            lsps = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps>();
            lsps->parent = this;
            children["lsps"] = lsps;
        }
        return children.at("lsps");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::get_children()
{
    if(children.find("adjacencies") == children.end())
    {
        if(adjacencies != nullptr)
        {
            children["adjacencies"] = adjacencies;
        }
    }

    if(children.find("adjacency-log") == children.end())
    {
        if(adjacency_log != nullptr)
        {
            children["adjacency-log"] = adjacency_log;
        }
    }

    if(children.find("database-log") == children.end())
    {
        if(database_log != nullptr)
        {
            children["database-log"] = database_log;
        }
    }

    if(children.find("detailed-lsps") == children.end())
    {
        if(detailed_lsps != nullptr)
        {
            children["detailed-lsps"] = detailed_lsps;
        }
    }

    if(children.find("lsp-log") == children.end())
    {
        if(lsp_log != nullptr)
        {
            children["lsp-log"] = lsp_log;
        }
    }

    if(children.find("lsp-table-summary") == children.end())
    {
        if(lsp_table_summary != nullptr)
        {
            children["lsp-table-summary"] = lsp_table_summary;
        }
    }

    if(children.find("lsps") == children.end())
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::AdjacencyLog()
{
    yang_name = "adjacency-log"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::set_value(const std::string & value_path, std::string value)
{
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
    children["generic-data"] = generic_data;

    yang_name = "log-entry"; yang_parent_name = "adjacency-log";
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
    return is_set(operation)
	|| is_set(adj_log_neighbor_system_id.operation)
	|| is_set(cur_adj_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(prev_adj_state.operation)
	|| is_set(state_reason.operation)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_log_neighbor_system_id.is_set || is_set(adj_log_neighbor_system_id.operation)) leaf_name_data.push_back(adj_log_neighbor_system_id.get_name_leafdata());
    if (cur_adj_state.is_set || is_set(cur_adj_state.operation)) leaf_name_data.push_back(cur_adj_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (prev_adj_state.is_set || is_set(prev_adj_state.operation)) leaf_name_data.push_back(prev_adj_state.get_name_leafdata());
    if (state_reason.is_set || is_set(state_reason.operation)) leaf_name_data.push_back(state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-per-topology-change")
    {
        for(auto const & c : adjacency_per_topology_change)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange>();
        c->parent = this;
        adjacency_per_topology_change.push_back(std::move(c));
        children[segment_path] = adjacency_per_topology_change.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::get_children()
{
    for (auto const & c : adjacency_per_topology_change)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adj-log-neighbor-system-id")
    {
        adj_log_neighbor_system_id = value;
    }
    if(value_path == "cur-adj-state")
    {
        cur_adj_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "prev-adj-state")
    {
        prev_adj_state = value;
    }
    if(value_path == "state-reason")
    {
        state_reason = value;
    }
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
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
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
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
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::AdjacencyPerTopologyChange()
    :
    change{YType::enumeration, "change"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>())
{
    id->parent = this;
    children["id"] = id;

    yang_name = "adjacency-per-topology-change"; yang_parent_name = "log-entry";
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
    return is_set(operation)
	|| is_set(change.operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-per-topology-change";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyPerTopologyChange' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.operation)) leaf_name_data.push_back(change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "change")
    {
        change = value;
    }
}

Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "adjacency-per-topology-change";
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
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::LspTableSummary()
    :
    all_fragment_lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>())
	,fragment0lsp_stats(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>())
{
    all_fragment_lsp_stats->parent = this;
    children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;

    fragment0lsp_stats->parent = this;
    children["fragment0lsp-stats"] = fragment0lsp_stats;

    yang_name = "lsp-table-summary"; yang_parent_name = "level";
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
    return is_set(operation)
	|| (all_fragment_lsp_stats !=  nullptr && all_fragment_lsp_stats->has_operation())
	|| (fragment0lsp_stats !=  nullptr && fragment0lsp_stats->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-table-summary";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspTableSummary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-fragment-lsp-stats")
    {
        if(all_fragment_lsp_stats != nullptr)
        {
            children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
        }
        else
        {
            all_fragment_lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats>();
            all_fragment_lsp_stats->parent = this;
            children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
        }
        return children.at("all-fragment-lsp-stats");
    }

    if(child_yang_name == "fragment0lsp-stats")
    {
        if(fragment0lsp_stats != nullptr)
        {
            children["fragment0lsp-stats"] = fragment0lsp_stats;
        }
        else
        {
            fragment0lsp_stats = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats>();
            fragment0lsp_stats->parent = this;
            children["fragment0lsp-stats"] = fragment0lsp_stats;
        }
        return children.at("fragment0lsp-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::get_children()
{
    if(children.find("all-fragment-lsp-stats") == children.end())
    {
        if(all_fragment_lsp_stats != nullptr)
        {
            children["all-fragment-lsp-stats"] = all_fragment_lsp_stats;
        }
    }

    if(children.find("fragment0lsp-stats") == children.end())
    {
        if(fragment0lsp_stats != nullptr)
        {
            children["fragment0lsp-stats"] = fragment0lsp_stats;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::Fragment0LspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>())
{
    node_counters->parent = this;
    children["node-counters"] = node_counters;

    yang_name = "fragment0lsp-stats"; yang_parent_name = "lsp-table-summary";
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
    return is_set(operation)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment0lsp-stats";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fragment0LspStats' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-counters")
    {
        if(node_counters != nullptr)
        {
            children["node-counters"] = node_counters;
        }
        else
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>();
            node_counters->parent = this;
            children["node-counters"] = node_counters;
        }
        return children.at("node-counters");
    }

    if(child_yang_name == "per-topology-counter")
    {
        for(auto const & c : per_topology_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter>();
        c->parent = this;
        per_topology_counter.push_back(std::move(c));
        children[segment_path] = per_topology_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_children()
{
    if(children.find("node-counters") == children.end())
    {
        if(node_counters != nullptr)
        {
            children["node-counters"] = node_counters;
        }
    }

    for (auto const & c : per_topology_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::NodeCounters()
    :
    pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>())
	,route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>())
{
    pseudo_node_lsp_count->parent = this;
    children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;

    route_lsp_count->parent = this;
    children["route-lsp-count"] = route_lsp_count;

    yang_name = "node-counters"; yang_parent_name = "fragment0lsp-stats";
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_data() const
{
    return (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_operation() const
{
    return is_set(operation)
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeCounters' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count != nullptr)
        {
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
        else
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>();
            pseudo_node_lsp_count->parent = this;
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
        return children.at("pseudo-node-lsp-count");
    }

    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count != nullptr)
        {
            children["route-lsp-count"] = route_lsp_count;
        }
        else
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>();
            route_lsp_count->parent = this;
            children["route-lsp-count"] = route_lsp_count;
        }
        return children.at("route-lsp-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_children()
{
    if(children.find("pseudo-node-lsp-count") == children.end())
    {
        if(pseudo_node_lsp_count != nullptr)
        {
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
    }

    if(children.find("route-lsp-count") == children.end())
    {
        if(route_lsp_count != nullptr)
        {
            children["route-lsp-count"] = route_lsp_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "route-lsp-count"; yang_parent_name = "node-counters";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoNodeLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::PerTopologyCounter()
    :
    attached_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>())
	,id(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>())
	,overloaded_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>())
{
    attached_lsp_count->parent = this;
    children["attached-lsp-count"] = attached_lsp_count;

    id->parent = this;
    children["id"] = id;

    overloaded_lsp_count->parent = this;
    children["overloaded-lsp-count"] = overloaded_lsp_count;

    yang_name = "per-topology-counter"; yang_parent_name = "fragment0lsp-stats";
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::~PerTopologyCounter()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_data() const
{
    return (attached_lsp_count !=  nullptr && attached_lsp_count->has_data())
	|| (id !=  nullptr && id->has_data())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_operation() const
{
    return is_set(operation)
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_operation())
	|| (id !=  nullptr && id->has_operation())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-counter";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopologyCounter' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attached-lsp-count")
    {
        if(attached_lsp_count != nullptr)
        {
            children["attached-lsp-count"] = attached_lsp_count;
        }
        else
        {
            attached_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>();
            attached_lsp_count->parent = this;
            children["attached-lsp-count"] = attached_lsp_count;
        }
        return children.at("attached-lsp-count");
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    if(child_yang_name == "overloaded-lsp-count")
    {
        if(overloaded_lsp_count != nullptr)
        {
            children["overloaded-lsp-count"] = overloaded_lsp_count;
        }
        else
        {
            overloaded_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>();
            overloaded_lsp_count->parent = this;
            children["overloaded-lsp-count"] = overloaded_lsp_count;
        }
        return children.at("overloaded-lsp-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_children()
{
    if(children.find("attached-lsp-count") == children.end())
    {
        if(attached_lsp_count != nullptr)
        {
            children["attached-lsp-count"] = attached_lsp_count;
        }
    }

    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    if(children.find("overloaded-lsp-count") == children.end())
    {
        if(overloaded_lsp_count != nullptr)
        {
            children["overloaded-lsp-count"] = overloaded_lsp_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "per-topology-counter";
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::OverloadedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "overloaded-lsp-count"; yang_parent_name = "per-topology-counter";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overloaded-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OverloadedLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::AttachedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "attached-lsp-count"; yang_parent_name = "per-topology-counter";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttachedLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::AllFragmentLspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>())
{
    node_counters->parent = this;
    children["node-counters"] = node_counters;

    yang_name = "all-fragment-lsp-stats"; yang_parent_name = "lsp-table-summary";
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
    return is_set(operation)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-fragment-lsp-stats";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllFragmentLspStats' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-counters")
    {
        if(node_counters != nullptr)
        {
            children["node-counters"] = node_counters;
        }
        else
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters>();
            node_counters->parent = this;
            children["node-counters"] = node_counters;
        }
        return children.at("node-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::get_children()
{
    if(children.find("node-counters") == children.end())
    {
        if(node_counters != nullptr)
        {
            children["node-counters"] = node_counters;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::NodeCounters()
    :
    pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>())
	,route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>())
{
    pseudo_node_lsp_count->parent = this;
    children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;

    route_lsp_count->parent = this;
    children["route-lsp-count"] = route_lsp_count;

    yang_name = "node-counters"; yang_parent_name = "all-fragment-lsp-stats";
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
    return is_set(operation)
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeCounters' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count != nullptr)
        {
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
        else
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount>();
            pseudo_node_lsp_count->parent = this;
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
        return children.at("pseudo-node-lsp-count");
    }

    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count != nullptr)
        {
            children["route-lsp-count"] = route_lsp_count;
        }
        else
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount>();
            route_lsp_count->parent = this;
            children["route-lsp-count"] = route_lsp_count;
        }
        return children.at("route-lsp-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::get_children()
{
    if(children.find("pseudo-node-lsp-count") == children.end())
    {
        if(pseudo_node_lsp_count != nullptr)
        {
            children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
        }
    }

    if(children.find("route-lsp-count") == children.end())
    {
        if(route_lsp_count != nullptr)
        {
            children["route-lsp-count"] = route_lsp_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "route-lsp-count"; yang_parent_name = "node-counters";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{
    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters";
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
    return is_set(operation)
	|| is_set(active_lsp_count.operation)
	|| is_set(purged_lsp_count.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoNodeLspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.operation)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.operation)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacencies()
{
    yang_name = "adjacencies"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacencies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Adjacencies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency")
    {
        for(auto const & c : adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency>();
        c->parent = this;
        adjacency.push_back(std::move(c));
        children[segment_path] = adjacency.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::get_children()
{
    for (auto const & c : adjacency)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::Adjacency()
    :
    adj_ipv4bfd_retry_count{YType::uint32, "adj-ipv4bfd-retry-count"},
    adj_ipv4bfd_retry_exp{YType::uint32, "adj-ipv4bfd-retry-exp"},
    adj_ipv4bfd_retry_running{YType::boolean, "adj-ipv4bfd-retry-running"},
    adj_ipv6bfd_retry_count{YType::uint32, "adj-ipv6bfd-retry-count"},
    adj_ipv6bfd_retry_exp{YType::uint32, "adj-ipv6bfd-retry-exp"},
    adj_ipv6bfd_retry_running{YType::boolean, "adj-ipv6bfd-retry-running"},
    adjacency_area_address{YType::str, "adjacency-area-address"},
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
    yang_name = "adjacency"; yang_parent_name = "adjacencies";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::~Adjacency()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::has_data() const
{
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
    for (auto const & leaf : adjacency_area_address.getYLeafs())
    {
        if(leaf.is_set)
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
    for (auto const & leaf : adjacency_area_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(adj_ipv4bfd_retry_count.operation)
	|| is_set(adj_ipv4bfd_retry_exp.operation)
	|| is_set(adj_ipv4bfd_retry_running.operation)
	|| is_set(adj_ipv6bfd_retry_count.operation)
	|| is_set(adj_ipv6bfd_retry_exp.operation)
	|| is_set(adj_ipv6bfd_retry_running.operation)
	|| is_set(adjacency_area_address.operation)
	|| is_set(adjacency_bfd_state.operation)
	|| is_set(adjacency_checkpoint_object_id.operation)
	|| is_set(adjacency_dispriority.operation)
	|| is_set(adjacency_holdtime.operation)
	|| is_set(adjacency_ietf_nsf_capable_flag.operation)
	|| is_set(adjacency_interface.operation)
	|| is_set(adjacency_ipv6bfd_state.operation)
	|| is_set(adjacency_local_priority.operation)
	|| is_set(adjacency_media_type.operation)
	|| is_set(adjacency_neighbor_priority.operation)
	|| is_set(adjacency_snpa.operation)
	|| is_set(adjacency_state.operation)
	|| is_set(adjacency_system_id.operation)
	|| is_set(adjacency_uptime.operation)
	|| is_set(adjacency_uptime_valid_flag.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_dis_flag.operation)
	|| is_set(neighbor_dis_flag.operation)
	|| is_set(nsr_standby.operation)
	|| is_set(system_id.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Adjacency' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_ipv4bfd_retry_count.is_set || is_set(adj_ipv4bfd_retry_count.operation)) leaf_name_data.push_back(adj_ipv4bfd_retry_count.get_name_leafdata());
    if (adj_ipv4bfd_retry_exp.is_set || is_set(adj_ipv4bfd_retry_exp.operation)) leaf_name_data.push_back(adj_ipv4bfd_retry_exp.get_name_leafdata());
    if (adj_ipv4bfd_retry_running.is_set || is_set(adj_ipv4bfd_retry_running.operation)) leaf_name_data.push_back(adj_ipv4bfd_retry_running.get_name_leafdata());
    if (adj_ipv6bfd_retry_count.is_set || is_set(adj_ipv6bfd_retry_count.operation)) leaf_name_data.push_back(adj_ipv6bfd_retry_count.get_name_leafdata());
    if (adj_ipv6bfd_retry_exp.is_set || is_set(adj_ipv6bfd_retry_exp.operation)) leaf_name_data.push_back(adj_ipv6bfd_retry_exp.get_name_leafdata());
    if (adj_ipv6bfd_retry_running.is_set || is_set(adj_ipv6bfd_retry_running.operation)) leaf_name_data.push_back(adj_ipv6bfd_retry_running.get_name_leafdata());
    if (adjacency_bfd_state.is_set || is_set(adjacency_bfd_state.operation)) leaf_name_data.push_back(adjacency_bfd_state.get_name_leafdata());
    if (adjacency_checkpoint_object_id.is_set || is_set(adjacency_checkpoint_object_id.operation)) leaf_name_data.push_back(adjacency_checkpoint_object_id.get_name_leafdata());
    if (adjacency_dispriority.is_set || is_set(adjacency_dispriority.operation)) leaf_name_data.push_back(adjacency_dispriority.get_name_leafdata());
    if (adjacency_holdtime.is_set || is_set(adjacency_holdtime.operation)) leaf_name_data.push_back(adjacency_holdtime.get_name_leafdata());
    if (adjacency_ietf_nsf_capable_flag.is_set || is_set(adjacency_ietf_nsf_capable_flag.operation)) leaf_name_data.push_back(adjacency_ietf_nsf_capable_flag.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.operation)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (adjacency_ipv6bfd_state.is_set || is_set(adjacency_ipv6bfd_state.operation)) leaf_name_data.push_back(adjacency_ipv6bfd_state.get_name_leafdata());
    if (adjacency_local_priority.is_set || is_set(adjacency_local_priority.operation)) leaf_name_data.push_back(adjacency_local_priority.get_name_leafdata());
    if (adjacency_media_type.is_set || is_set(adjacency_media_type.operation)) leaf_name_data.push_back(adjacency_media_type.get_name_leafdata());
    if (adjacency_neighbor_priority.is_set || is_set(adjacency_neighbor_priority.operation)) leaf_name_data.push_back(adjacency_neighbor_priority.get_name_leafdata());
    if (adjacency_snpa.is_set || is_set(adjacency_snpa.operation)) leaf_name_data.push_back(adjacency_snpa.get_name_leafdata());
    if (adjacency_state.is_set || is_set(adjacency_state.operation)) leaf_name_data.push_back(adjacency_state.get_name_leafdata());
    if (adjacency_system_id.is_set || is_set(adjacency_system_id.operation)) leaf_name_data.push_back(adjacency_system_id.get_name_leafdata());
    if (adjacency_uptime.is_set || is_set(adjacency_uptime.operation)) leaf_name_data.push_back(adjacency_uptime.get_name_leafdata());
    if (adjacency_uptime_valid_flag.is_set || is_set(adjacency_uptime_valid_flag.operation)) leaf_name_data.push_back(adjacency_uptime_valid_flag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_dis_flag.is_set || is_set(local_dis_flag.operation)) leaf_name_data.push_back(local_dis_flag.get_name_leafdata());
    if (neighbor_dis_flag.is_set || is_set(neighbor_dis_flag.operation)) leaf_name_data.push_back(neighbor_dis_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.operation)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());

    auto adjacency_area_address_name_datas = adjacency_area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), adjacency_area_address_name_datas.begin(), adjacency_area_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-per-address-family-data")
    {
        for(auto const & c : adjacency_per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData>();
        c->parent = this;
        adjacency_per_address_family_data.push_back(std::move(c));
        children[segment_path] = adjacency_per_address_family_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-topology")
    {
        for(auto const & c : adjacency_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology>();
        c->parent = this;
        adjacency_topology.push_back(std::move(c));
        children[segment_path] = adjacency_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::get_children()
{
    for (auto const & c : adjacency_per_address_family_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : adjacency_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adj-ipv4bfd-retry-count")
    {
        adj_ipv4bfd_retry_count = value;
    }
    if(value_path == "adj-ipv4bfd-retry-exp")
    {
        adj_ipv4bfd_retry_exp = value;
    }
    if(value_path == "adj-ipv4bfd-retry-running")
    {
        adj_ipv4bfd_retry_running = value;
    }
    if(value_path == "adj-ipv6bfd-retry-count")
    {
        adj_ipv6bfd_retry_count = value;
    }
    if(value_path == "adj-ipv6bfd-retry-exp")
    {
        adj_ipv6bfd_retry_exp = value;
    }
    if(value_path == "adj-ipv6bfd-retry-running")
    {
        adj_ipv6bfd_retry_running = value;
    }
    if(value_path == "adjacency-area-address")
    {
        adjacency_area_address.append(value);
    }
    if(value_path == "adjacency-bfd-state")
    {
        adjacency_bfd_state = value;
    }
    if(value_path == "adjacency-checkpoint-object-id")
    {
        adjacency_checkpoint_object_id = value;
    }
    if(value_path == "adjacency-dispriority")
    {
        adjacency_dispriority = value;
    }
    if(value_path == "adjacency-holdtime")
    {
        adjacency_holdtime = value;
    }
    if(value_path == "adjacency-ietf-nsf-capable-flag")
    {
        adjacency_ietf_nsf_capable_flag = value;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
    }
    if(value_path == "adjacency-ipv6bfd-state")
    {
        adjacency_ipv6bfd_state = value;
    }
    if(value_path == "adjacency-local-priority")
    {
        adjacency_local_priority = value;
    }
    if(value_path == "adjacency-media-type")
    {
        adjacency_media_type = value;
    }
    if(value_path == "adjacency-neighbor-priority")
    {
        adjacency_neighbor_priority = value;
    }
    if(value_path == "adjacency-snpa")
    {
        adjacency_snpa = value;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state = value;
    }
    if(value_path == "adjacency-system-id")
    {
        adjacency_system_id = value;
    }
    if(value_path == "adjacency-uptime")
    {
        adjacency_uptime = value;
    }
    if(value_path == "adjacency-uptime-valid-flag")
    {
        adjacency_uptime_valid_flag = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-dis-flag")
    {
        local_dis_flag = value;
    }
    if(value_path == "neighbor-dis-flag")
    {
        neighbor_dis_flag = value;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::AdjacencyTopology()
    :
    parallel_p2p_link_suppressed_flag{YType::boolean, "parallel-p2p-link-suppressed-flag"},
    topology_status{YType::enumeration, "topology-status"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id>())
{
    id->parent = this;
    children["id"] = id;

    yang_name = "adjacency-topology"; yang_parent_name = "adjacency";
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
    return is_set(operation)
	|| is_set(parallel_p2p_link_suppressed_flag.operation)
	|| is_set(topology_status.operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-topology";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyTopology' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parallel_p2p_link_suppressed_flag.is_set || is_set(parallel_p2p_link_suppressed_flag.operation)) leaf_name_data.push_back(parallel_p2p_link_suppressed_flag.get_name_leafdata());
    if (topology_status.is_set || is_set(topology_status.operation)) leaf_name_data.push_back(topology_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parallel-p2p-link-suppressed-flag")
    {
        parallel_p2p_link_suppressed_flag = value;
    }
    if(value_path == "topology-status")
    {
        topology_status = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "adjacency-topology";
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
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::AdjacencyPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "adjacency-per-address-family-data"; yang_parent_name = "adjacency";
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
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-per-address-family-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyPerAddressFamilyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::Ipv4()
    :
    interface_address{YType::str, "interface-address"},
    next_hop{YType::str, "next-hop"},
    underlying_adjacency_sid{YType::uint32, "underlying-adjacency-sid"},
    underlying_interface{YType::str, "underlying-interface"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    children["adjacency-sid"] = adjacency_sid;

    non_frr_adjacency_sid->parent = this;
    children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;

    yang_name = "ipv4"; yang_parent_name = "adjacency-per-address-family-data";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::has_data() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::has_operation() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(next_hop.operation)
	|| is_set(underlying_adjacency_sid.operation)
	|| is_set(underlying_interface.operation)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto interface_address_name_datas = interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_address_name_datas.begin(), interface_address_name_datas.end());
    auto underlying_adjacency_sid_name_datas = underlying_adjacency_sid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_adjacency_sid_name_datas.begin(), underlying_adjacency_sid_name_datas.end());
    auto underlying_interface_name_datas = underlying_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_interface_name_datas.begin(), underlying_interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
        else
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid>();
            adjacency_sid->parent = this;
            children["adjacency-sid"] = adjacency_sid;
        }
        return children.at("adjacency-sid");
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        else
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
            non_frr_adjacency_sid->parent = this;
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        return children.at("non-frr-adjacency-sid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::get_children()
{
    if(children.find("adjacency-sid") == children.end())
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
    }

    if(children.find("non-frr-adjacency-sid") == children.end())
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address.append(value);
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "underlying-adjacency-sid")
    {
        underlying_adjacency_sid.append(value);
    }
    if(value_path == "underlying-interface")
    {
        underlying_interface.append(value);
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonFrrAdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::Ipv6()
    :
    interface_address{YType::str, "interface-address"},
    next_hop{YType::str, "next-hop"},
    underlying_adjacency_sid{YType::uint32, "underlying-adjacency-sid"},
    underlying_interface{YType::str, "underlying-interface"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    children["adjacency-sid"] = adjacency_sid;

    non_frr_adjacency_sid->parent = this;
    children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;

    yang_name = "ipv6"; yang_parent_name = "adjacency-per-address-family-data";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::has_data() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::has_operation() const
{
    for (auto const & leaf : interface_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_adjacency_sid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_address.operation)
	|| is_set(next_hop.operation)
	|| is_set(underlying_adjacency_sid.operation)
	|| is_set(underlying_interface.operation)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto interface_address_name_datas = interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_address_name_datas.begin(), interface_address_name_datas.end());
    auto underlying_adjacency_sid_name_datas = underlying_adjacency_sid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_adjacency_sid_name_datas.begin(), underlying_adjacency_sid_name_datas.end());
    auto underlying_interface_name_datas = underlying_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_interface_name_datas.begin(), underlying_interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
        else
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid>();
            adjacency_sid->parent = this;
            children["adjacency-sid"] = adjacency_sid;
        }
        return children.at("adjacency-sid");
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        else
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
            non_frr_adjacency_sid->parent = this;
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
        return children.at("non-frr-adjacency-sid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::get_children()
{
    if(children.find("adjacency-sid") == children.end())
    {
        if(adjacency_sid != nullptr)
        {
            children["adjacency-sid"] = adjacency_sid;
        }
    }

    if(children.find("non-frr-adjacency-sid") == children.end())
    {
        if(non_frr_adjacency_sid != nullptr)
        {
            children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-address")
    {
        interface_address.append(value);
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "underlying-adjacency-sid")
    {
        underlying_adjacency_sid.append(value);
    }
    if(value_path == "underlying-interface")
    {
        underlying_interface.append(value);
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    children["adjacency-sid-backup"] = adjacency_sid_backup;

    adjacency_sid_backup_te->parent = this;
    children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(adjacency_sid_value.operation)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonFrrAdjacencySid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.operation)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        else
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
            adjacency_sid_backup->parent = this;
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
        return children.at("adjacency-sid-backup");
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        else
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
            adjacency_sid_backup_te->parent = this;
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
        return children.at("adjacency-sid-backup-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children()
{
    if(children.find("adjacency-sid-backup") == children.end())
    {
        if(adjacency_sid_backup != nullptr)
        {
            children["adjacency-sid-backup"] = adjacency_sid_backup;
        }
    }

    if(children.find("adjacency-sid-backup-te") == children.end())
    {
        if(adjacency_sid_backup_te != nullptr)
        {
            children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack{YType::uint32, "backup-label-stack"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{
    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid";
}

Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (auto const & leaf : backup_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_interface.operation)
	|| is_set(backup_label_stack.operation)
	|| is_set(backup_label_stack_size.operation)
	|| is_set(backup_nexthop.operation)
	|| is_set(backup_node_address.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySidBackupTe' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.operation)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.operation)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.operation)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    auto backup_label_stack_name_datas = backup_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_label_stack_name_datas.begin(), backup_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "backup-label-stack")
    {
        backup_label_stack.append(value);
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
    }
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsps()
{
    yang_name = "detailed-lsps"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-lsps";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DetailedLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailedLsps' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detailed-lsp")
    {
        for(auto const & c : detailed_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp>();
        c->parent = this;
        detailed_lsp.push_back(std::move(c));
        children[segment_path] = detailed_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DetailedLsps::get_children()
{
    for (auto const & c : detailed_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::DetailedLsp()
    :
    lsp_id{YType::str, "lsp-id"},
    lsp_body{YType::str, "lsp-body"}
    	,
    lsp_header_data(std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData>())
{
    lsp_header_data->parent = this;
    children["lsp-header-data"] = lsp_header_data;

    yang_name = "detailed-lsp"; yang_parent_name = "detailed-lsps";
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
    return is_set(operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_body.operation)
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-lsp" <<"[lsp-id='" <<lsp_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailedLsp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_body.is_set || is_set(lsp_body.operation)) leaf_name_data.push_back(lsp_body.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-header-data")
    {
        if(lsp_header_data != nullptr)
        {
            children["lsp-header-data"] = lsp_header_data;
        }
        else
        {
            lsp_header_data = std::make_shared<Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData>();
            lsp_header_data->parent = this;
            children["lsp-header-data"] = lsp_header_data;
        }
        return children.at("lsp-header-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::get_children()
{
    if(children.find("lsp-header-data") == children.end())
    {
        if(lsp_header_data != nullptr)
        {
            children["lsp-header-data"] = lsp_header_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-body")
    {
        lsp_body = value;
    }
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::LspHeaderData()
    :
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
    lsp_parition_repair_supported_flag{YType::boolean, "lsp-parition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"}
{
    yang_name = "lsp-header-data"; yang_parent_name = "detailed-lsp";
}

Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::~LspHeaderData()
{
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_data() const
{
    return local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_parition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_lsp_flag.operation)
	|| is_set(lsp_active_flag.operation)
	|| is_set(lsp_attached_flag.operation)
	|| is_set(lsp_checksum.operation)
	|| is_set(lsp_holdtime.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_length.operation)
	|| is_set(lsp_level.operation)
	|| is_set(lsp_nonv1a_flag.operation)
	|| is_set(lsp_overloaded_flag.operation)
	|| is_set(lsp_parition_repair_supported_flag.operation)
	|| is_set(lsp_sequence_number.operation);
}

std::string Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-header-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspHeaderData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lsp_flag.is_set || is_set(local_lsp_flag.operation)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.operation)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.operation)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.operation)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.operation)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.operation)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.operation)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.operation)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.operation)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_parition_repair_supported_flag.is_set || is_set(lsp_parition_repair_supported_flag.operation)) leaf_name_data.push_back(lsp_parition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.operation)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
    }
    if(value_path == "lsp-parition-repair-supported-flag")
    {
        lsp_parition_repair_supported_flag = value;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
    }
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsps()
{
    yang_name = "lsps"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsps' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Lsps::get_children()
{
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::Lsp()
    :
    lsp_id{YType::str, "lsp-id"},
    lsp_body{YType::str, "lsp-body"}
    	,
    lsp_header_data(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>())
{
    lsp_header_data->parent = this;
    children["lsp-header-data"] = lsp_header_data;

    yang_name = "lsp"; yang_parent_name = "lsps";
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
    return is_set(operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_body.operation)
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[lsp-id='" <<lsp_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_body.is_set || is_set(lsp_body.operation)) leaf_name_data.push_back(lsp_body.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-header-data")
    {
        if(lsp_header_data != nullptr)
        {
            children["lsp-header-data"] = lsp_header_data;
        }
        else
        {
            lsp_header_data = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>();
            lsp_header_data->parent = this;
            children["lsp-header-data"] = lsp_header_data;
        }
        return children.at("lsp-header-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_children()
{
    if(children.find("lsp-header-data") == children.end())
    {
        if(lsp_header_data != nullptr)
        {
            children["lsp-header-data"] = lsp_header_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-body")
    {
        lsp_body = value;
    }
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::LspHeaderData()
    :
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
    lsp_parition_repair_supported_flag{YType::boolean, "lsp-parition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"}
{
    yang_name = "lsp-header-data"; yang_parent_name = "lsp";
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::~LspHeaderData()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_data() const
{
    return local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_parition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_lsp_flag.operation)
	|| is_set(lsp_active_flag.operation)
	|| is_set(lsp_attached_flag.operation)
	|| is_set(lsp_checksum.operation)
	|| is_set(lsp_holdtime.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_length.operation)
	|| is_set(lsp_level.operation)
	|| is_set(lsp_nonv1a_flag.operation)
	|| is_set(lsp_overloaded_flag.operation)
	|| is_set(lsp_parition_repair_supported_flag.operation)
	|| is_set(lsp_sequence_number.operation);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-header-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspHeaderData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lsp_flag.is_set || is_set(local_lsp_flag.operation)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.operation)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.operation)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.operation)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.operation)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.operation)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.operation)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.operation)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.operation)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_parition_repair_supported_flag.is_set || is_set(lsp_parition_repair_supported_flag.operation)) leaf_name_data.push_back(lsp_parition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.operation)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
    }
    if(value_path == "lsp-parition-repair-supported-flag")
    {
        lsp_parition_repair_supported_flag = value;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspLog::LspLog()
{
    yang_name = "lsp-log"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::LogEntry()
    :
    delayed_trigger_count{YType::uint32, "delayed-trigger-count"},
    log_interface{YType::str, "log-interface"},
    pseudo_node_number{YType::uint8, "pseudo-node-number"},
    trigger{YType::enumeration, "trigger"},
    trigger_count{YType::uint32, "trigger-count"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData>())
{
    generic_data->parent = this;
    children["generic-data"] = generic_data;

    yang_name = "log-entry"; yang_parent_name = "lsp-log";
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::has_data() const
{
    for (auto const & leaf : trigger.getYLeafs())
    {
        if(leaf.is_set)
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
    for (auto const & leaf : trigger.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(delayed_trigger_count.operation)
	|| is_set(log_interface.operation)
	|| is_set(pseudo_node_number.operation)
	|| is_set(trigger.operation)
	|| is_set(trigger_count.operation)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_trigger_count.is_set || is_set(delayed_trigger_count.operation)) leaf_name_data.push_back(delayed_trigger_count.get_name_leafdata());
    if (log_interface.is_set || is_set(log_interface.operation)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (pseudo_node_number.is_set || is_set(pseudo_node_number.operation)) leaf_name_data.push_back(pseudo_node_number.get_name_leafdata());
    if (trigger_count.is_set || is_set(trigger_count.operation)) leaf_name_data.push_back(trigger_count.get_name_leafdata());

    auto trigger_name_datas = trigger.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trigger_name_datas.begin(), trigger_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::get_children()
{
    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delayed-trigger-count")
    {
        delayed_trigger_count = value;
    }
    if(value_path == "log-interface")
    {
        log_interface = value;
    }
    if(value_path == "pseudo-node-number")
    {
        pseudo_node_number = value;
    }
    if(value_path == "trigger")
    {
        trigger.append(value);
    }
    if(value_path == "trigger-count")
    {
        trigger_count = value;
    }
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
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
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
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
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::DatabaseLog()
{
    yang_name = "database-log"; yang_parent_name = "level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::set_value(const std::string & value_path, std::string value)
{
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
    children["generic-data"] = generic_data;

    new_lsp_entry->parent = this;
    children["new-lsp-entry"] = new_lsp_entry;

    old_lsp_entry->parent = this;
    children["old-lsp-entry"] = old_lsp_entry;

    yang_name = "log-entry"; yang_parent_name = "database-log";
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
    return is_set(operation)
	|| is_set(lspdb_operation.operation)
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

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspdb_operation.is_set || is_set(lspdb_operation.operation)) leaf_name_data.push_back(lspdb_operation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    if(child_yang_name == "new-lsp-entry")
    {
        if(new_lsp_entry != nullptr)
        {
            children["new-lsp-entry"] = new_lsp_entry;
        }
        else
        {
            new_lsp_entry = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry>();
            new_lsp_entry->parent = this;
            children["new-lsp-entry"] = new_lsp_entry;
        }
        return children.at("new-lsp-entry");
    }

    if(child_yang_name == "old-lsp-entry")
    {
        if(old_lsp_entry != nullptr)
        {
            children["old-lsp-entry"] = old_lsp_entry;
        }
        else
        {
            old_lsp_entry = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry>();
            old_lsp_entry->parent = this;
            children["old-lsp-entry"] = old_lsp_entry;
        }
        return children.at("old-lsp-entry");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::get_children()
{
    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    if(children.find("new-lsp-entry") == children.end())
    {
        if(new_lsp_entry != nullptr)
        {
            children["new-lsp-entry"] = new_lsp_entry;
        }
    }

    if(children.find("old-lsp-entry") == children.end())
    {
        if(old_lsp_entry != nullptr)
        {
            children["old-lsp-entry"] = old_lsp_entry;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspdb-operation")
    {
        lspdb_operation = value;
    }
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
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
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
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
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::NewLspEntry()
    :
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
    lsp_parition_repair_supported_flag{YType::boolean, "lsp-parition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"}
{
    yang_name = "new-lsp-entry"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::~NewLspEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_data() const
{
    return local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_parition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(local_lsp_flag.operation)
	|| is_set(lsp_active_flag.operation)
	|| is_set(lsp_attached_flag.operation)
	|| is_set(lsp_checksum.operation)
	|| is_set(lsp_holdtime.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_length.operation)
	|| is_set(lsp_level.operation)
	|| is_set(lsp_nonv1a_flag.operation)
	|| is_set(lsp_overloaded_flag.operation)
	|| is_set(lsp_parition_repair_supported_flag.operation)
	|| is_set(lsp_sequence_number.operation);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-lsp-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewLspEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lsp_flag.is_set || is_set(local_lsp_flag.operation)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.operation)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.operation)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.operation)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.operation)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.operation)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.operation)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.operation)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.operation)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_parition_repair_supported_flag.is_set || is_set(lsp_parition_repair_supported_flag.operation)) leaf_name_data.push_back(lsp_parition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.operation)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
    }
    if(value_path == "lsp-parition-repair-supported-flag")
    {
        lsp_parition_repair_supported_flag = value;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
    }
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::OldLspEntry()
    :
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
    lsp_parition_repair_supported_flag{YType::boolean, "lsp-parition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"}
{
    yang_name = "old-lsp-entry"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::~OldLspEntry()
{
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_data() const
{
    return local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_parition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set;
}

bool Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(local_lsp_flag.operation)
	|| is_set(lsp_active_flag.operation)
	|| is_set(lsp_attached_flag.operation)
	|| is_set(lsp_checksum.operation)
	|| is_set(lsp_holdtime.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_length.operation)
	|| is_set(lsp_level.operation)
	|| is_set(lsp_nonv1a_flag.operation)
	|| is_set(lsp_overloaded_flag.operation)
	|| is_set(lsp_parition_repair_supported_flag.operation)
	|| is_set(lsp_sequence_number.operation);
}

std::string Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "old-lsp-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OldLspEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lsp_flag.is_set || is_set(local_lsp_flag.operation)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.operation)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.operation)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.operation)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.operation)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.operation)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.operation)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.operation)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.operation)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_parition_repair_supported_flag.is_set || is_set(lsp_parition_repair_supported_flag.operation)) leaf_name_data.push_back(lsp_parition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.operation)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::get_children()
{
    return children;
}

void Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
    }
    if(value_path == "lsp-parition-repair-supported-flag")
    {
        lsp_parition_repair_supported_flag = value;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
    }
}

Isis::Instances::Instance::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "instance";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topologies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::Topology()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    frr_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>())
	,ipv4_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>())
	,ipv4frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>())
	,ipv6_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>())
	,ipv6frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>())
	,topology_levels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>())
{
    frr_summary->parent = this;
    children["frr-summary"] = frr_summary;

    ipv4_routes->parent = this;
    children["ipv4-routes"] = ipv4_routes;

    ipv4frr_backups->parent = this;
    children["ipv4frr-backups"] = ipv4frr_backups;

    ipv6_routes->parent = this;
    children["ipv6-routes"] = ipv6_routes;

    ipv6frr_backups->parent = this;
    children["ipv6frr-backups"] = ipv6frr_backups;

    topology_levels->parent = this;
    children["topology-levels"] = topology_levels;

    yang_name = "topology"; yang_parent_name = "topologies";
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
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_data())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_data())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_data())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_data())
	|| (topology_levels !=  nullptr && topology_levels->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| (frr_summary !=  nullptr && frr_summary->has_operation())
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_operation())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_operation())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_operation())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_operation())
	|| (topology_levels !=  nullptr && topology_levels->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-summary")
    {
        if(frr_summary != nullptr)
        {
            children["frr-summary"] = frr_summary;
        }
        else
        {
            frr_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>();
            frr_summary->parent = this;
            children["frr-summary"] = frr_summary;
        }
        return children.at("frr-summary");
    }

    if(child_yang_name == "ipv4-routes")
    {
        if(ipv4_routes != nullptr)
        {
            children["ipv4-routes"] = ipv4_routes;
        }
        else
        {
            ipv4_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>();
            ipv4_routes->parent = this;
            children["ipv4-routes"] = ipv4_routes;
        }
        return children.at("ipv4-routes");
    }

    if(child_yang_name == "ipv4frr-backups")
    {
        if(ipv4frr_backups != nullptr)
        {
            children["ipv4frr-backups"] = ipv4frr_backups;
        }
        else
        {
            ipv4frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>();
            ipv4frr_backups->parent = this;
            children["ipv4frr-backups"] = ipv4frr_backups;
        }
        return children.at("ipv4frr-backups");
    }

    if(child_yang_name == "ipv6-routes")
    {
        if(ipv6_routes != nullptr)
        {
            children["ipv6-routes"] = ipv6_routes;
        }
        else
        {
            ipv6_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>();
            ipv6_routes->parent = this;
            children["ipv6-routes"] = ipv6_routes;
        }
        return children.at("ipv6-routes");
    }

    if(child_yang_name == "ipv6frr-backups")
    {
        if(ipv6frr_backups != nullptr)
        {
            children["ipv6frr-backups"] = ipv6frr_backups;
        }
        else
        {
            ipv6frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>();
            ipv6frr_backups->parent = this;
            children["ipv6frr-backups"] = ipv6frr_backups;
        }
        return children.at("ipv6frr-backups");
    }

    if(child_yang_name == "topology-levels")
    {
        if(topology_levels != nullptr)
        {
            children["topology-levels"] = topology_levels;
        }
        else
        {
            topology_levels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>();
            topology_levels->parent = this;
            children["topology-levels"] = topology_levels;
        }
        return children.at("topology-levels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::get_children()
{
    if(children.find("frr-summary") == children.end())
    {
        if(frr_summary != nullptr)
        {
            children["frr-summary"] = frr_summary;
        }
    }

    if(children.find("ipv4-routes") == children.end())
    {
        if(ipv4_routes != nullptr)
        {
            children["ipv4-routes"] = ipv4_routes;
        }
    }

    if(children.find("ipv4frr-backups") == children.end())
    {
        if(ipv4frr_backups != nullptr)
        {
            children["ipv4frr-backups"] = ipv4frr_backups;
        }
    }

    if(children.find("ipv6-routes") == children.end())
    {
        if(ipv6_routes != nullptr)
        {
            children["ipv6-routes"] = ipv6_routes;
        }
    }

    if(children.find("ipv6frr-backups") == children.end())
    {
        if(ipv6frr_backups != nullptr)
        {
            children["ipv6frr-backups"] = ipv6frr_backups;
        }
    }

    if(children.find("topology-levels") == children.end())
    {
        if(topology_levels != nullptr)
        {
            children["topology-levels"] = topology_levels;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::FrrSummary()
    :
    level1_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>())
	,level2_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>())
	,unreachable_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>())
{
    level1_prefixes->parent = this;
    children["level1-prefixes"] = level1_prefixes;

    level2_prefixes->parent = this;
    children["level2-prefixes"] = level2_prefixes;

    unreachable_prefixes->parent = this;
    children["unreachable-prefixes"] = unreachable_prefixes;

    yang_name = "frr-summary"; yang_parent_name = "topology";
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
    return is_set(operation)
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

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrSummary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "level1-prefixes")
    {
        if(level1_prefixes != nullptr)
        {
            children["level1-prefixes"] = level1_prefixes;
        }
        else
        {
            level1_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>();
            level1_prefixes->parent = this;
            children["level1-prefixes"] = level1_prefixes;
        }
        return children.at("level1-prefixes");
    }

    if(child_yang_name == "level2-prefixes")
    {
        if(level2_prefixes != nullptr)
        {
            children["level2-prefixes"] = level2_prefixes;
        }
        else
        {
            level2_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>();
            level2_prefixes->parent = this;
            children["level2-prefixes"] = level2_prefixes;
        }
        return children.at("level2-prefixes");
    }

    if(child_yang_name == "unreachable-prefixes")
    {
        if(unreachable_prefixes != nullptr)
        {
            children["unreachable-prefixes"] = unreachable_prefixes;
        }
        else
        {
            unreachable_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>();
            unreachable_prefixes->parent = this;
            children["unreachable-prefixes"] = unreachable_prefixes;
        }
        return children.at("unreachable-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_children()
{
    if(children.find("level1-prefixes") == children.end())
    {
        if(level1_prefixes != nullptr)
        {
            children["level1-prefixes"] = level1_prefixes;
        }
    }

    if(children.find("level2-prefixes") == children.end())
    {
        if(level2_prefixes != nullptr)
        {
            children["level2-prefixes"] = level2_prefixes;
        }
    }

    if(children.find("unreachable-prefixes") == children.end())
    {
        if(unreachable_prefixes != nullptr)
        {
            children["unreachable-prefixes"] = unreachable_prefixes;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Level1Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    children["all-paths-protected"] = all_paths_protected;

    some_paths_protected->parent = this;
    children["some-paths-protected"] = some_paths_protected;

    unprotected->parent = this;
    children["unprotected"] = unprotected;

    yang_name = "level1-prefixes"; yang_parent_name = "frr-summary";
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
    return is_set(operation)
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

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1Prefixes' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected != nullptr)
        {
            children["all-paths-protected"] = all_paths_protected;
        }
        else
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>();
            all_paths_protected->parent = this;
            children["all-paths-protected"] = all_paths_protected;
        }
        return children.at("all-paths-protected");
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected != nullptr)
        {
            children["some-paths-protected"] = some_paths_protected;
        }
        else
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>();
            some_paths_protected->parent = this;
            children["some-paths-protected"] = some_paths_protected;
        }
        return children.at("some-paths-protected");
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected != nullptr)
        {
            children["unprotected"] = unprotected;
        }
        else
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>();
            unprotected->parent = this;
            children["unprotected"] = unprotected;
        }
        return children.at("unprotected");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_children()
{
    if(children.find("all-paths-protected") == children.end())
    {
        if(all_paths_protected != nullptr)
        {
            children["all-paths-protected"] = all_paths_protected;
        }
    }

    if(children.find("some-paths-protected") == children.end())
    {
        if(some_paths_protected != nullptr)
        {
            children["some-paths-protected"] = some_paths_protected;
        }
    }

    if(children.find("unprotected") == children.end())
    {
        if(unprotected != nullptr)
        {
            children["unprotected"] = unprotected;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "all-paths-protected"; yang_parent_name = "level1-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllPathsProtected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "some-paths-protected"; yang_parent_name = "level1-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SomePathsProtected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "unprotected"; yang_parent_name = "level1-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unprotected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Level2Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    children["all-paths-protected"] = all_paths_protected;

    some_paths_protected->parent = this;
    children["some-paths-protected"] = some_paths_protected;

    unprotected->parent = this;
    children["unprotected"] = unprotected;

    yang_name = "level2-prefixes"; yang_parent_name = "frr-summary";
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
    return is_set(operation)
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

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2Prefixes' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected != nullptr)
        {
            children["all-paths-protected"] = all_paths_protected;
        }
        else
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>();
            all_paths_protected->parent = this;
            children["all-paths-protected"] = all_paths_protected;
        }
        return children.at("all-paths-protected");
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected != nullptr)
        {
            children["some-paths-protected"] = some_paths_protected;
        }
        else
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>();
            some_paths_protected->parent = this;
            children["some-paths-protected"] = some_paths_protected;
        }
        return children.at("some-paths-protected");
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected != nullptr)
        {
            children["unprotected"] = unprotected;
        }
        else
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>();
            unprotected->parent = this;
            children["unprotected"] = unprotected;
        }
        return children.at("unprotected");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_children()
{
    if(children.find("all-paths-protected") == children.end())
    {
        if(all_paths_protected != nullptr)
        {
            children["all-paths-protected"] = all_paths_protected;
        }
    }

    if(children.find("some-paths-protected") == children.end())
    {
        if(some_paths_protected != nullptr)
        {
            children["some-paths-protected"] = some_paths_protected;
        }
    }

    if(children.find("unprotected") == children.end())
    {
        if(unprotected != nullptr)
        {
            children["unprotected"] = unprotected;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "all-paths-protected"; yang_parent_name = "level2-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllPathsProtected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "some-paths-protected"; yang_parent_name = "level2-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SomePathsProtected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "unprotected"; yang_parent_name = "level2-prefixes";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unprotected' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::UnreachablePrefixes()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "unreachable-prefixes"; yang_parent_name = "frr-summary";
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::~UnreachablePrefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnreachablePrefixes' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevels()
{
    yang_name = "topology-levels"; yang_parent_name = "topology";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-levels";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLevels' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-level")
    {
        for(auto const & c : topology_level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel>();
        c->parent = this;
        topology_level.push_back(std::move(c));
        children[segment_path] = topology_level.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_children()
{
    for (auto const & c : topology_level)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologyLevel()
    :
    level{YType::enumeration, "level"}
    	,
    ipv4_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>())
	,ipv6_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>())
	,spf_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>())
	,te_adjacency_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>())
	,te_advertisements(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>())
	,te_tunnels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>())
	,topology_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>())
{
    ipv4_link_topologies->parent = this;
    children["ipv4-link-topologies"] = ipv4_link_topologies;

    ipv6_link_topologies->parent = this;
    children["ipv6-link-topologies"] = ipv6_link_topologies;

    spf_log->parent = this;
    children["spf-log"] = spf_log;

    te_adjacency_log->parent = this;
    children["te-adjacency-log"] = te_adjacency_log;

    te_advertisements->parent = this;
    children["te-advertisements"] = te_advertisements;

    te_tunnels->parent = this;
    children["te-tunnels"] = te_tunnels;

    topology_summary->parent = this;
    children["topology-summary"] = topology_summary;

    yang_name = "topology-level"; yang_parent_name = "topology-levels";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::~TopologyLevel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_data() const
{
    return level.is_set
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_data())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_data())
	|| (spf_log !=  nullptr && spf_log->has_data())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_data())
	|| (te_advertisements !=  nullptr && te_advertisements->has_data())
	|| (te_tunnels !=  nullptr && te_tunnels->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_operation())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_operation())
	|| (spf_log !=  nullptr && spf_log->has_operation())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_operation())
	|| (te_advertisements !=  nullptr && te_advertisements->has_operation())
	|| (te_tunnels !=  nullptr && te_tunnels->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-level" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLevel' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-link-topologies")
    {
        if(ipv4_link_topologies != nullptr)
        {
            children["ipv4-link-topologies"] = ipv4_link_topologies;
        }
        else
        {
            ipv4_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>();
            ipv4_link_topologies->parent = this;
            children["ipv4-link-topologies"] = ipv4_link_topologies;
        }
        return children.at("ipv4-link-topologies");
    }

    if(child_yang_name == "ipv6-link-topologies")
    {
        if(ipv6_link_topologies != nullptr)
        {
            children["ipv6-link-topologies"] = ipv6_link_topologies;
        }
        else
        {
            ipv6_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>();
            ipv6_link_topologies->parent = this;
            children["ipv6-link-topologies"] = ipv6_link_topologies;
        }
        return children.at("ipv6-link-topologies");
    }

    if(child_yang_name == "spf-log")
    {
        if(spf_log != nullptr)
        {
            children["spf-log"] = spf_log;
        }
        else
        {
            spf_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>();
            spf_log->parent = this;
            children["spf-log"] = spf_log;
        }
        return children.at("spf-log");
    }

    if(child_yang_name == "te-adjacency-log")
    {
        if(te_adjacency_log != nullptr)
        {
            children["te-adjacency-log"] = te_adjacency_log;
        }
        else
        {
            te_adjacency_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>();
            te_adjacency_log->parent = this;
            children["te-adjacency-log"] = te_adjacency_log;
        }
        return children.at("te-adjacency-log");
    }

    if(child_yang_name == "te-advertisements")
    {
        if(te_advertisements != nullptr)
        {
            children["te-advertisements"] = te_advertisements;
        }
        else
        {
            te_advertisements = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>();
            te_advertisements->parent = this;
            children["te-advertisements"] = te_advertisements;
        }
        return children.at("te-advertisements");
    }

    if(child_yang_name == "te-tunnels")
    {
        if(te_tunnels != nullptr)
        {
            children["te-tunnels"] = te_tunnels;
        }
        else
        {
            te_tunnels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>();
            te_tunnels->parent = this;
            children["te-tunnels"] = te_tunnels;
        }
        return children.at("te-tunnels");
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary != nullptr)
        {
            children["topology-summary"] = topology_summary;
        }
        else
        {
            topology_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>();
            topology_summary->parent = this;
            children["topology-summary"] = topology_summary;
        }
        return children.at("topology-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_children()
{
    if(children.find("ipv4-link-topologies") == children.end())
    {
        if(ipv4_link_topologies != nullptr)
        {
            children["ipv4-link-topologies"] = ipv4_link_topologies;
        }
    }

    if(children.find("ipv6-link-topologies") == children.end())
    {
        if(ipv6_link_topologies != nullptr)
        {
            children["ipv6-link-topologies"] = ipv6_link_topologies;
        }
    }

    if(children.find("spf-log") == children.end())
    {
        if(spf_log != nullptr)
        {
            children["spf-log"] = spf_log;
        }
    }

    if(children.find("te-adjacency-log") == children.end())
    {
        if(te_adjacency_log != nullptr)
        {
            children["te-adjacency-log"] = te_adjacency_log;
        }
    }

    if(children.find("te-advertisements") == children.end())
    {
        if(te_advertisements != nullptr)
        {
            children["te-advertisements"] = te_advertisements;
        }
    }

    if(children.find("te-tunnels") == children.end())
    {
        if(te_tunnels != nullptr)
        {
            children["te-tunnels"] = te_tunnels;
        }
    }

    if(children.find("topology-summary") == children.end())
    {
        if(topology_summary != nullptr)
        {
            children["topology-summary"] = topology_summary;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdvertisements()
    :
    te_adv_data_present{YType::boolean, "te-adv-data-present"},
    te_local_router_id{YType::str, "te-local-router-id"},
    te_system_id{YType::str, "te-system-id"}
    	,
    tepceadv(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>())
{
    tepceadv->parent = this;
    children["tepceadv"] = tepceadv;

    yang_name = "te-advertisements"; yang_parent_name = "topology-level";
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
	|| te_local_router_id.is_set
	|| te_system_id.is_set
	|| (tepceadv !=  nullptr && tepceadv->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_operation() const
{
    for (std::size_t index=0; index<te_adv.size(); index++)
    {
        if(te_adv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(te_adv_data_present.operation)
	|| is_set(te_local_router_id.operation)
	|| is_set(te_system_id.operation)
	|| (tepceadv !=  nullptr && tepceadv->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-advertisements";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAdvertisements' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_adv_data_present.is_set || is_set(te_adv_data_present.operation)) leaf_name_data.push_back(te_adv_data_present.get_name_leafdata());
    if (te_local_router_id.is_set || is_set(te_local_router_id.operation)) leaf_name_data.push_back(te_local_router_id.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.operation)) leaf_name_data.push_back(te_system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-adv")
    {
        for(auto const & c : te_adv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv>();
        c->parent = this;
        te_adv.push_back(std::move(c));
        children[segment_path] = te_adv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "tepceadv")
    {
        if(tepceadv != nullptr)
        {
            children["tepceadv"] = tepceadv;
        }
        else
        {
            tepceadv = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>();
            tepceadv->parent = this;
            children["tepceadv"] = tepceadv;
        }
        return children.at("tepceadv");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_children()
{
    for (auto const & c : te_adv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("tepceadv") == children.end())
    {
        if(tepceadv != nullptr)
        {
            children["tepceadv"] = tepceadv;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present = value;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id = value;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::Tepceadv()
    :
    pce_address_ipv4{YType::str, "pce-address-ipv4"},
    pce_adv_data_present{YType::boolean, "pce-adv-data-present"},
    pce_flooding_scope{YType::enumeration, "pce-flooding-scope"},
    pce_path_scope_bits{YType::uint8, "pce-path-scope-bits"},
    pce_path_scope_prefs{YType::uint16, "pce-path-scope-prefs"}
{
    yang_name = "tepceadv"; yang_parent_name = "te-advertisements";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::~Tepceadv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_data() const
{
    return pce_address_ipv4.is_set
	|| pce_adv_data_present.is_set
	|| pce_flooding_scope.is_set
	|| pce_path_scope_bits.is_set
	|| pce_path_scope_prefs.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_operation() const
{
    return is_set(operation)
	|| is_set(pce_address_ipv4.operation)
	|| is_set(pce_adv_data_present.operation)
	|| is_set(pce_flooding_scope.operation)
	|| is_set(pce_path_scope_bits.operation)
	|| is_set(pce_path_scope_prefs.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tepceadv";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tepceadv' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_address_ipv4.is_set || is_set(pce_address_ipv4.operation)) leaf_name_data.push_back(pce_address_ipv4.get_name_leafdata());
    if (pce_adv_data_present.is_set || is_set(pce_adv_data_present.operation)) leaf_name_data.push_back(pce_adv_data_present.get_name_leafdata());
    if (pce_flooding_scope.is_set || is_set(pce_flooding_scope.operation)) leaf_name_data.push_back(pce_flooding_scope.get_name_leafdata());
    if (pce_path_scope_bits.is_set || is_set(pce_path_scope_bits.operation)) leaf_name_data.push_back(pce_path_scope_bits.get_name_leafdata());
    if (pce_path_scope_prefs.is_set || is_set(pce_path_scope_prefs.operation)) leaf_name_data.push_back(pce_path_scope_prefs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4 = value;
    }
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present = value;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope = value;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits = value;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeAdv()
    :
    link_type{YType::enumeration, "link-type"},
    local_ip_address{YType::str, "local-ip-address"},
    te_affinity{YType::uint32, "te-affinity"},
    te_ext_admin_num{YType::uint32, "te-ext-admin-num"},
    te_ext_admin_sub{YType::uint32, "te-ext-admin-sub"},
    te_metric{YType::uint32, "te-metric"},
    te_neighbor_ip_address{YType::str, "te-neighbor-ip-address"},
    te_neighbor_system_id{YType::str, "te-neighbor-system-id"},
    te_physical_link_bandwidth{YType::uint32, "te-physical-link-bandwidth"},
    te_reserved_link_bandwidth{YType::uint32, "te-reserved-link-bandwidth"},
    te_sub_tlv_data_present{YType::boolean, "te-sub-tlv-data-present"},
    te_subpool_reserved_link_bandwidth{YType::uint32, "te-subpool-reserved-link-bandwidth"},
    te_subpool_transmitted_bandwidth{YType::uint32, "te-subpool-transmitted-bandwidth"},
    te_transmitted_bandwidth{YType::uint32, "te-transmitted-bandwidth"}
{
    yang_name = "te-adv"; yang_parent_name = "te-advertisements";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::~TeAdv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_data() const
{
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : te_ext_admin_sub.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : te_subpool_transmitted_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : te_transmitted_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| local_ip_address.is_set
	|| te_affinity.is_set
	|| te_ext_admin_num.is_set
	|| te_metric.is_set
	|| te_neighbor_ip_address.is_set
	|| te_neighbor_system_id.is_set
	|| te_physical_link_bandwidth.is_set
	|| te_reserved_link_bandwidth.is_set
	|| te_sub_tlv_data_present.is_set
	|| te_subpool_reserved_link_bandwidth.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_operation() const
{
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : te_ext_admin_sub.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : te_subpool_transmitted_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : te_transmitted_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_type.operation)
	|| is_set(local_ip_address.operation)
	|| is_set(te_affinity.operation)
	|| is_set(te_ext_admin_num.operation)
	|| is_set(te_ext_admin_sub.operation)
	|| is_set(te_metric.operation)
	|| is_set(te_neighbor_ip_address.operation)
	|| is_set(te_neighbor_system_id.operation)
	|| is_set(te_physical_link_bandwidth.operation)
	|| is_set(te_reserved_link_bandwidth.operation)
	|| is_set(te_sub_tlv_data_present.operation)
	|| is_set(te_subpool_reserved_link_bandwidth.operation)
	|| is_set(te_subpool_transmitted_bandwidth.operation)
	|| is_set(te_transmitted_bandwidth.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adv";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAdv' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (te_affinity.is_set || is_set(te_affinity.operation)) leaf_name_data.push_back(te_affinity.get_name_leafdata());
    if (te_ext_admin_num.is_set || is_set(te_ext_admin_num.operation)) leaf_name_data.push_back(te_ext_admin_num.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (te_neighbor_ip_address.is_set || is_set(te_neighbor_ip_address.operation)) leaf_name_data.push_back(te_neighbor_ip_address.get_name_leafdata());
    if (te_neighbor_system_id.is_set || is_set(te_neighbor_system_id.operation)) leaf_name_data.push_back(te_neighbor_system_id.get_name_leafdata());
    if (te_physical_link_bandwidth.is_set || is_set(te_physical_link_bandwidth.operation)) leaf_name_data.push_back(te_physical_link_bandwidth.get_name_leafdata());
    if (te_reserved_link_bandwidth.is_set || is_set(te_reserved_link_bandwidth.operation)) leaf_name_data.push_back(te_reserved_link_bandwidth.get_name_leafdata());
    if (te_sub_tlv_data_present.is_set || is_set(te_sub_tlv_data_present.operation)) leaf_name_data.push_back(te_sub_tlv_data_present.get_name_leafdata());
    if (te_subpool_reserved_link_bandwidth.is_set || is_set(te_subpool_reserved_link_bandwidth.operation)) leaf_name_data.push_back(te_subpool_reserved_link_bandwidth.get_name_leafdata());

    auto te_ext_admin_sub_name_datas = te_ext_admin_sub.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_ext_admin_sub_name_datas.begin(), te_ext_admin_sub_name_datas.end());
    auto te_subpool_transmitted_bandwidth_name_datas = te_subpool_transmitted_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_subpool_transmitted_bandwidth_name_datas.begin(), te_subpool_transmitted_bandwidth_name_datas.end());
    auto te_transmitted_bandwidth_name_datas = te_transmitted_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_transmitted_bandwidth_name_datas.begin(), te_transmitted_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-sub-tlv")
    {
        for(auto const & c : te_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv>();
        c->parent = this;
        te_sub_tlv.push_back(std::move(c));
        children[segment_path] = te_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_children()
{
    for (auto const & c : te_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
    if(value_path == "te-affinity")
    {
        te_affinity = value;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num = value;
    }
    if(value_path == "te-ext-admin-sub")
    {
        te_ext_admin_sub.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address = value;
    }
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id = value;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth = value;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth = value;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present = value;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth = value;
    }
    if(value_path == "te-subpool-transmitted-bandwidth")
    {
        te_subpool_transmitted_bandwidth.append(value);
    }
    if(value_path == "te-transmitted-bandwidth")
    {
        te_transmitted_bandwidth.append(value);
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::TeSubTlv()
    :
    te_sub_tlv_length{YType::uint16, "te-sub-tlv-length"},
    te_sub_tlv_type{YType::uint16, "te-sub-tlv-type"},
    te_sub_tlv_value{YType::str, "te-sub-tlv-value"}
{
    yang_name = "te-sub-tlv"; yang_parent_name = "te-adv";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::~TeSubTlv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_data() const
{
    return te_sub_tlv_length.is_set
	|| te_sub_tlv_type.is_set
	|| te_sub_tlv_value.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(te_sub_tlv_length.operation)
	|| is_set(te_sub_tlv_type.operation)
	|| is_set(te_sub_tlv_value.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-sub-tlv";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSubTlv' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_sub_tlv_length.is_set || is_set(te_sub_tlv_length.operation)) leaf_name_data.push_back(te_sub_tlv_length.get_name_leafdata());
    if (te_sub_tlv_type.is_set || is_set(te_sub_tlv_type.operation)) leaf_name_data.push_back(te_sub_tlv_type.get_name_leafdata());
    if (te_sub_tlv_value.is_set || is_set(te_sub_tlv_value.operation)) leaf_name_data.push_back(te_sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length = value;
    }
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type = value;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::TeAdjacencyLog()
{
    yang_name = "te-adjacency-log"; yang_parent_name = "topology-level";
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
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adjacency-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAdjacencyLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::LogEntry()
    :
    log_interface{YType::str, "log-interface"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    status{YType::boolean, "status"},
    te_log_neighbor_system_id{YType::str, "te-log-neighbor-system-id"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>())
{
    generic_data->parent = this;
    children["generic-data"] = generic_data;

    yang_name = "log-entry"; yang_parent_name = "te-adjacency-log";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_data() const
{
    return log_interface.is_set
	|| neighbor_ip_address.is_set
	|| status.is_set
	|| te_log_neighbor_system_id.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(log_interface.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(status.operation)
	|| is_set(te_log_neighbor_system_id.operation)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_interface.is_set || is_set(log_interface.operation)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (te_log_neighbor_system_id.is_set || is_set(te_log_neighbor_system_id.operation)) leaf_name_data.push_back(te_log_neighbor_system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_children()
{
    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-interface")
    {
        log_interface = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
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
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::SpfLog()
{
    yang_name = "spf-log"; yang_parent_name = "topology-level";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::~SpfLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::LogEntry()
    :
    class_{YType::enumeration, "class"},
    next_wait_interval{YType::uint32, "next-wait-interval"},
    updated_lsp_count{YType::uint32, "updated-lsp-count"},
    wait_enforced{YType::uint32, "wait-enforced"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>())
	,route_update_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>())
	,spt_calculation_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>())
	,triggers(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>())
{
    generic_data->parent = this;
    children["generic-data"] = generic_data;

    route_update_statistics->parent = this;
    children["route-update-statistics"] = route_update_statistics;

    spt_calculation_statistics->parent = this;
    children["spt-calculation-statistics"] = spt_calculation_statistics;

    triggers->parent = this;
    children["triggers"] = triggers;

    yang_name = "log-entry"; yang_parent_name = "spf-log";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_data() const
{
    return class_.is_set
	|| next_wait_interval.is_set
	|| updated_lsp_count.is_set
	|| wait_enforced.is_set
	|| (generic_data !=  nullptr && generic_data->has_data())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_data())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_data())
	|| (triggers !=  nullptr && triggers->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(class_.operation)
	|| is_set(next_wait_interval.operation)
	|| is_set(updated_lsp_count.operation)
	|| is_set(wait_enforced.operation)
	|| (generic_data !=  nullptr && generic_data->has_operation())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_operation())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_operation())
	|| (triggers !=  nullptr && triggers->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (next_wait_interval.is_set || is_set(next_wait_interval.operation)) leaf_name_data.push_back(next_wait_interval.get_name_leafdata());
    if (updated_lsp_count.is_set || is_set(updated_lsp_count.operation)) leaf_name_data.push_back(updated_lsp_count.get_name_leafdata());
    if (wait_enforced.is_set || is_set(wait_enforced.operation)) leaf_name_data.push_back(wait_enforced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    if(child_yang_name == "route-update-statistics")
    {
        if(route_update_statistics != nullptr)
        {
            children["route-update-statistics"] = route_update_statistics;
        }
        else
        {
            route_update_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>();
            route_update_statistics->parent = this;
            children["route-update-statistics"] = route_update_statistics;
        }
        return children.at("route-update-statistics");
    }

    if(child_yang_name == "spt-calculation-statistics")
    {
        if(spt_calculation_statistics != nullptr)
        {
            children["spt-calculation-statistics"] = spt_calculation_statistics;
        }
        else
        {
            spt_calculation_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>();
            spt_calculation_statistics->parent = this;
            children["spt-calculation-statistics"] = spt_calculation_statistics;
        }
        return children.at("spt-calculation-statistics");
    }

    if(child_yang_name == "triggers")
    {
        if(triggers != nullptr)
        {
            children["triggers"] = triggers;
        }
        else
        {
            triggers = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>();
            triggers->parent = this;
            children["triggers"] = triggers;
        }
        return children.at("triggers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_children()
{
    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    if(children.find("route-update-statistics") == children.end())
    {
        if(route_update_statistics != nullptr)
        {
            children["route-update-statistics"] = route_update_statistics;
        }
    }

    if(children.find("spt-calculation-statistics") == children.end())
    {
        if(spt_calculation_statistics != nullptr)
        {
            children["spt-calculation-statistics"] = spt_calculation_statistics;
        }
    }

    if(children.find("triggers") == children.end())
    {
        if(triggers != nullptr)
        {
            children["triggers"] = triggers;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "next-wait-interval")
    {
        next_wait_interval = value;
    }
    if(value_path == "updated-lsp-count")
    {
        updated_lsp_count = value;
    }
    if(value_path == "wait-enforced")
    {
        wait_enforced = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_operation() const
{
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Triggers()
    :
    first_trigger_lsp_id{YType::str, "first-trigger-lsp-id"},
    is_sr_uloop_calculation{YType::boolean, "is-sr-uloop-calculation"},
    is_sr_uloop_link_down{YType::boolean, "is-sr-uloop-link-down"},
    trigger{YType::enumeration, "trigger"},
    trigger_link{YType::str, "trigger-link"},
    trigger_next_hop_id{YType::str, "trigger-next-hop-id"},
    unique_trigger_count{YType::uint32, "unique-trigger-count"}
    	,
    trigger_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>())
{
    trigger_prefix->parent = this;
    children["trigger-prefix"] = trigger_prefix;

    yang_name = "triggers"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::~Triggers()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_data() const
{
    for (auto const & leaf : trigger.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return first_trigger_lsp_id.is_set
	|| is_sr_uloop_calculation.is_set
	|| is_sr_uloop_link_down.is_set
	|| trigger_link.is_set
	|| trigger_next_hop_id.is_set
	|| unique_trigger_count.is_set
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_operation() const
{
    for (auto const & leaf : trigger.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(first_trigger_lsp_id.operation)
	|| is_set(is_sr_uloop_calculation.operation)
	|| is_set(is_sr_uloop_link_down.operation)
	|| is_set(trigger.operation)
	|| is_set(trigger_link.operation)
	|| is_set(trigger_next_hop_id.operation)
	|| is_set(unique_trigger_count.operation)
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "triggers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Triggers' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_trigger_lsp_id.is_set || is_set(first_trigger_lsp_id.operation)) leaf_name_data.push_back(first_trigger_lsp_id.get_name_leafdata());
    if (is_sr_uloop_calculation.is_set || is_set(is_sr_uloop_calculation.operation)) leaf_name_data.push_back(is_sr_uloop_calculation.get_name_leafdata());
    if (is_sr_uloop_link_down.is_set || is_set(is_sr_uloop_link_down.operation)) leaf_name_data.push_back(is_sr_uloop_link_down.get_name_leafdata());
    if (trigger_link.is_set || is_set(trigger_link.operation)) leaf_name_data.push_back(trigger_link.get_name_leafdata());
    if (trigger_next_hop_id.is_set || is_set(trigger_next_hop_id.operation)) leaf_name_data.push_back(trigger_next_hop_id.get_name_leafdata());
    if (unique_trigger_count.is_set || is_set(unique_trigger_count.operation)) leaf_name_data.push_back(unique_trigger_count.get_name_leafdata());

    auto trigger_name_datas = trigger.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trigger_name_datas.begin(), trigger_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trigger-prefix")
    {
        if(trigger_prefix != nullptr)
        {
            children["trigger-prefix"] = trigger_prefix;
        }
        else
        {
            trigger_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>();
            trigger_prefix->parent = this;
            children["trigger-prefix"] = trigger_prefix;
        }
        return children.at("trigger-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_children()
{
    if(children.find("trigger-prefix") == children.end())
    {
        if(trigger_prefix != nullptr)
        {
            children["trigger-prefix"] = trigger_prefix;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-trigger-lsp-id")
    {
        first_trigger_lsp_id = value;
    }
    if(value_path == "is-sr-uloop-calculation")
    {
        is_sr_uloop_calculation = value;
    }
    if(value_path == "is-sr-uloop-link-down")
    {
        is_sr_uloop_link_down = value;
    }
    if(value_path == "trigger")
    {
        trigger.append(value);
    }
    if(value_path == "trigger-link")
    {
        trigger_link = value;
    }
    if(value_path == "trigger-next-hop-id")
    {
        trigger_next_hop_id = value;
    }
    if(value_path == "unique-trigger-count")
    {
        unique_trigger_count = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::TriggerPrefix()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "trigger-prefix"; yang_parent_name = "triggers";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::~TriggerPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-prefix";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerPrefix' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4"; yang_parent_name = "trigger-prefix";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv6"; yang_parent_name = "trigger-prefix";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::SptCalculationStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>())
	,node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>())
{
    duration->parent = this;
    children["duration"] = duration;

    node_counts->parent = this;
    children["node-counts"] = node_counts;

    yang_name = "spt-calculation-statistics"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::~SptCalculationStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_operation() const
{
    return is_set(operation)
	|| (duration !=  nullptr && duration->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-calculation-statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SptCalculationStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "duration")
    {
        if(duration != nullptr)
        {
            children["duration"] = duration;
        }
        else
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>();
            duration->parent = this;
            children["duration"] = duration;
        }
        return children.at("duration");
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts != nullptr)
        {
            children["node-counts"] = node_counts;
        }
        else
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>();
            node_counts->parent = this;
            children["node-counts"] = node_counts;
        }
        return children.at("node-counts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_children()
{
    if(children.find("duration") == children.end())
    {
        if(duration != nullptr)
        {
            children["duration"] = duration;
        }
    }

    if(children.find("node-counts") == children.end())
    {
        if(node_counts != nullptr)
        {
            children["node-counts"] = node_counts;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::Duration()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "duration"; yang_parent_name = "spt-calculation-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Duration' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::NodeCounts()
    :
    added{YType::uint32, "added"},
    deleted{YType::uint32, "deleted"},
    modified{YType::uint32, "modified"},
    reachable{YType::uint32, "reachable"},
    touched{YType::uint32, "touched"},
    unreachable{YType::uint32, "unreachable"}
{
    yang_name = "node-counts"; yang_parent_name = "spt-calculation-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_data() const
{
    return added.is_set
	|| deleted.is_set
	|| modified.is_set
	|| reachable.is_set
	|| touched.is_set
	|| unreachable.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(added.operation)
	|| is_set(deleted.operation)
	|| is_set(modified.operation)
	|| is_set(reachable.operation)
	|| is_set(touched.operation)
	|| is_set(unreachable.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (added.is_set || is_set(added.operation)) leaf_name_data.push_back(added.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.operation)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (modified.is_set || is_set(modified.operation)) leaf_name_data.push_back(modified.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.operation)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (touched.is_set || is_set(touched.operation)) leaf_name_data.push_back(touched.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.operation)) leaf_name_data.push_back(unreachable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "added")
    {
        added = value;
    }
    if(value_path == "deleted")
    {
        deleted = value;
    }
    if(value_path == "modified")
    {
        modified = value;
    }
    if(value_path == "reachable")
    {
        reachable = value;
    }
    if(value_path == "touched")
    {
        touched = value;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteUpdateStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>())
	,duration_breakdown(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>())
	,item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>())
	,node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>())
	,rib_batch_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>())
	,route_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>())
{
    duration->parent = this;
    children["duration"] = duration;

    duration_breakdown->parent = this;
    children["duration-breakdown"] = duration_breakdown;

    item_counts->parent = this;
    children["item-counts"] = item_counts;

    node_counts->parent = this;
    children["node-counts"] = node_counts;

    rib_batch_counts->parent = this;
    children["rib-batch-counts"] = rib_batch_counts;

    route_counts->parent = this;
    children["route-counts"] = route_counts;

    yang_name = "route-update-statistics"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::~RouteUpdateStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_data())
	|| (item_counts !=  nullptr && item_counts->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_data())
	|| (route_counts !=  nullptr && route_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_operation() const
{
    return is_set(operation)
	|| (duration !=  nullptr && duration->has_operation())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_operation())
	|| (item_counts !=  nullptr && item_counts->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_operation())
	|| (route_counts !=  nullptr && route_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "duration")
    {
        if(duration != nullptr)
        {
            children["duration"] = duration;
        }
        else
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>();
            duration->parent = this;
            children["duration"] = duration;
        }
        return children.at("duration");
    }

    if(child_yang_name == "duration-breakdown")
    {
        if(duration_breakdown != nullptr)
        {
            children["duration-breakdown"] = duration_breakdown;
        }
        else
        {
            duration_breakdown = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>();
            duration_breakdown->parent = this;
            children["duration-breakdown"] = duration_breakdown;
        }
        return children.at("duration-breakdown");
    }

    if(child_yang_name == "item-counts")
    {
        if(item_counts != nullptr)
        {
            children["item-counts"] = item_counts;
        }
        else
        {
            item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>();
            item_counts->parent = this;
            children["item-counts"] = item_counts;
        }
        return children.at("item-counts");
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts != nullptr)
        {
            children["node-counts"] = node_counts;
        }
        else
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>();
            node_counts->parent = this;
            children["node-counts"] = node_counts;
        }
        return children.at("node-counts");
    }

    if(child_yang_name == "rib-batch-counts")
    {
        if(rib_batch_counts != nullptr)
        {
            children["rib-batch-counts"] = rib_batch_counts;
        }
        else
        {
            rib_batch_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>();
            rib_batch_counts->parent = this;
            children["rib-batch-counts"] = rib_batch_counts;
        }
        return children.at("rib-batch-counts");
    }

    if(child_yang_name == "route-counts")
    {
        if(route_counts != nullptr)
        {
            children["route-counts"] = route_counts;
        }
        else
        {
            route_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>();
            route_counts->parent = this;
            children["route-counts"] = route_counts;
        }
        return children.at("route-counts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_children()
{
    if(children.find("duration") == children.end())
    {
        if(duration != nullptr)
        {
            children["duration"] = duration;
        }
    }

    if(children.find("duration-breakdown") == children.end())
    {
        if(duration_breakdown != nullptr)
        {
            children["duration-breakdown"] = duration_breakdown;
        }
    }

    if(children.find("item-counts") == children.end())
    {
        if(item_counts != nullptr)
        {
            children["item-counts"] = item_counts;
        }
    }

    if(children.find("node-counts") == children.end())
    {
        if(node_counts != nullptr)
        {
            children["node-counts"] = node_counts;
        }
    }

    if(children.find("rib-batch-counts") == children.end())
    {
        if(rib_batch_counts != nullptr)
        {
            children["rib-batch-counts"] = rib_batch_counts;
        }
    }

    if(children.find("route-counts") == children.end())
    {
        if(route_counts != nullptr)
        {
            children["route-counts"] = route_counts;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::Duration()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "duration"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Duration' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::DurationBreakdown()
    :
    global_rib_build(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>())
	,global_rib_send(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>())
	,local_rib_update(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>())
{
    global_rib_build->parent = this;
    children["global-rib-build"] = global_rib_build;

    global_rib_send->parent = this;
    children["global-rib-send"] = global_rib_send;

    local_rib_update->parent = this;
    children["local-rib-update"] = local_rib_update;

    yang_name = "duration-breakdown"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::~DurationBreakdown()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_data() const
{
    return (global_rib_build !=  nullptr && global_rib_build->has_data())
	|| (global_rib_send !=  nullptr && global_rib_send->has_data())
	|| (local_rib_update !=  nullptr && local_rib_update->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_operation() const
{
    return is_set(operation)
	|| (global_rib_build !=  nullptr && global_rib_build->has_operation())
	|| (global_rib_send !=  nullptr && global_rib_send->has_operation())
	|| (local_rib_update !=  nullptr && local_rib_update->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration-breakdown";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DurationBreakdown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-rib-build")
    {
        if(global_rib_build != nullptr)
        {
            children["global-rib-build"] = global_rib_build;
        }
        else
        {
            global_rib_build = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>();
            global_rib_build->parent = this;
            children["global-rib-build"] = global_rib_build;
        }
        return children.at("global-rib-build");
    }

    if(child_yang_name == "global-rib-send")
    {
        if(global_rib_send != nullptr)
        {
            children["global-rib-send"] = global_rib_send;
        }
        else
        {
            global_rib_send = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>();
            global_rib_send->parent = this;
            children["global-rib-send"] = global_rib_send;
        }
        return children.at("global-rib-send");
    }

    if(child_yang_name == "local-rib-update")
    {
        if(local_rib_update != nullptr)
        {
            children["local-rib-update"] = local_rib_update;
        }
        else
        {
            local_rib_update = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>();
            local_rib_update->parent = this;
            children["local-rib-update"] = local_rib_update;
        }
        return children.at("local-rib-update");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_children()
{
    if(children.find("global-rib-build") == children.end())
    {
        if(global_rib_build != nullptr)
        {
            children["global-rib-build"] = global_rib_build;
        }
    }

    if(children.find("global-rib-send") == children.end())
    {
        if(global_rib_send != nullptr)
        {
            children["global-rib-send"] = global_rib_send;
        }
    }

    if(children.find("local-rib-update") == children.end())
    {
        if(local_rib_update != nullptr)
        {
            children["local-rib-update"] = local_rib_update;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::LocalRibUpdate()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>())
{
    critical->parent = this;
    children["critical"] = critical;

    high->parent = this;
    children["high"] = high;

    low->parent = this;
    children["low"] = low;

    medium->parent = this;
    children["medium"] = medium;

    yang_name = "local-rib-update"; yang_parent_name = "duration-breakdown";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::~LocalRibUpdate()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_operation() const
{
    return is_set(operation)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rib-update";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRibUpdate' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "critical")
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
        else
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>();
            critical->parent = this;
            children["critical"] = critical;
        }
        return children.at("critical");
    }

    if(child_yang_name == "high")
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
        else
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>();
            high->parent = this;
            children["high"] = high;
        }
        return children.at("high");
    }

    if(child_yang_name == "low")
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
        else
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>();
            low->parent = this;
            children["low"] = low;
        }
        return children.at("low");
    }

    if(child_yang_name == "medium")
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
        else
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>();
            medium->parent = this;
            children["medium"] = medium;
        }
        return children.at("medium");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_children()
{
    if(children.find("critical") == children.end())
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
    }

    if(children.find("high") == children.end())
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
    }

    if(children.find("low") == children.end())
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
    }

    if(children.find("medium") == children.end())
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "critical"; yang_parent_name = "local-rib-update";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Critical' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "high"; yang_parent_name = "local-rib-update";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "medium"; yang_parent_name = "local-rib-update";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Medium' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "low"; yang_parent_name = "local-rib-update";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Low' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::GlobalRibBuild()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>())
{
    critical->parent = this;
    children["critical"] = critical;

    high->parent = this;
    children["high"] = high;

    low->parent = this;
    children["low"] = low;

    medium->parent = this;
    children["medium"] = medium;

    yang_name = "global-rib-build"; yang_parent_name = "duration-breakdown";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::~GlobalRibBuild()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_operation() const
{
    return is_set(operation)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-build";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalRibBuild' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "critical")
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
        else
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>();
            critical->parent = this;
            children["critical"] = critical;
        }
        return children.at("critical");
    }

    if(child_yang_name == "high")
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
        else
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>();
            high->parent = this;
            children["high"] = high;
        }
        return children.at("high");
    }

    if(child_yang_name == "low")
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
        else
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>();
            low->parent = this;
            children["low"] = low;
        }
        return children.at("low");
    }

    if(child_yang_name == "medium")
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
        else
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>();
            medium->parent = this;
            children["medium"] = medium;
        }
        return children.at("medium");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_children()
{
    if(children.find("critical") == children.end())
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
    }

    if(children.find("high") == children.end())
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
    }

    if(children.find("low") == children.end())
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
    }

    if(children.find("medium") == children.end())
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "critical"; yang_parent_name = "global-rib-build";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Critical' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "high"; yang_parent_name = "global-rib-build";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "medium"; yang_parent_name = "global-rib-build";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Medium' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "low"; yang_parent_name = "global-rib-build";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Low' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::GlobalRibSend()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>())
{
    critical->parent = this;
    children["critical"] = critical;

    high->parent = this;
    children["high"] = high;

    low->parent = this;
    children["low"] = low;

    medium->parent = this;
    children["medium"] = medium;

    yang_name = "global-rib-send"; yang_parent_name = "duration-breakdown";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::~GlobalRibSend()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_operation() const
{
    return is_set(operation)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-send";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalRibSend' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "critical")
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
        else
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>();
            critical->parent = this;
            children["critical"] = critical;
        }
        return children.at("critical");
    }

    if(child_yang_name == "high")
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
        else
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>();
            high->parent = this;
            children["high"] = high;
        }
        return children.at("high");
    }

    if(child_yang_name == "low")
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
        else
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>();
            low->parent = this;
            children["low"] = low;
        }
        return children.at("low");
    }

    if(child_yang_name == "medium")
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
        else
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>();
            medium->parent = this;
            children["medium"] = medium;
        }
        return children.at("medium");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_children()
{
    if(children.find("critical") == children.end())
    {
        if(critical != nullptr)
        {
            children["critical"] = critical;
        }
    }

    if(children.find("high") == children.end())
    {
        if(high != nullptr)
        {
            children["high"] = high;
        }
    }

    if(children.find("low") == children.end())
    {
        if(low != nullptr)
        {
            children["low"] = low;
        }
    }

    if(children.find("medium") == children.end())
    {
        if(medium != nullptr)
        {
            children["medium"] = medium;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "critical"; yang_parent_name = "global-rib-send";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Critical' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "high"; yang_parent_name = "global-rib-send";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "medium"; yang_parent_name = "global-rib-send";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Medium' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{
    yang_name = "low"; yang_parent_name = "global-rib-send";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_duration.operation)
	|| is_set(real_duration.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Low' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.operation)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.operation)) leaf_name_data.push_back(real_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::NodeCounts()
    :
    total_touched{YType::uint32, "total-touched"}
    	,
    per_priority_touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>())
{
    per_priority_touched->parent = this;
    children["per-priority-touched"] = per_priority_touched;

    yang_name = "node-counts"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_data() const
{
    return total_touched.is_set
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(total_touched.operation)
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_touched.is_set || is_set(total_touched.operation)) leaf_name_data.push_back(total_touched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-priority-touched")
    {
        if(per_priority_touched != nullptr)
        {
            children["per-priority-touched"] = per_priority_touched;
        }
        else
        {
            per_priority_touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>();
            per_priority_touched->parent = this;
            children["per-priority-touched"] = per_priority_touched;
        }
        return children.at("per-priority-touched");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_children()
{
    if(children.find("per-priority-touched") == children.end())
    {
        if(per_priority_touched != nullptr)
        {
            children["per-priority-touched"] = per_priority_touched;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-touched")
    {
        total_touched = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::PerPriorityTouched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "per-priority-touched"; yang_parent_name = "node-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::~PerPriorityTouched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-priority-touched";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPriorityTouched' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::ItemCounts()
    :
    added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>())
	,deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>())
	,modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>())
	,reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>())
	,touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>())
	,unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>())
{
    added->parent = this;
    children["added"] = added;

    deleted->parent = this;
    children["deleted"] = deleted;

    modified->parent = this;
    children["modified"] = modified;

    reachable->parent = this;
    children["reachable"] = reachable;

    touched->parent = this;
    children["touched"] = touched;

    unreachable->parent = this;
    children["unreachable"] = unreachable;

    yang_name = "item-counts"; yang_parent_name = "route-update-statistics";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::~ItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_data() const
{
    return (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (touched !=  nullptr && touched->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_operation() const
{
    return is_set(operation)
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (touched !=  nullptr && touched->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-counts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItemCounts' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "added")
    {
        if(added != nullptr)
        {
            children["added"] = added;
        }
        else
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>();
            added->parent = this;
            children["added"] = added;
        }
        return children.at("added");
    }

    if(child_yang_name == "deleted")
    {
        if(deleted != nullptr)
        {
            children["deleted"] = deleted;
        }
        else
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>();
            deleted->parent = this;
            children["deleted"] = deleted;
        }
        return children.at("deleted");
    }

    if(child_yang_name == "modified")
    {
        if(modified != nullptr)
        {
            children["modified"] = modified;
        }
        else
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>();
            modified->parent = this;
            children["modified"] = modified;
        }
        return children.at("modified");
    }

    if(child_yang_name == "reachable")
    {
        if(reachable != nullptr)
        {
            children["reachable"] = reachable;
        }
        else
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>();
            reachable->parent = this;
            children["reachable"] = reachable;
        }
        return children.at("reachable");
    }

    if(child_yang_name == "touched")
    {
        if(touched != nullptr)
        {
            children["touched"] = touched;
        }
        else
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>();
            touched->parent = this;
            children["touched"] = touched;
        }
        return children.at("touched");
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
        else
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>();
            unreachable->parent = this;
            children["unreachable"] = unreachable;
        }
        return children.at("unreachable");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_children()
{
    if(children.find("added") == children.end())
    {
        if(added != nullptr)
        {
            children["added"] = added;
        }
    }

    if(children.find("deleted") == children.end())
    {
        if(deleted != nullptr)
        {
            children["deleted"] = deleted;
        }
    }

    if(children.find("modified") == children.end())
    {
        if(modified != nullptr)
        {
            children["modified"] = modified;
        }
    }

    if(children.find("reachable") == children.end())
    {
        if(reachable != nullptr)
        {
            children["reachable"] = reachable;
        }
    }

    if(children.find("touched") == children.end())
    {
        if(touched != nullptr)
        {
            children["touched"] = touched;
        }
    }

    if(children.find("unreachable") == children.end())
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "unreachable"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unreachable' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{
    yang_name = "reachable"; yang_parent_name = "item-counts";
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(high.operation)
	|| is_set(low.operation)
	|| is_set(medium.operation);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reachable' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
}

const Enum::YLeaf IsisIfClnsMtuInvalidReasonEnum::isis_intf_clns_mtu_invalid_too_sm_all {0, "isis-intf-clns-mtu-invalid-too-sm-all"};
const Enum::YLeaf IsisIfClnsMtuInvalidReasonEnum::isis_intf_clns_mtu_invalid_internal_error {1, "isis-intf-clns-mtu-invalid-internal-error"};

const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_cfg_passive {0, "isis-intf-af-fwd-addr-unknown-cfg-passive"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_proto_doesnt_exist {1, "isis-intf-af-fwd-addr-unknown-proto-doesnt-exist"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_next_hop_reg_error {2, "isis-intf-af-fwd-addr-unknown-next-hop-reg-error"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_no_link_local_add {3, "isis-intf-af-fwd-addr-unknown-no-link-local-add"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_af_not_up {4, "isis-intf-af-fwd-addr-unknown-af-not-up"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_vrf_enabled {5, "isis-intf-af-fwd-addr-unknown-vrf-enabled"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReasonEnum::isis_intf_af_fwd_addr_unknown_internal_error {6, "isis-intf-af-fwd-addr-unknown-internal-error"};

const Enum::YLeaf IsisSubAfIdEnum::unicast {0, "unicast"};
const Enum::YLeaf IsisSubAfIdEnum::multicast {1, "multicast"};

const Enum::YLeaf IsisErrLogLevelEnum::isis_err_log_level_info {0, "isis-err-log-level-info"};
const Enum::YLeaf IsisErrLogLevelEnum::isis_err_log_level_warn {1, "isis-err-log-level-warn"};
const Enum::YLeaf IsisErrLogLevelEnum::isis_err_log_level_critical {2, "isis-err-log-level-critical"};

const Enum::YLeaf IsisUloopEventEnum::isis_u_loop_event_none {0, "isis-u-loop-event-none"};
const Enum::YLeaf IsisUloopEventEnum::isis_u_loop_event_link_down {1, "isis-u-loop-event-link-down"};
const Enum::YLeaf IsisUloopEventEnum::isis_u_loop_event_link_up {2, "isis-u-loop-event-link-up"};
const Enum::YLeaf IsisUloopEventEnum::isis_u_loop_event_ol_bit_set {3, "isis-u-loop-event-ol-bit-set"};
const Enum::YLeaf IsisUloopEventEnum::isis_u_loop_event_ol_bit_unset {4, "isis-u-loop-event-ol-bit-unset"};

const Enum::YLeaf SrmsMiAfEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_no_net_cfg {0, "isis-intf-disabled-no-net-cfg"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_area_missing {1, "isis-intf-disabled-area-missing"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_no_area_running {2, "isis-intf-disabled-no-area-running"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_no_topos_cfg {3, "isis-intf-disabled-no-topos-cfg"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_no_imd_conn {4, "isis-intf-disabled-no-imd-conn"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_imd_reg_error {5, "isis-intf-disabled-imd-reg-error"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_level_mismatch {6, "isis-intf-disabled-level-mismatch"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_base_caps_error {7, "isis-intf-disabled-base-caps-error"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_intf_doesnt_exist {8, "isis-intf-disabled-intf-doesnt-exist"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_intf_shutdown {9, "isis-intf-disabled-intf-shutdown"};
const Enum::YLeaf IsisIfDisabledReasonEnum::isis_intf_disabled_internal_error {10, "isis-intf-disabled-internal-error"};

const Enum::YLeaf IsisShTeLinkEnum::isis_sh_te_link_p2p {0, "isis-sh-te-link-p2p"};
const Enum::YLeaf IsisShTeLinkEnum::isis_sh_te_link_broadcast {1, "isis-sh-te-link-broadcast"};

const Enum::YLeaf SrmsMiSrcEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEBEnum::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEBEnum::remote {2, "remote"};

const Enum::YLeaf IsisLspDbOpEnum::isis_lsp_db_clear {0, "isis-lsp-db-clear"};
const Enum::YLeaf IsisLspDbOpEnum::isis_lsp_db_insert_new_lsp {1, "isis-lsp-db-insert-new-lsp"};
const Enum::YLeaf IsisLspDbOpEnum::isis_lsp_db_replace_lsp_with_lsp {2, "isis-lsp-db-replace-lsp-with-lsp"};
const Enum::YLeaf IsisLspDbOpEnum::isis_lsp_db_purge_lsp {3, "isis-lsp-db-purge-lsp"};
const Enum::YLeaf IsisLspDbOpEnum::isis_lsp_db_delete_lsp {4, "isis-lsp-db-delete-lsp"};

const Enum::YLeaf IsisIfAfPrefixUnknownReasonEnum::isis_intf_af_prefix_unknown_adv_suppressed {0, "isis-intf-af-prefix-unknown-adv-suppressed"};
const Enum::YLeaf IsisIfAfPrefixUnknownReasonEnum::isis_intf_af_prefix_unknown_global_addr_reg_error {1, "isis-intf-af-prefix-unknown-global-addr-reg-error"};
const Enum::YLeaf IsisIfAfPrefixUnknownReasonEnum::isis_intf_af_prefix_unknown_internal_error {2, "isis-intf-af-prefix-unknown-internal-error"};

const Enum::YLeaf IsisMetricStyleEnum::isis_metric_style_narrow {0, "isis-metric-style-narrow"};
const Enum::YLeaf IsisMetricStyleEnum::isis_metric_style_wide {1, "isis-metric-style-wide"};
const Enum::YLeaf IsisMetricStyleEnum::isis_metric_style_transition {2, "isis-metric-style-transition"};

const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_imd_conn_fail {0, "isis-intf-af-proto-down-imd-conn-fail"};
const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_imd_node_doesnt_exist {1, "isis-intf-af-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_imd_exist_reg_error {2, "isis-intf-af-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_imd_state_reg_error {3, "isis-intf-af-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_af_not_up {4, "isis-intf-af-proto-down-af-not-up"};
const Enum::YLeaf IsisIfAfProtoDownReasonEnum::isis_intf_af_proto_down_internal_error {5, "isis-intf-af-proto-down-internal-error"};

const Enum::YLeaf IsisStartupStatusEnum::isis_startup_ssm_active {0, "isis-startup-ssm-active"};
const Enum::YLeaf IsisStartupStatusEnum::isis_startup_ssm_complete {1, "isis-startup-ssm-complete"};
const Enum::YLeaf IsisStartupStatusEnum::isis_startup_ssm_aborted {2, "isis-startup-ssm-aborted"};
const Enum::YLeaf IsisStartupStatusEnum::isis_startup_ssm_not_run {3, "isis-startup-ssm-not-run"};

const Enum::YLeaf IsisUpEnum::isis_down {0, "isis-down"};
const Enum::YLeaf IsisUpEnum::isis_up {1, "isis-up"};

const Enum::YLeaf IsisMetricModeEnum::isis_metric_mode_fixed {0, "isis-metric-mode-fixed"};
const Enum::YLeaf IsisMetricModeEnum::isis_metric_mode_relative {1, "isis-metric-mode-relative"};
const Enum::YLeaf IsisMetricModeEnum::isis_metric_mode_absolute {2, "isis-metric-mode-absolute"};

const Enum::YLeaf IsisMediaClassEnum::isis_media_class_lan {0, "isis-media-class-lan"};
const Enum::YLeaf IsisMediaClassEnum::isis_media_class_p2p {1, "isis-media-class-p2p"};
const Enum::YLeaf IsisMediaClassEnum::isis_media_class_loop_back {2, "isis-media-class-loop-back"};

const Enum::YLeaf IsisNsfFlavorEnum::isis_nsf_flav_or_none {0, "isis-nsf-flav-or-none"};
const Enum::YLeaf IsisNsfFlavorEnum::isis_nsf_flav_or_cisco {1, "isis-nsf-flav-or-cisco"};
const Enum::YLeaf IsisNsfFlavorEnum::isis_nsf_flav_or_ietf {2, "isis-nsf-flav-or-ietf"};
const Enum::YLeaf IsisNsfFlavorEnum::isis_nsf_flav_or_nsr {3, "isis-nsf-flav-or-nsr"};

const Enum::YLeaf IsisAdjTopoChangeEnum::isis_adj_topo_up_change {0, "isis-adj-topo-up-change"};
const Enum::YLeaf IsisAdjTopoChangeEnum::isis_adj_topo_next_hop_change {1, "isis-adj-topo-next-hop-change"};
const Enum::YLeaf IsisAdjTopoChangeEnum::isis_adj_topo_down_change {2, "isis-adj-topo-down-change"};

const Enum::YLeaf IsisIfMcastInvalidReasonEnum::isis_intf_mcast_invalid_join_error {0, "isis-intf-mcast-invalid-join-error"};
const Enum::YLeaf IsisIfMcastInvalidReasonEnum::isis_intf_mcast_invalid_internal_error {1, "isis-intf-mcast-invalid-internal-error"};
const Enum::YLeaf IsisIfMcastInvalidReasonEnum::isis_intf_mcast_invalid_not_yet_needed {2, "isis-intf-mcast-invalid-not-yet-needed"};

const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReasonEnum::isis_intf_topo_adv_prefix_disabled_intf_suppressed {0, "isis-intf-topo-adv-prefix-disabled-intf-suppressed"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReasonEnum::isis_intf_topo_adv_prefix_disabled_af_not_up {1, "isis-intf-topo-adv-prefix-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReasonEnum::isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown {2, "isis-intf-topo-adv-prefix-disabled-af-prefixes-unknown"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReasonEnum::isis_intf_topo_adv_prefix_disabled_internal_error {3, "isis-intf-topo-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisShTePceFloodingScopeEnum::none {0, "none"};
const Enum::YLeaf IsisShTePceFloodingScopeEnum::area {1, "area"};
const Enum::YLeaf IsisShTePceFloodingScopeEnum::domain {2, "domain"};

const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_config {0, "isis-lsp-trig-config"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_newadj {1, "isis-lsp-trig-newadj"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_deladj {2, "isis-lsp-trig-deladj"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_dr_change {3, "isis-lsp-trig-dr-change"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_area_set {4, "isis-lsp-trig-area-set"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_attach {5, "isis-lsp-trig-attach"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_hippity {6, "isis-lsp-trig-hippity"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_regen {7, "isis-lsp-trig-regen"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_if_up {8, "isis-lsp-trig-ip-if-up"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_if_down {9, "isis-lsp-trig-ip-if-down"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_inter_area {10, "isis-lsp-trig-ip-inter-area"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_external {11, "isis-lsp-trig-ip-external"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_external_full {12, "isis-lsp-trig-ip-external-full"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_def_orig {13, "isis-lsp-trig-ip-def-orig"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_ip_addr_chg {14, "isis-lsp-trig-ip-addr-chg"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_te_info {15, "isis-lsp-trig-te-info"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_te_pce_info {16, "isis-lsp-trig-te-pce-info"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_te_fa_info {17, "isis-lsp-trig-te-fa-info"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_nsr_fo {18, "isis-lsp-trig-nsr-fo"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_pn_cancel {19, "isis-lsp-trig-pn-cancel"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_lkgp {20, "isis-lsp-trig-lkgp"};
const Enum::YLeaf IsisLspTriggerEnum::isis_lsp_trig_pp {21, "isis-lsp-trig-pp"};

const Enum::YLeaf IsisEnabledEnum::isis_disabled {0, "isis-disabled"};
const Enum::YLeaf IsisEnabledEnum::isis_enabled {1, "isis-enabled"};

const Enum::YLeaf IsisIfAdvPrefixDisabledReasonEnum::isis_intf_adv_prefix_disabled_if_cfg_suppressed {0, "isis-intf-adv-prefix-disabled-if-cfg-suppressed"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReasonEnum::isis_intf_adv_prefix_disabled_no_topo_participate {1, "isis-intf-adv-prefix-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReasonEnum::isis_intf_adv_prefix_disabled_internal_error {2, "isis-intf-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisAdjStateEnum::isis_adj_up_state {0, "isis-adj-up-state"};
const Enum::YLeaf IsisAdjStateEnum::isis_adj_init_state {1, "isis-adj-init-state"};
const Enum::YLeaf IsisAdjStateEnum::isis_adj_failed_state {2, "isis-adj-failed-state"};

const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_add_to_intf_stack_fail {0, "isis-intf-clns-proto-down-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_no_imd_conn {1, "isis-intf-clns-proto-down-no-imd-conn"};
const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_imd_node_doesnt_exist {2, "isis-intf-clns-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_imd_exist_reg_error {3, "isis-intf-clns-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_imd_state_reg_error {4, "isis-intf-clns-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReasonEnum::isis_intf_clns_proto_down_clns_not_up {5, "isis-intf-clns-proto-down-clns-not-up"};

const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_config {0, "isis-spf-trig-config"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_nsr_fo {1, "isis-spf-trig-nsr-fo"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_periodic {2, "isis-spf-trig-periodic"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_clear {3, "isis-spf-trig-clear"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_newadj {4, "isis-spf-trig-newadj"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_deladj {5, "isis-spf-trig-deladj"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_next_hop {6, "isis-spf-trig-next-hop"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_metric {7, "isis-spf-trig-metric"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_dis {8, "isis-spf-trig-dis"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_frr_per_link {9, "isis-spf-trig-frr-per-link"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_frr_per_prefix {10, "isis-spf-trig-frr-per-prefix"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_ucmp {11, "isis-spf-trig-ucmp"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_new_tunnel {12, "isis-spf-trig-new-tunnel"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_del_tunnel {13, "isis-spf-trig-del-tunnel"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_chg_tunnel {14, "isis-spf-trig-chg-tunnel"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_new_node {15, "isis-spf-trig-new-node"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_del_node {16, "isis-spf-trig-del-node"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_newlsp {17, "isis-spf-trig-newlsp"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_lsp_expiry {18, "isis-spf-trig-lsp-expiry"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_attach_set {19, "isis-spf-trig-attach-set"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_attach_clr {20, "isis-spf-trig-attach-clr"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_overload_set {21, "isis-spf-trig-overload-set"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_overload_clr {22, "isis-spf-trig-overload-clr"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_link_good {23, "isis-spf-trig-link-good"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_link_bad {24, "isis-spf-trig-link-bad"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_prefix_good {25, "isis-spf-trig-prefix-good"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_prefix_bad {26, "isis-spf-trig-prefix-bad"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_prefix {27, "isis-spf-trig-prefix"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_area_addr {28, "isis-spf-trig-area-addr"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_ip_addr {29, "isis-spf-trig-ip-addr"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_rtrid {30, "isis-spf-trig-rtrid"};
const Enum::YLeaf IsisSpfTriggerEnum::isis_spf_trig_prefix_policy {31, "isis-spf-trig-prefix-policy"};

const Enum::YLeaf SrmsMiFlagEBEnum::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEBEnum::true_ {1, "true"};

const Enum::YLeaf IsisReachableEnum::isis_unreachable {0, "isis-unreachable"};
const Enum::YLeaf IsisReachableEnum::isis_reachable {1, "isis-reachable"};

const Enum::YLeaf IsisLevelsEnum::isis_levels_none {0, "isis-levels-none"};
const Enum::YLeaf IsisLevelsEnum::isis_levels_1 {1, "isis-levels-1"};
const Enum::YLeaf IsisLevelsEnum::isis_levels_2 {2, "isis-levels-2"};
const Enum::YLeaf IsisLevelsEnum::isis_levels_12 {3, "isis-levels-12"};
const Enum::YLeaf IsisLevelsEnum::isis_levels_total {4, "isis-levels-total"};

const Enum::YLeaf IsisPrefixPriorityEnum::isis_prefix_priority_critical {0, "isis-prefix-priority-critical"};
const Enum::YLeaf IsisPrefixPriorityEnum::isis_prefix_priority_high {1, "isis-prefix-priority-high"};
const Enum::YLeaf IsisPrefixPriorityEnum::isis_prefix_priority_med {2, "isis-prefix-priority-med"};
const Enum::YLeaf IsisPrefixPriorityEnum::isis_prefix_priority_low {3, "isis-prefix-priority-low"};

const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_up_nsf_restart {0, "isis-adj-up-nsf-restart"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_up_new_adj {1, "isis-adj-up-new-adj"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_up_restarted {2, "isis-adj-up-restarted"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_up_nsf_restored {3, "isis-adj-up-nsf-restored"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_up_chkpt_restored {4, "isis-adj-up-chkpt-restored"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_init_reason {5, "isis-adj-init-reason"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_init_neighbor_forgot {6, "isis-adj-init-neighbor-forgot"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_hold_time {7, "isis-adj-down-hold-time"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_if_down {8, "isis-adj-down-if-down"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_cfg_mismatch {9, "isis-adj-down-cfg-mismatch"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_circ_id {10, "isis-adj-down-circ-id"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_nsf_ack_fail {11, "isis-adj-down-nsf-ack-fail"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_db_clear {12, "isis-adj-down-db-clear"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_no_common_topology {13, "isis-adj-down-no-common-topology"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_restart_tlv_missing {14, "isis-adj-down-restart-tlv-missing"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_bfd_down {15, "isis-adj-down-bfd-down"};
const Enum::YLeaf IsisAdjStateReasonEnum::isis_adj_down_3way_down {16, "isis-adj-down-3way-down"};

const Enum::YLeaf IsisIfClnsSnpaUnknownReasonEnum::isis_intf_clns_snpa_unknown_access_error {0, "isis-intf-clns-snpa-unknown-access-error"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReasonEnum::isis_intf_clns_snpa_unknown_not_lan {1, "isis-intf-clns-snpa-unknown-not-lan"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReasonEnum::isis_intf_clns_snpa_unknown_internal_error {2, "isis-intf-clns-snpa-unknown-internal-error"};

const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ok {0, "isis-adj-topo-status-ok"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_intf_not_configured {1, "isis-adj-topo-status-intf-not-configured"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_intf_not_running {2, "isis-adj-topo-status-intf-not-running"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_init_state {3, "isis-adj-topo-status-init-state"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_neighbor_doesnt_participate {4, "isis-adj-topo-status-neighbor-doesnt-participate"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv4_address_tlv_missing {5, "isis-adj-topo-status-ipv4-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv4_address_tlv_empty {6, "isis-adj-topo-status-ipv4-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv6_address_tlv_missing {7, "isis-adj-topo-status-ipv6-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv6_address_tlv_empty {8, "isis-adj-topo-status-ipv6-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv4_address_matches_ours {9, "isis-adj-topo-status-ipv4-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv6_address_matches_ours {10, "isis-adj-topo-status-ipv6-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv4_address_subnet_mismatch {11, "isis-adj-topo-status-ipv4-address-subnet-mismatch"};
const Enum::YLeaf IsisAdjTopoStatusEnum::isis_adj_topo_status_ipv6_address_not_link_local {12, "isis-adj-topo-status-ipv6-address-not-link-local"};

const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_intf_passive {0, "isis-intf-topo-adj-form-disabled-intf-passive"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_af_not_up {1, "isis-intf-topo-adj-form-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown {2, "isis-intf-topo-adj-form-disabled-af-fwd-addr-unknown"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_topo_not_cfg {3, "isis-intf-topo-adj-form-disabled-topo-not-cfg"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_topo_can_not_participate {4, "isis-intf-topo-adj-form-disabled-topo-can-not-participate"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_idle {5, "isis-intf-topo-adj-form-disabled-idle"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_internal_error {6, "isis-intf-topo-adj-form-disabled-internal-error"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_mtu {7, "isis-intf-topo-adj-form-disabled-mtu"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_snpa {8, "isis-intf-topo-adj-form-disabled-snpa"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReasonEnum::isis_intf_topo_adj_form_disabled_mcast {9, "isis-intf-topo-adj-form-disabled-mcast"};

const Enum::YLeaf IsisAdjBfdStateEnum::isis_adj_bfd_no_state {0, "isis-adj-bfd-no-state"};
const Enum::YLeaf IsisAdjBfdStateEnum::isis_adj_bfd_down_state {1, "isis-adj-bfd-down-state"};
const Enum::YLeaf IsisAdjBfdStateEnum::isis_adj_bfd_init_state {2, "isis-adj-bfd-init-state"};
const Enum::YLeaf IsisAdjBfdStateEnum::isis_adj_bfd_up_state {3, "isis-adj-bfd-up-state"};

const Enum::YLeaf IsisAfIdEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf IsisAfIdEnum::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisRedistProtoEnum::isis_redist_connected {0, "isis-redist-connected"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_static {1, "isis-redist-static"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_ospf {2, "isis-redist-ospf"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_bgp {3, "isis-redist-bgp"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_isis {4, "isis-redist-isis"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_ospfv3 {5, "isis-redist-ospfv3"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_rip {6, "isis-redist-rip"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_eigrp {7, "isis-redist-eigrp"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_subscriber {8, "isis-redist-subscriber"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_application {9, "isis-redist-application"};
const Enum::YLeaf IsisRedistProtoEnum::isis_redist_mobile {10, "isis-redist-mobile"};

const Enum::YLeaf IsisIfTopoDisabledReasonEnum::isis_intf_topo_disabled_not_cfg {0, "isis-intf-topo-disabled-not-cfg"};
const Enum::YLeaf IsisIfTopoDisabledReasonEnum::isis_intf_topo_disabled_internal_error {1, "isis-intf-topo-disabled-internal-error"};

const Enum::YLeaf IsisShRouteAdvOriginEnum::isis_sh_route_adv_origin_interface {0, "isis-sh-route-adv-origin-interface"};
const Enum::YLeaf IsisShRouteAdvOriginEnum::isis_sh_route_adv_origin_redistributed {1, "isis-sh-route-adv-origin-redistributed"};
const Enum::YLeaf IsisShRouteAdvOriginEnum::isis_sh_route_adv_origin_native {2, "isis-sh-route-adv-origin-native"};
const Enum::YLeaf IsisShRouteAdvOriginEnum::isis_sh_route_adv_origin_summary {3, "isis-sh-route-adv-origin-summary"};
const Enum::YLeaf IsisShRouteAdvOriginEnum::isis_sh_route_adv_origin_default {4, "isis-sh-route-adv-origin-default"};

const Enum::YLeaf IsisKnownEnum::isis_unknown {0, "isis-unknown"};
const Enum::YLeaf IsisKnownEnum::isis_known {1, "isis-known"};

const Enum::YLeaf IsisLevelEnum::isis_level0 {0, "isis-level0"};
const Enum::YLeaf IsisLevelEnum::isis_level1 {1, "isis-level1"};
const Enum::YLeaf IsisLevelEnum::isis_level2 {2, "isis-level2"};

const Enum::YLeaf IsisIfAdjFormDisabledReasonEnum::isis_intf_adj_form_disabled_cfg_passive {0, "isis-intf-adj-form-disabled-cfg-passive"};
const Enum::YLeaf IsisIfAdjFormDisabledReasonEnum::isis_intf_adj_form_disabled_no_topo_participate {1, "isis-intf-adj-form-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdjFormDisabledReasonEnum::isis_intf_adj_form_disabled_add_to_intf_stack_fail {2, "isis-intf-adj-form-disabled-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfAdjFormDisabledReasonEnum::isis_intf_adj_form_disabled_clns_io {3, "isis-intf-adj-form-disabled-clns-io"};
const Enum::YLeaf IsisIfAdjFormDisabledReasonEnum::isis_intf_adj_form_disabled_internal_error {4, "isis-intf-adj-form-disabled-internal-error"};

const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_l1_summary_null {0, "isis-prefix-origin-l1-summary-null"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_l1 {1, "isis-prefix-origin-l1"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_l2_summary_null {2, "isis-prefix-origin-l2-summary-null"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_l2 {3, "isis-prefix-origin-l2"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_inter_area_summary_null {4, "isis-prefix-origin-inter-area-summary-null"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_inter_area {5, "isis-prefix-origin-inter-area"};
const Enum::YLeaf IsisPrefixOriginEnum::isis_prefix_origin_default_nearest_attached {6, "isis-prefix-origin-default-nearest-attached"};

const Enum::YLeaf IsisIfAfDisabledReasonEnum::isis_intf_af_disabled_no_topo_enabled {0, "isis-intf-af-disabled-no-topo-enabled"};
const Enum::YLeaf IsisIfAfDisabledReasonEnum::isis_intf_af_disabled_internal_error {1, "isis-intf-af-disabled-internal-error"};

const Enum::YLeaf IsisTilfaComputationEnum::isis_tilfa_comp_none {0, "isis-tilfa-comp-none"};
const Enum::YLeaf IsisTilfaComputationEnum::isis_tilfa_comp_link {1, "isis-tilfa-comp-link"};
const Enum::YLeaf IsisTilfaComputationEnum::isis_tilfa_comp_node {2, "isis-tilfa-comp-node"};
const Enum::YLeaf IsisTilfaComputationEnum::isis_tilfa_comp_srlg {3, "isis-tilfa-comp-srlg"};
const Enum::YLeaf IsisTilfaComputationEnum::isis_tilfa_comp_node_srlg {4, "isis-tilfa-comp-node-srlg"};

const Enum::YLeaf IsisSpfClassEnum::isis_spf_frr_sr_u_loop {0, "isis-spf-frr-sr-u-loop"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_frr_per_link {1, "isis-spf-frr-per-link"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_partial {2, "isis-spf-partial"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_frr_per_prefix {3, "isis-spf-frr-per-prefix"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_ucmp_calc {4, "isis-spf-ucmp-calc"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_next_hop {5, "isis-spf-next-hop"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_incremental {6, "isis-spf-incremental"};
const Enum::YLeaf IsisSpfClassEnum::isis_spf_full {7, "isis-spf-full"};

const Enum::YLeaf IsisValidEnum::isis_invalid {0, "isis-invalid"};
const Enum::YLeaf IsisValidEnum::isis_valid {1, "isis-valid"};

const Enum::YLeaf IsisUloopAvoidanceEnum::isis_u_loop_avoidance_type_none {0, "isis-u-loop-avoidance-type-none"};
const Enum::YLeaf IsisUloopAvoidanceEnum::isis_u_loop_avoidance_type_all {1, "isis-u-loop-avoidance-type-all"};
const Enum::YLeaf IsisUloopAvoidanceEnum::isis_u_loop_avoidance_type_protected {2, "isis-u-loop-avoidance-type-protected"};
const Enum::YLeaf IsisUloopAvoidanceEnum::isis_u_loop_avoidance_type_sr {3, "isis-u-loop-avoidance-type-sr"};


}
}

