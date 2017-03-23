
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

Ospf::Ospf()
    :
    global(std::make_shared<Ospf::Global>())
	,processes(std::make_shared<Ospf::Processes>())
{
    global->parent = this;
    children["global"] = global;

    processes->parent = this;
    children["processes"] = processes;

    yang_name = "ospf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-cfg";
}

Ospf::~Ospf()
{
}

bool Ospf::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (processes !=  nullptr && processes->has_data());
}

bool Ospf::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf";

    return path_buffer.str();

}

EntityPath Ospf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Ospf::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "processes")
    {
        if(processes != nullptr)
        {
            children["processes"] = processes;
        }
        else
        {
            processes = std::make_shared<Ospf::Processes>();
            processes->parent = this;
            children["processes"] = processes;
        }
        return children.at("processes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("processes") == children.end())
    {
        if(processes != nullptr)
        {
            children["processes"] = processes;
        }
    }

    return children;
}

void Ospf::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ospf::clone_ptr() const
{
    return std::make_shared<Ospf>();
}

std::string Ospf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ospf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ospf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ospf::Processes::Processes()
{
    yang_name = "processes"; yang_parent_name = "ospf";
}

Ospf::Processes::~Processes()
{
}

bool Ospf::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::get_children()
{
    for (auto const & c : process)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"},
    nsr{YType::enumeration, "nsr"},
    protocol_shutdown{YType::enumeration, "protocol-shutdown"},
    running{YType::empty, "running"},
    start{YType::empty, "start"}
    	,
    default_vrf(std::make_shared<Ospf::Processes::Process::DefaultVrf>())
	,distribute(nullptr) // presence node
	,graceful_shutdown_timers(std::make_shared<Ospf::Processes::Process::GracefulShutdownTimers>())
	,snmp(std::make_shared<Ospf::Processes::Process::Snmp>())
	,vrfs(std::make_shared<Ospf::Processes::Process::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    graceful_shutdown_timers->parent = this;
    children["graceful-shutdown-timers"] = graceful_shutdown_timers;

    snmp->parent = this;
    children["snmp"] = snmp;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "process"; yang_parent_name = "processes";
}

Ospf::Processes::Process::~Process()
{
}

bool Ospf::Processes::Process::has_data() const
{
    return process_name.is_set
	|| nsr.is_set
	|| protocol_shutdown.is_set
	|| running.is_set
	|| start.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (distribute !=  nullptr && distribute->has_data())
	|| (graceful_shutdown_timers !=  nullptr && graceful_shutdown_timers->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ospf::Processes::Process::has_operation() const
{
    return is_set(operation)
	|| is_set(process_name.operation)
	|| is_set(nsr.operation)
	|| is_set(protocol_shutdown.operation)
	|| is_set(running.operation)
	|| is_set(start.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (distribute !=  nullptr && distribute->has_operation())
	|| (graceful_shutdown_timers !=  nullptr && graceful_shutdown_timers->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ospf::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-name='" <<process_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf/processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (protocol_shutdown.is_set || is_set(protocol_shutdown.operation)) leaf_name_data.push_back(protocol_shutdown.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<Ospf::Processes::Process::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "distribute")
    {
        if(distribute != nullptr)
        {
            children["distribute"] = distribute;
        }
        else
        {
            distribute = std::make_shared<Ospf::Processes::Process::Distribute>();
            distribute->parent = this;
            children["distribute"] = distribute;
        }
        return children.at("distribute");
    }

    if(child_yang_name == "graceful-shutdown-timers")
    {
        if(graceful_shutdown_timers != nullptr)
        {
            children["graceful-shutdown-timers"] = graceful_shutdown_timers;
        }
        else
        {
            graceful_shutdown_timers = std::make_shared<Ospf::Processes::Process::GracefulShutdownTimers>();
            graceful_shutdown_timers->parent = this;
            children["graceful-shutdown-timers"] = graceful_shutdown_timers;
        }
        return children.at("graceful-shutdown-timers");
    }

    if(child_yang_name == "snmp")
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
        else
        {
            snmp = std::make_shared<Ospf::Processes::Process::Snmp>();
            snmp->parent = this;
            children["snmp"] = snmp;
        }
        return children.at("snmp");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ospf::Processes::Process::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("distribute") == children.end())
    {
        if(distribute != nullptr)
        {
            children["distribute"] = distribute;
        }
    }

    if(children.find("graceful-shutdown-timers") == children.end())
    {
        if(graceful_shutdown_timers != nullptr)
        {
            children["graceful-shutdown-timers"] = graceful_shutdown_timers;
        }
    }

    if(children.find("snmp") == children.end())
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ospf::Processes::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "protocol-shutdown")
    {
        protocol_shutdown = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Ospf::Processes::Process::Snmp::Snmp()
    :
    trap_rate_limit(nullptr) // presence node
{
    yang_name = "snmp"; yang_parent_name = "process";
}

Ospf::Processes::Process::Snmp::~Snmp()
{
}

bool Ospf::Processes::Process::Snmp::has_data() const
{
    return (trap_rate_limit !=  nullptr && trap_rate_limit->has_data());
}

bool Ospf::Processes::Process::Snmp::has_operation() const
{
    return is_set(operation)
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_operation());
}

std::string Ospf::Processes::Process::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trap-rate-limit")
    {
        if(trap_rate_limit != nullptr)
        {
            children["trap-rate-limit"] = trap_rate_limit;
        }
        else
        {
            trap_rate_limit = std::make_shared<Ospf::Processes::Process::Snmp::TrapRateLimit>();
            trap_rate_limit->parent = this;
            children["trap-rate-limit"] = trap_rate_limit;
        }
        return children.at("trap-rate-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Snmp::get_children()
{
    if(children.find("trap-rate-limit") == children.end())
    {
        if(trap_rate_limit != nullptr)
        {
            children["trap-rate-limit"] = trap_rate_limit;
        }
    }

    return children;
}

void Ospf::Processes::Process::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Snmp::TrapRateLimit::TrapRateLimit()
    :
    max_window_traps{YType::uint32, "max-window-traps"},
    window_size{YType::uint32, "window-size"}
{
    yang_name = "trap-rate-limit"; yang_parent_name = "snmp";
}

Ospf::Processes::Process::Snmp::TrapRateLimit::~TrapRateLimit()
{
}

bool Ospf::Processes::Process::Snmp::TrapRateLimit::has_data() const
{
    return max_window_traps.is_set
	|| window_size.is_set;
}

bool Ospf::Processes::Process::Snmp::TrapRateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_window_traps.operation)
	|| is_set(window_size.operation);
}

std::string Ospf::Processes::Process::Snmp::TrapRateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-rate-limit";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Snmp::TrapRateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapRateLimit' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_window_traps.is_set || is_set(max_window_traps.operation)) leaf_name_data.push_back(max_window_traps.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Snmp::TrapRateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Snmp::TrapRateLimit::get_children()
{
    return children;
}

void Ospf::Processes::Process::Snmp::TrapRateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Ospf::Processes::Process::Distribute::Distribute()
    :
    instance_id{YType::uint32, "instance-id"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "distribute"; yang_parent_name = "process";
}

Ospf::Processes::Process::Distribute::~Distribute()
{
}

bool Ospf::Processes::Process::Distribute::has_data() const
{
    return instance_id.is_set
	|| throttle.is_set;
}

bool Ospf::Processes::Process::Distribute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_id.operation)
	|| is_set(throttle.operation);
}

std::string Ospf::Processes::Process::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Distribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distribute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Distribute::get_children()
{
    return children;
}

void Ospf::Processes::Process::Distribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "process";
}

Ospf::Processes::Process::Vrfs::~Vrfs()
{
}

bool Ospf::Processes::Process::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    adjacency_changes{YType::enumeration, "adjacency-changes"},
    default_metric{YType::uint32, "default-metric"},
    disable_dn_bit_check{YType::empty, "disable-dn-bit-check"},
    domain_tag{YType::uint32, "domain-tag"},
    ignore_mospf{YType::empty, "ignore-mospf"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_paths{YType::uint32, "maximum-paths"},
    no_opaque{YType::empty, "no-opaque"},
    router_id{YType::str, "router-id"},
    snmp_context{YType::str, "snmp-context"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    spf_prefix_priority{YType::str, "spf-prefix-priority"},
    type7{YType::empty, "type7"},
    vrf_lite{YType::empty, "vrf-lite"},
    vrf_start{YType::empty, "vrf-start"}
    	,
    adjacency_stagger(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger>())
	,af(nullptr) // presence node
	,area_addresses(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses>())
	,auto_cost(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AutoCost>())
	,default_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation>())
	,distance(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance>())
	,domain_id(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>())
	,max_lsa(nullptr) // presence node
	,max_metric(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric>())
	,maximum_redistribute_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix>())
	,microloop(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop>())
	,nsf(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Nsf>())
	,outgoing_route_updates(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates>())
	,process_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope>())
	,queue(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Queue>())
	,redistribution(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>())
	,timers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers>())
	,ucmp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp>())
{
    adjacency_stagger->parent = this;
    children["adjacency-stagger"] = adjacency_stagger;

    area_addresses->parent = this;
    children["area-addresses"] = area_addresses;

    auto_cost->parent = this;
    children["auto-cost"] = auto_cost;

    default_information->parent = this;
    children["default-information"] = default_information;

    distance->parent = this;
    children["distance"] = distance;

    domain_id->parent = this;
    children["domain-id"] = domain_id;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    max_metric->parent = this;
    children["max-metric"] = max_metric;

    maximum_redistribute_prefix->parent = this;
    children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;

    microloop->parent = this;
    children["microloop"] = microloop;

    nsf->parent = this;
    children["nsf"] = nsf;

    outgoing_route_updates->parent = this;
    children["outgoing-route-updates"] = outgoing_route_updates;

    process_scope->parent = this;
    children["process-scope"] = process_scope;

    queue->parent = this;
    children["queue"] = queue;

    redistribution->parent = this;
    children["redistribution"] = redistribution;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    timers->parent = this;
    children["timers"] = timers;

    ucmp->parent = this;
    children["ucmp"] = ucmp;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ospf::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| adjacency_changes.is_set
	|| default_metric.is_set
	|| disable_dn_bit_check.is_set
	|| domain_tag.is_set
	|| ignore_mospf.is_set
	|| maximum_interfaces.is_set
	|| maximum_paths.is_set
	|| no_opaque.is_set
	|| router_id.is_set
	|| snmp_context.is_set
	|| snmp_trap_enabled.is_set
	|| spf_prefix_priority.is_set
	|| type7.is_set
	|| vrf_lite.is_set
	|| vrf_start.is_set
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_data())
	|| (af !=  nullptr && af->has_data())
	|| (area_addresses !=  nullptr && area_addresses->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (domain_id !=  nullptr && domain_id->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (max_lsa !=  nullptr && max_lsa->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data())
	|| (maximum_redistribute_prefix !=  nullptr && maximum_redistribute_prefix->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (outgoing_route_updates !=  nullptr && outgoing_route_updates->has_data())
	|| (process_scope !=  nullptr && process_scope->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(adjacency_changes.operation)
	|| is_set(default_metric.operation)
	|| is_set(disable_dn_bit_check.operation)
	|| is_set(domain_tag.operation)
	|| is_set(ignore_mospf.operation)
	|| is_set(maximum_interfaces.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(no_opaque.operation)
	|| is_set(router_id.operation)
	|| is_set(snmp_context.operation)
	|| is_set(snmp_trap_enabled.operation)
	|| is_set(spf_prefix_priority.operation)
	|| is_set(type7.operation)
	|| is_set(vrf_lite.operation)
	|| is_set(vrf_start.operation)
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_operation())
	|| (af !=  nullptr && af->has_operation())
	|| (area_addresses !=  nullptr && area_addresses->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (domain_id !=  nullptr && domain_id->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (max_lsa !=  nullptr && max_lsa->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (maximum_redistribute_prefix !=  nullptr && maximum_redistribute_prefix->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (outgoing_route_updates !=  nullptr && outgoing_route_updates->has_operation())
	|| (process_scope !=  nullptr && process_scope->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (adjacency_changes.is_set || is_set(adjacency_changes.operation)) leaf_name_data.push_back(adjacency_changes.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (disable_dn_bit_check.is_set || is_set(disable_dn_bit_check.operation)) leaf_name_data.push_back(disable_dn_bit_check.get_name_leafdata());
    if (domain_tag.is_set || is_set(domain_tag.operation)) leaf_name_data.push_back(domain_tag.get_name_leafdata());
    if (ignore_mospf.is_set || is_set(ignore_mospf.operation)) leaf_name_data.push_back(ignore_mospf.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.operation)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (no_opaque.is_set || is_set(no_opaque.operation)) leaf_name_data.push_back(no_opaque.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmp_context.is_set || is_set(snmp_context.operation)) leaf_name_data.push_back(snmp_context.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.operation)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (spf_prefix_priority.is_set || is_set(spf_prefix_priority.operation)) leaf_name_data.push_back(spf_prefix_priority.get_name_leafdata());
    if (type7.is_set || is_set(type7.operation)) leaf_name_data.push_back(type7.get_name_leafdata());
    if (vrf_lite.is_set || is_set(vrf_lite.operation)) leaf_name_data.push_back(vrf_lite.get_name_leafdata());
    if (vrf_start.is_set || is_set(vrf_start.operation)) leaf_name_data.push_back(vrf_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-stagger")
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
        else
        {
            adjacency_stagger = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger>();
            adjacency_stagger->parent = this;
            children["adjacency-stagger"] = adjacency_stagger;
        }
        return children.at("adjacency-stagger");
    }

    if(child_yang_name == "af")
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
        else
        {
            af = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Af>();
            af->parent = this;
            children["af"] = af;
        }
        return children.at("af");
    }

    if(child_yang_name == "area-addresses")
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
        else
        {
            area_addresses = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses>();
            area_addresses->parent = this;
            children["area-addresses"] = area_addresses;
        }
        return children.at("area-addresses");
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
        else
        {
            auto_cost = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AutoCost>();
            auto_cost->parent = this;
            children["auto-cost"] = auto_cost;
        }
        return children.at("auto-cost");
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "domain-id")
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
        else
        {
            domain_id = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId>();
            domain_id->parent = this;
            children["domain-id"] = domain_id;
        }
        return children.at("domain-id");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa != nullptr)
        {
            children["max-lsa"] = max_lsa;
        }
        else
        {
            max_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxLsa>();
            max_lsa->parent = this;
            children["max-lsa"] = max_lsa;
        }
        return children.at("max-lsa");
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
        else
        {
            max_metric = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric>();
            max_metric->parent = this;
            children["max-metric"] = max_metric;
        }
        return children.at("max-metric");
    }

    if(child_yang_name == "maximum-redistribute-prefix")
    {
        if(maximum_redistribute_prefix != nullptr)
        {
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
        else
        {
            maximum_redistribute_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix>();
            maximum_redistribute_prefix->parent = this;
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
        return children.at("maximum-redistribute-prefix");
    }

    if(child_yang_name == "microloop")
    {
        if(microloop != nullptr)
        {
            children["microloop"] = microloop;
        }
        else
        {
            microloop = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop>();
            microloop->parent = this;
            children["microloop"] = microloop;
        }
        return children.at("microloop");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
        else
        {
            nsf = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf;
        }
        return children.at("nsf");
    }

    if(child_yang_name == "outgoing-route-updates")
    {
        if(outgoing_route_updates != nullptr)
        {
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
        else
        {
            outgoing_route_updates = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates>();
            outgoing_route_updates->parent = this;
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
        return children.at("outgoing-route-updates");
    }

    if(child_yang_name == "process-scope")
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
        else
        {
            process_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope>();
            process_scope->parent = this;
            children["process-scope"] = process_scope;
        }
        return children.at("process-scope");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
        else
        {
            queue = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Queue>();
            queue->parent = this;
            children["queue"] = queue;
        }
        return children.at("queue");
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
        else
        {
            redistribution = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution>();
            redistribution->parent = this;
            children["redistribution"] = redistribution;
        }
        return children.at("redistribution");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
        else
        {
            ucmp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp>();
            ucmp->parent = this;
            children["ucmp"] = ucmp;
        }
        return children.at("ucmp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::get_children()
{
    if(children.find("adjacency-stagger") == children.end())
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
    }

    if(children.find("af") == children.end())
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
    }

    if(children.find("area-addresses") == children.end())
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
    }

    if(children.find("auto-cost") == children.end())
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
    }

    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("domain-id") == children.end())
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("max-lsa") == children.end())
    {
        if(max_lsa != nullptr)
        {
            children["max-lsa"] = max_lsa;
        }
    }

    if(children.find("max-metric") == children.end())
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
    }

    if(children.find("maximum-redistribute-prefix") == children.end())
    {
        if(maximum_redistribute_prefix != nullptr)
        {
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
    }

    if(children.find("microloop") == children.end())
    {
        if(microloop != nullptr)
        {
            children["microloop"] = microloop;
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
    }

    if(children.find("outgoing-route-updates") == children.end())
    {
        if(outgoing_route_updates != nullptr)
        {
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
    }

    if(children.find("process-scope") == children.end())
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
    }

    if(children.find("redistribution") == children.end())
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("ucmp") == children.end())
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "adjacency-changes")
    {
        adjacency_changes = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "disable-dn-bit-check")
    {
        disable_dn_bit_check = value;
    }
    if(value_path == "domain-tag")
    {
        domain_tag = value;
    }
    if(value_path == "ignore-mospf")
    {
        ignore_mospf = value;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "no-opaque")
    {
        no_opaque = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "snmp-context")
    {
        snmp_context = value;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
    }
    if(value_path == "spf-prefix-priority")
    {
        spf_prefix_priority = value;
    }
    if(value_path == "type7")
    {
        type7 = value;
    }
    if(value_path == "vrf-lite")
    {
        vrf_lite = value;
    }
    if(value_path == "vrf-start")
    {
        vrf_start = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>())
	,secondary_domain_ids(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>())
{
    primary_domain_id->parent = this;
    children["primary-domain-id"] = primary_domain_id;

    secondary_domain_ids->parent = this;
    children["secondary-domain-ids"] = secondary_domain_ids;

    yang_name = "domain-id"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::~DomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::has_data() const
{
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::has_operation() const
{
    return is_set(operation)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainId' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
        else
        {
            primary_domain_id = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>();
            primary_domain_id->parent = this;
            children["primary-domain-id"] = primary_domain_id;
        }
        return children.at("primary-domain-id");
    }

    if(child_yang_name == "secondary-domain-ids")
    {
        if(secondary_domain_ids != nullptr)
        {
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
        else
        {
            secondary_domain_ids = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>();
            secondary_domain_ids->parent = this;
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
        return children.at("secondary-domain-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::DomainId::get_children()
{
    if(children.find("primary-domain-id") == children.end())
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
    }

    if(children.find("secondary-domain-ids") == children.end())
    {
        if(secondary_domain_ids != nullptr)
        {
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{
    yang_name = "primary-domain-id"; yang_parent_name = "domain-id";
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_name.operation)
	|| is_set(domain_id_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryDomainId' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.operation)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainIds()
{
    yang_name = "secondary-domain-ids"; yang_parent_name = "domain-id";
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::~SecondaryDomainIds()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-ids";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainIds' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-domain-id")
    {
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(std::move(c));
        children[segment_path] = secondary_domain_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_children()
{
    for (auto const & c : secondary_domain_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{
    yang_name = "secondary-domain-id"; yang_parent_name = "secondary-domain-ids";
}

Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_name.operation)
	|| is_set(domain_id_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id" <<"[domain-id-name='" <<domain_id_name <<"']" <<"[domain-id-type='" <<domain_id_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainId' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.operation)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Microloop()
    :
    avoidance(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance>())
{
    avoidance->parent = this;
    children["avoidance"] = avoidance;

    yang_name = "microloop"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::~Microloop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::has_operation() const
{
    return is_set(operation)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Microloop' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "avoidance")
    {
        if(avoidance != nullptr)
        {
            children["avoidance"] = avoidance;
        }
        else
        {
            avoidance = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance>();
            avoidance->parent = this;
            children["avoidance"] = avoidance;
        }
        return children.at("avoidance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Microloop::get_children()
{
    if(children.find("avoidance") == children.end())
    {
        if(avoidance != nullptr)
        {
            children["avoidance"] = avoidance;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::Avoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "avoidance"; yang_parent_name = "microloop";
}

Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::~Avoidance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::has_data() const
{
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Avoidance' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::MaximumRedistributePrefix()
    :
    number_of_prefixes{YType::uint32, "number-of-prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::boolean, "warning-only"}
{
    yang_name = "maximum-redistribute-prefix"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::~MaximumRedistributePrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::has_data() const
{
    return number_of_prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_prefixes.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-redistribute-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRedistributePrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_prefixes.is_set || is_set(number_of_prefixes.operation)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    always_advertise{YType::boolean, "always-advertise"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return always_advertise.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(always_advertise.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_advertise.is_set || is_set(always_advertise.operation)) leaf_name_data.push_back(always_advertise.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always-advertise")
    {
        always_advertise = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Af::~Af()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Af::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Queue::Queue()
    :
    dispatch_incoming{YType::uint32, "dispatch-incoming"},
    dispatch_rate_limited{YType::uint32, "dispatch-rate-limited"},
    dispatch_rate_limited_flush{YType::uint32, "dispatch-rate-limited-flush"},
    dispatch_spf_lsa_limit{YType::uint32, "dispatch-spf-lsa-limit"},
    limit_high{YType::uint32, "limit-high"},
    limit_low{YType::uint32, "limit-low"},
    limit_medium{YType::uint32, "limit-medium"}
{
    yang_name = "queue"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Queue::~Queue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Queue::has_data() const
{
    return dispatch_incoming.is_set
	|| dispatch_rate_limited.is_set
	|| dispatch_rate_limited_flush.is_set
	|| dispatch_spf_lsa_limit.is_set
	|| limit_high.is_set
	|| limit_low.is_set
	|| limit_medium.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(dispatch_incoming.operation)
	|| is_set(dispatch_rate_limited.operation)
	|| is_set(dispatch_rate_limited_flush.operation)
	|| is_set(dispatch_spf_lsa_limit.operation)
	|| is_set(limit_high.operation)
	|| is_set(limit_low.operation)
	|| is_set(limit_medium.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dispatch_incoming.is_set || is_set(dispatch_incoming.operation)) leaf_name_data.push_back(dispatch_incoming.get_name_leafdata());
    if (dispatch_rate_limited.is_set || is_set(dispatch_rate_limited.operation)) leaf_name_data.push_back(dispatch_rate_limited.get_name_leafdata());
    if (dispatch_rate_limited_flush.is_set || is_set(dispatch_rate_limited_flush.operation)) leaf_name_data.push_back(dispatch_rate_limited_flush.get_name_leafdata());
    if (dispatch_spf_lsa_limit.is_set || is_set(dispatch_spf_lsa_limit.operation)) leaf_name_data.push_back(dispatch_spf_lsa_limit.get_name_leafdata());
    if (limit_high.is_set || is_set(limit_high.operation)) leaf_name_data.push_back(limit_high.get_name_leafdata());
    if (limit_low.is_set || is_set(limit_low.operation)) leaf_name_data.push_back(limit_low.get_name_leafdata());
    if (limit_medium.is_set || is_set(limit_medium.operation)) leaf_name_data.push_back(limit_medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Queue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dispatch-incoming")
    {
        dispatch_incoming = value;
    }
    if(value_path == "dispatch-rate-limited")
    {
        dispatch_rate_limited = value;
    }
    if(value_path == "dispatch-rate-limited-flush")
    {
        dispatch_rate_limited_flush = value;
    }
    if(value_path == "dispatch-spf-lsa-limit")
    {
        dispatch_spf_lsa_limit = value;
    }
    if(value_path == "limit-high")
    {
        limit_high = value;
    }
    if(value_path == "limit-low")
    {
        limit_low = value;
    }
    if(value_path == "limit-medium")
    {
        limit_medium = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetric()
    :
    max_metric_no_abr_off{YType::empty, "max-metric-no-abr-off"}
    	,
    max_metric_always(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways>())
	,max_metric_on_proc_migration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration>())
	,max_metric_on_proc_restart(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart>())
	,max_metric_on_startup(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup>())
	,max_metric_on_switchover(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover>())
{
    max_metric_always->parent = this;
    children["max-metric-always"] = max_metric_always;

    max_metric_on_proc_migration->parent = this;
    children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;

    max_metric_on_proc_restart->parent = this;
    children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;

    max_metric_on_startup->parent = this;
    children["max-metric-on-startup"] = max_metric_on_startup;

    max_metric_on_switchover->parent = this;
    children["max-metric-on-switchover"] = max_metric_on_switchover;

    yang_name = "max-metric"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::~MaxMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::has_data() const
{
    return max_metric_no_abr_off.is_set
	|| (max_metric_always !=  nullptr && max_metric_always->has_data())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_data())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_data())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_data())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_metric_no_abr_off.operation)
	|| (max_metric_always !=  nullptr && max_metric_always->has_operation())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_operation())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_operation())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_operation())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetric' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_metric_no_abr_off.is_set || is_set(max_metric_no_abr_off.operation)) leaf_name_data.push_back(max_metric_no_abr_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-metric-always")
    {
        if(max_metric_always != nullptr)
        {
            children["max-metric-always"] = max_metric_always;
        }
        else
        {
            max_metric_always = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways>();
            max_metric_always->parent = this;
            children["max-metric-always"] = max_metric_always;
        }
        return children.at("max-metric-always");
    }

    if(child_yang_name == "max-metric-on-proc-migration")
    {
        if(max_metric_on_proc_migration != nullptr)
        {
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
        else
        {
            max_metric_on_proc_migration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration>();
            max_metric_on_proc_migration->parent = this;
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
        return children.at("max-metric-on-proc-migration");
    }

    if(child_yang_name == "max-metric-on-proc-restart")
    {
        if(max_metric_on_proc_restart != nullptr)
        {
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
        else
        {
            max_metric_on_proc_restart = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart>();
            max_metric_on_proc_restart->parent = this;
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
        return children.at("max-metric-on-proc-restart");
    }

    if(child_yang_name == "max-metric-on-startup")
    {
        if(max_metric_on_startup != nullptr)
        {
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
        else
        {
            max_metric_on_startup = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup>();
            max_metric_on_startup->parent = this;
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
        return children.at("max-metric-on-startup");
    }

    if(child_yang_name == "max-metric-on-switchover")
    {
        if(max_metric_on_switchover != nullptr)
        {
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
        else
        {
            max_metric_on_switchover = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover>();
            max_metric_on_switchover->parent = this;
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
        return children.at("max-metric-on-switchover");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::get_children()
{
    if(children.find("max-metric-always") == children.end())
    {
        if(max_metric_always != nullptr)
        {
            children["max-metric-always"] = max_metric_always;
        }
    }

    if(children.find("max-metric-on-proc-migration") == children.end())
    {
        if(max_metric_on_proc_migration != nullptr)
        {
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
    }

    if(children.find("max-metric-on-proc-restart") == children.end())
    {
        if(max_metric_on_proc_restart != nullptr)
        {
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
    }

    if(children.find("max-metric-on-startup") == children.end())
    {
        if(max_metric_on_startup != nullptr)
        {
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
    }

    if(children.find("max-metric-on-switchover") == children.end())
    {
        if(max_metric_on_switchover != nullptr)
        {
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-metric-no-abr-off")
    {
        max_metric_no_abr_off = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::MaxMetricOnProcRestart()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-proc-restart"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::~MaxMetricOnProcRestart()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-restart";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnProcRestart' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::MaxMetricOnStartup()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-startup"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::~MaxMetricOnStartup()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-startup";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnStartup' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::MaxMetricOnProcMigration()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-proc-migration"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::~MaxMetricOnProcMigration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-migration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnProcMigration' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::MaxMetricAlways()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"}
{
    yang_name = "max-metric-always"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::~MaxMetricAlways()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-always";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricAlways' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::MaxMetricOnSwitchover()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-switchover"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::~MaxMetricOnSwitchover()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-switchover";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnSwitchover' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Nsf::Nsf()
    :
    cisco{YType::enumeration, "cisco"},
    flush_delay_time{YType::uint32, "flush-delay-time"},
    ietf{YType::enumeration, "ietf"},
    ietf_strict_lsa_checking{YType::empty, "ietf-strict-lsa-checking"},
    ietf_support_role{YType::enumeration, "ietf-support-role"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Nsf::~Nsf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Nsf::has_data() const
{
    return cisco.is_set
	|| flush_delay_time.is_set
	|| ietf.is_set
	|| ietf_strict_lsa_checking.is_set
	|| ietf_support_role.is_set
	|| interval.is_set
	|| lifetime.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(flush_delay_time.operation)
	|| is_set(ietf.operation)
	|| is_set(ietf_strict_lsa_checking.operation)
	|| is_set(ietf_support_role.operation)
	|| is_set(interval.operation)
	|| is_set(lifetime.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (flush_delay_time.is_set || is_set(flush_delay_time.operation)) leaf_name_data.push_back(flush_delay_time.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (ietf_strict_lsa_checking.is_set || is_set(ietf_strict_lsa_checking.operation)) leaf_name_data.push_back(ietf_strict_lsa_checking.get_name_leafdata());
    if (ietf_support_role.is_set || is_set(ietf_support_role.operation)) leaf_name_data.push_back(ietf_support_role.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Nsf::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "flush-delay-time")
    {
        flush_delay_time = value;
    }
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "ietf-strict-lsa-checking")
    {
        ietf_strict_lsa_checking = value;
    }
    if(value_path == "ietf-support-role")
    {
        ietf_support_role = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::ProcessScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    external_out{YType::boolean, "external-out"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    segment_routing{YType::enumeration, "segment-routing"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    summary_in{YType::boolean, "summary-in"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security>())
	,srgb(nullptr) // presence node
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    security->parent = this;
    children["security"] = security;

    yang_name = "process-scope"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::~ProcessScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| external_out.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| segment_routing.is_set
	|| segment_routing_forwarding.is_set
	|| summary_in.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (srgb !=  nullptr && srgb->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(external_out.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(segment_routing.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(summary_in.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (srgb !=  nullptr && srgb->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.operation)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.operation)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    if(child_yang_name == "srgb")
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
        else
        {
            srgb = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb>();
            srgb->parent = this;
            children["srgb"] = srgb;
        }
        return children.at("srgb");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    if(children.find("srgb") == children.end())
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "external-out")
    {
        external_out = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{
    yang_name = "srgb"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::~Srgb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::has_operation() const
{
    return is_set(operation)
	|| is_set(lower_bound.operation)
	|| is_set(upper_bound.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srgb' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl>())
{
    ttl->parent = this;
    children["ttl"] = ttl;

    yang_name = "security"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::has_operation() const
{
    return is_set(operation)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ttl")
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
        else
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl>();
            ttl->parent = this;
            children["ttl"] = ttl;
        }
        return children.at("ttl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::get_children()
{
    if(children.find("ttl") == children.end())
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{
    yang_name = "ttl"; yang_parent_name = "security";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hop_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "process-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistribution()
    :
    redistributes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes>())
{
    redistributes->parent = this;
    children["redistributes"] = redistributes;

    yang_name = "redistribution"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::has_data() const
{
    return (redistributes !=  nullptr && redistributes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::has_operation() const
{
    return is_set(operation)
	|| (redistributes !=  nullptr && redistributes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes != nullptr)
        {
            children["redistributes"] = redistributes;
        }
        else
        {
            redistributes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes>();
            redistributes->parent = this;
            children["redistributes"] = redistributes;
        }
        return children.at("redistributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::get_children()
{
    if(children.find("redistributes") == children.end())
    {
        if(redistributes != nullptr)
        {
            children["redistributes"] = redistributes;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistributes()
{
    yang_name = "redistributes"; yang_parent_name = "redistribution";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::~Redistributes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribute")
    {
        for(auto const & c : redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(std::move(c));
        children[segment_path] = redistribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::get_children()
{
    for (auto const & c : redistribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip(nullptr) // presence node
{
    yang_name = "redistribute"; yang_parent_name = "redistributes";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application_or_isis_or_ospf.size(); index++)
    {
        if(application_or_isis_or_ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip !=  nullptr && connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application_or_isis_or_ospf.size(); index++)
    {
        if(application_or_isis_or_ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip !=  nullptr && connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "application-or-isis-or-ospf")
    {
        for(auto const & c : application_or_isis_or_ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf>();
        c->parent = this;
        application_or_isis_or_ospf.push_back(std::move(c));
        children[segment_path] = application_or_isis_or_ospf.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip")
    {
        if(connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip != nullptr)
        {
            children["connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"] = connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip;
        }
        else
        {
            connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip>();
            connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip->parent = this;
            children["connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"] = connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip;
        }
        return children.at("connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip");
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::get_children()
{
    for (auto const & c : application_or_isis_or_ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip") == children.end())
    {
        if(connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip != nullptr)
        {
            children["connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"] = connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip;
        }
    }

    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip()
    :
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip"; yang_parent_name = "redistribute";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::has_data() const
{
    return bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_preserve_default_info.operation)
	|| is_set(bgp_preserve_med.operation)
	|| is_set(classful.operation)
	|| is_set(default_redistributed_route_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(isis_levels.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_external.operation)
	|| is_set(ospf_internal.operation)
	|| is_set(ospf_nssa_level.operation)
	|| is_set(ospf_redist_lsa_type.operation)
	|| is_set(ospfnssa_only.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-dagr-or-subscriber-or-mobile-or-rip";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.operation)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.operation)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.operation)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.operation)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.operation)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.operation)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.operation)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.operation)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.operation)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.operation)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
    }
    if(value_path == "classful")
    {
        classful = value;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::ApplicationOrIsisOrOspf()
    :
    instance_name{YType::str, "instance-name"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "application-or-isis-or-ospf"; yang_parent_name = "redistribute";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::~ApplicationOrIsisOrOspf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::has_data() const
{
    return instance_name.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(bgp_preserve_default_info.operation)
	|| is_set(bgp_preserve_med.operation)
	|| is_set(classful.operation)
	|| is_set(default_redistributed_route_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(isis_levels.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_external.operation)
	|| is_set(ospf_internal.operation)
	|| is_set(ospf_nssa_level.operation)
	|| is_set(ospf_redist_lsa_type.operation)
	|| is_set(ospfnssa_only.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-or-isis-or-ospf" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationOrIsisOrOspf' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.operation)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.operation)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.operation)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.operation)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.operation)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.operation)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.operation)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.operation)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.operation)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.operation)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
    }
    if(value_path == "classful")
    {
        classful = value;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    instance_name{YType::str, "instance-name"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| instance_name.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(instance_name.operation)
	|| is_set(bgp_preserve_default_info.operation)
	|| is_set(bgp_preserve_med.operation)
	|| is_set(classful.operation)
	|| is_set(default_redistributed_route_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(isis_levels.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_external.operation)
	|| is_set(ospf_internal.operation)
	|| is_set(ospf_nssa_level.operation)
	|| is_set(ospf_redist_lsa_type.operation)
	|| is_set(ospfnssa_only.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.operation)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.operation)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.operation)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.operation)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.operation)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.operation)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.operation)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.operation)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.operation)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.operation)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
    }
    if(value_path == "classful")
    {
        classful = value;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    as_xx{YType::uint32, "as-xx"},
    instance_name{YType::str, "instance-name"},
    bgp_preserve_default_info{YType::boolean, "bgp-preserve-default-info"},
    bgp_preserve_med{YType::boolean, "bgp-preserve-med"},
    classful{YType::boolean, "classful"},
    default_redistributed_route_metric{YType::uint32, "default-redistributed-route-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    isis_levels{YType::enumeration, "isis-levels"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_external{YType::enumeration, "ospf-external"},
    ospf_internal{YType::boolean, "ospf-internal"},
    ospf_nssa_level{YType::enumeration, "ospf-nssa-level"},
    ospf_redist_lsa_type{YType::enumeration, "ospf-redist-lsa-type"},
    ospfnssa_only{YType::boolean, "ospfnssa-only"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::has_data() const
{
    return as_xx.is_set
	|| instance_name.is_set
	|| bgp_preserve_default_info.is_set
	|| bgp_preserve_med.is_set
	|| classful.is_set
	|| default_redistributed_route_metric.is_set
	|| eigrp_route_type.is_set
	|| isis_levels.is_set
	|| metric_type.is_set
	|| ospf_external.is_set
	|| ospf_internal.is_set
	|| ospf_nssa_level.is_set
	|| ospf_redist_lsa_type.is_set
	|| ospfnssa_only.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(instance_name.operation)
	|| is_set(bgp_preserve_default_info.operation)
	|| is_set(bgp_preserve_med.operation)
	|| is_set(classful.operation)
	|| is_set(default_redistributed_route_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(isis_levels.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_external.operation)
	|| is_set(ospf_internal.operation)
	|| is_set(ospf_nssa_level.operation)
	|| is_set(ospf_redist_lsa_type.operation)
	|| is_set(ospfnssa_only.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-xx='" <<as_xx <<"']" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (bgp_preserve_default_info.is_set || is_set(bgp_preserve_default_info.operation)) leaf_name_data.push_back(bgp_preserve_default_info.get_name_leafdata());
    if (bgp_preserve_med.is_set || is_set(bgp_preserve_med.operation)) leaf_name_data.push_back(bgp_preserve_med.get_name_leafdata());
    if (classful.is_set || is_set(classful.operation)) leaf_name_data.push_back(classful.get_name_leafdata());
    if (default_redistributed_route_metric.is_set || is_set(default_redistributed_route_metric.operation)) leaf_name_data.push_back(default_redistributed_route_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (isis_levels.is_set || is_set(isis_levels.operation)) leaf_name_data.push_back(isis_levels.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_external.is_set || is_set(ospf_external.operation)) leaf_name_data.push_back(ospf_external.get_name_leafdata());
    if (ospf_internal.is_set || is_set(ospf_internal.operation)) leaf_name_data.push_back(ospf_internal.get_name_leafdata());
    if (ospf_nssa_level.is_set || is_set(ospf_nssa_level.operation)) leaf_name_data.push_back(ospf_nssa_level.get_name_leafdata());
    if (ospf_redist_lsa_type.is_set || is_set(ospf_redist_lsa_type.operation)) leaf_name_data.push_back(ospf_redist_lsa_type.get_name_leafdata());
    if (ospfnssa_only.is_set || is_set(ospfnssa_only.operation)) leaf_name_data.push_back(ospfnssa_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "bgp-preserve-default-info")
    {
        bgp_preserve_default_info = value;
    }
    if(value_path == "bgp-preserve-med")
    {
        bgp_preserve_med = value;
    }
    if(value_path == "classful")
    {
        classful = value;
    }
    if(value_path == "default-redistributed-route-metric")
    {
        default_redistributed_route_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "isis-levels")
    {
        isis_levels = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-external")
    {
        ospf_external = value;
    }
    if(value_path == "ospf-internal")
    {
        ospf_internal = value;
    }
    if(value_path == "ospf-nssa-level")
    {
        ospf_nssa_level = value;
    }
    if(value_path == "ospf-redist-lsa-type")
    {
        ospf_redist_lsa_type = value;
    }
    if(value_path == "ospfnssa-only")
    {
        ospfnssa_only = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::AdjacencyStagger()
    :
    disable{YType::empty, "disable"},
    initial_nbr{YType::uint32, "initial-nbr"},
    max_nbr{YType::uint32, "max-nbr"}
{
    yang_name = "adjacency-stagger"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::~AdjacencyStagger()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::has_data() const
{
    return disable.is_set
	|| initial_nbr.is_set
	|| max_nbr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(initial_nbr.operation)
	|| is_set(max_nbr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-stagger";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyStagger' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (initial_nbr.is_set || is_set(initial_nbr.operation)) leaf_name_data.push_back(initial_nbr.get_name_leafdata());
    if (max_nbr.is_set || is_set(max_nbr.operation)) leaf_name_data.push_back(max_nbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "initial-nbr")
    {
        initial_nbr = value;
    }
    if(value_path == "max-nbr")
    {
        max_nbr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::MaxLsa()
    :
    max_lsa_ignore_count{YType::uint32, "max-lsa-ignore-count"},
    max_lsa_ignore_time{YType::uint32, "max-lsa-ignore-time"},
    max_lsa_limit{YType::uint32, "max-lsa-limit"},
    max_lsa_reset_time{YType::uint32, "max-lsa-reset-time"},
    max_lsa_threshold{YType::uint32, "max-lsa-threshold"},
    max_lsa_warning_only{YType::boolean, "max-lsa-warning-only"}
{
    yang_name = "max-lsa"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::~MaxLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::has_data() const
{
    return max_lsa_ignore_count.is_set
	|| max_lsa_ignore_time.is_set
	|| max_lsa_limit.is_set
	|| max_lsa_reset_time.is_set
	|| max_lsa_threshold.is_set
	|| max_lsa_warning_only.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(max_lsa_ignore_count.operation)
	|| is_set(max_lsa_ignore_time.operation)
	|| is_set(max_lsa_limit.operation)
	|| is_set(max_lsa_reset_time.operation)
	|| is_set(max_lsa_threshold.operation)
	|| is_set(max_lsa_warning_only.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxLsa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_lsa_ignore_count.is_set || is_set(max_lsa_ignore_count.operation)) leaf_name_data.push_back(max_lsa_ignore_count.get_name_leafdata());
    if (max_lsa_ignore_time.is_set || is_set(max_lsa_ignore_time.operation)) leaf_name_data.push_back(max_lsa_ignore_time.get_name_leafdata());
    if (max_lsa_limit.is_set || is_set(max_lsa_limit.operation)) leaf_name_data.push_back(max_lsa_limit.get_name_leafdata());
    if (max_lsa_reset_time.is_set || is_set(max_lsa_reset_time.operation)) leaf_name_data.push_back(max_lsa_reset_time.get_name_leafdata());
    if (max_lsa_threshold.is_set || is_set(max_lsa_threshold.operation)) leaf_name_data.push_back(max_lsa_threshold.get_name_leafdata());
    if (max_lsa_warning_only.is_set || is_set(max_lsa_warning_only.operation)) leaf_name_data.push_back(max_lsa_warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MaxLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count = value;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time = value;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit = value;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time = value;
    }
    if(value_path == "max-lsa-threshold")
    {
        max_lsa_threshold = value;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AutoCost::AutoCost()
    :
    bandwidth{YType::uint32, "bandwidth"},
    disable{YType::boolean, "disable"}
{
    yang_name = "auto-cost"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::AutoCost::~AutoCost()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AutoCost::has_data() const
{
    return bandwidth.is_set
	|| disable.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AutoCost::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(disable.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoCost' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AutoCost::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AutoCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
    	,
    enable(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    children["enable"] = enable;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "ucmp"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::~Ucmp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::has_data() const
{
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_interval.operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ucmp' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.operation)) leaf_name_data.push_back(delay_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "enable")
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
        else
        {
            enable = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable>();
            enable->parent = this;
            children["enable"] = enable;
        }
        return children.at("enable");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Ucmp::get_children()
{
    if(children.find("enable") == children.end())
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::Enable()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    variance{YType::uint32, "variance"}
{
    yang_name = "enable"; yang_parent_name = "ucmp";
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::~Enable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::has_data() const
{
    return prefix_list_name.is_set
	|| variance.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(variance.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp";
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::PerLink()
    :
    priority{YType::enumeration, "priority"}
{
    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_data() const
{
    return priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::PerPrefix()
    :
    load_sharing_disable{YType::empty, "load-sharing-disable"},
    priority{YType::enumeration, "priority"}
    	,
    tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>())
{
    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_data() const
{
    return load_sharing_disable.is_set
	|| priority.is_set
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(load_sharing_disable.operation)
	|| is_set(priority.operation)
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing_disable.is_set || is_set(load_sharing_disable.operation)) leaf_name_data.push_back(load_sharing_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_children()
{
    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
    :
    summary_prefix_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData>())
{
    summary_prefix_data->parent = this;
    children["summary-prefix-data"] = summary_prefix_data;

    yang_name = "summary-prefixes"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<netmask.size(); index++)
    {
        if(netmask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_and_netmask.size(); index++)
    {
        if(prefix_and_netmask[index]->has_data())
            return true;
    }
    return (summary_prefix_data !=  nullptr && summary_prefix_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<netmask.size(); index++)
    {
        if(netmask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_and_netmask.size(); index++)
    {
        if(prefix_and_netmask[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (summary_prefix_data !=  nullptr && summary_prefix_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "netmask")
    {
        for(auto const & c : netmask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask>();
        c->parent = this;
        netmask.push_back(std::move(c));
        children[segment_path] = netmask.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-and-netmask")
    {
        for(auto const & c : prefix_and_netmask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask>();
        c->parent = this;
        prefix_and_netmask.push_back(std::move(c));
        children[segment_path] = prefix_and_netmask.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix-data")
    {
        if(summary_prefix_data != nullptr)
        {
            children["summary-prefix-data"] = summary_prefix_data;
        }
        else
        {
            summary_prefix_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData>();
            summary_prefix_data->parent = this;
            children["summary-prefix-data"] = summary_prefix_data;
        }
        return children.at("summary-prefix-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children()
{
    for (auto const & c : netmask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : prefix_and_netmask)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("summary-prefix-data") == children.end())
    {
        if(summary_prefix_data != nullptr)
        {
            children["summary-prefix-data"] = summary_prefix_data;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::SummaryPrefixData()
    :
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::int32, "tag"}
{
    yang_name = "summary-prefix-data"; yang_parent_name = "summary-prefixes";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::~SummaryPrefixData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::has_data() const
{
    return not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::has_operation() const
{
    return is_set(operation)
	|| is_set(not_advertise.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix-data";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixData' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::PrefixAndNetmask()
    :
    netmask{YType::str, "netmask"},
    prefix{YType::str, "prefix"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::int32, "tag"}
{
    yang_name = "prefix-and-netmask"; yang_parent_name = "summary-prefixes";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::~PrefixAndNetmask()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::has_data() const
{
    return netmask.is_set
	|| prefix.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::has_operation() const
{
    return is_set(operation)
	|| is_set(netmask.operation)
	|| is_set(prefix.operation)
	|| is_set(not_advertise.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-and-netmask" <<"[netmask='" <<netmask <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixAndNetmask' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::int32, "tag"}
{
    yang_name = "prefix"; yang_parent_name = "summary-prefixes";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::~Prefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::has_data() const
{
    return prefix.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(not_advertise.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::Netmask()
    :
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::int32, "tag"}
{
    yang_name = "netmask"; yang_parent_name = "summary-prefixes";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::~Netmask()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::has_data() const
{
    return netmask.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::has_operation() const
{
    return is_set(operation)
	|| is_set(netmask.operation)
	|| is_set(not_advertise.operation)
	|| is_set(tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask" <<"[netmask='" <<netmask <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Netmask' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdates()
{
    yang_name = "outgoing-route-updates"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::~OutgoingRouteUpdates()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::has_data() const
{
    for (std::size_t index=0; index<outgoing_route_update.size(); index++)
    {
        if(outgoing_route_update[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::has_operation() const
{
    for (std::size_t index=0; index<outgoing_route_update.size(); index++)
    {
        if(outgoing_route_update[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-route-updates";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingRouteUpdates' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "outgoing-route-update")
    {
        for(auto const & c : outgoing_route_update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate>();
        c->parent = this;
        outgoing_route_update.push_back(std::move(c));
        children[segment_path] = outgoing_route_update.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::get_children()
{
    for (auto const & c : outgoing_route_update)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::OutgoingRouteUpdate()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    access_list_name{YType::str, "access-list-name"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    ospf_process_name{YType::str, "ospf-process-name"}
{
    yang_name = "outgoing-route-update"; yang_parent_name = "outgoing-route-updates";
}

Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::~OutgoingRouteUpdate()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::has_data() const
{
    return protocol_name.is_set
	|| access_list_name.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| ospf_process_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(access_list_name.operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(ospf_process_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-route-update" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingRouteUpdate' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (ospf_process_name.is_set || is_set(ospf_process_name.operation)) leaf_name_data.push_back(ospf_process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "ospf-process-name")
    {
        ospf_process_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::Distance()
    :
    admin_distance{YType::uint32, "admin-distance"}
    	,
    ip_distances(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances>())
	,ospf_distance(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance>())
{
    ip_distances->parent = this;
    children["ip-distances"] = ip_distances;

    ospf_distance->parent = this;
    children["ospf-distance"] = ospf_distance;

    yang_name = "distance"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::~Distance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::has_data() const
{
    return admin_distance.is_set
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (ospf_distance !=  nullptr && ospf_distance->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_distance.operation)
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (ospf_distance !=  nullptr && ospf_distance->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_distance.is_set || is_set(admin_distance.operation)) leaf_name_data.push_back(admin_distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-distances")
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
        else
        {
            ip_distances = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances>();
            ip_distances->parent = this;
            children["ip-distances"] = ip_distances;
        }
        return children.at("ip-distances");
    }

    if(child_yang_name == "ospf-distance")
    {
        if(ospf_distance != nullptr)
        {
            children["ospf-distance"] = ospf_distance;
        }
        else
        {
            ospf_distance = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance>();
            ospf_distance->parent = this;
            children["ospf-distance"] = ospf_distance;
        }
        return children.at("ospf-distance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Distance::get_children()
{
    if(children.find("ip-distances") == children.end())
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
    }

    if(children.find("ospf-distance") == children.end())
    {
        if(ospf_distance != nullptr)
        {
            children["ospf-distance"] = ospf_distance;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-distance")
    {
        admin_distance = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::OspfDistance()
    :
    external_routes{YType::uint32, "external-routes"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{
    yang_name = "ospf-distance"; yang_parent_name = "distance";
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::~OspfDistance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::has_data() const
{
    return external_routes.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(inter_area.operation)
	|| is_set(intra_area.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-distance";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfDistance' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.operation)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.operation)) leaf_name_data.push_back(intra_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistances()
{
    yang_name = "ip-distances"; yang_parent_name = "distance";
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::~IpDistances()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpDistances' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(std::move(c));
        children[segment_path] = ip_distance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::get_children()
{
    for (auto const & c : ip_distance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"},
    access_list_name{YType::str, "access-list-name"},
    distance{YType::uint32, "distance"}
{
    yang_name = "ip-distance"; yang_parent_name = "ip-distances";
}

Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::~IpDistance()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| wildcard.is_set
	|| access_list_name.is_set
	|| distance.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(wildcard.operation)
	|| is_set(access_list_name.operation)
	|| is_set(distance.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[wildcard='" <<wildcard <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpDistance' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.operation)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddresses()
{
    yang_name = "area-addresses"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::~AreaAddresses()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::has_operation() const
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
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-addresses";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAddresses' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-address")
    {
        for(auto const & c : area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress>();
        c->parent = this;
        area_address.push_back(std::move(c));
        children[segment_path] = area_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "area-area-id")
    {
        for(auto const & c : area_area_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId>();
        c->parent = this;
        area_area_id.push_back(std::move(c));
        children[segment_path] = area_area_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::get_children()
{
    for (auto const & c : area_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : area_area_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaAddress()
    :
    address{YType::str, "address"},
    default_cost{YType::uint32, "default-cost"},
    external_out{YType::boolean, "external-out"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    running{YType::empty, "running"},
    segment_routing{YType::enumeration, "segment-routing"},
    stub{YType::boolean, "stub"},
    summary_in{YType::boolean, "summary-in"}
    	,
    area_ranges(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges>())
	,area_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope>())
	,multi_area_interface_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes>())
	,name_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes>())
	,nssa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa>())
	,sham_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes>())
	,virtual_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes>())
{
    area_ranges->parent = this;
    children["area-ranges"] = area_ranges;

    area_scope->parent = this;
    children["area-scope"] = area_scope;

    multi_area_interface_scopes->parent = this;
    children["multi-area-interface-scopes"] = multi_area_interface_scopes;

    name_scopes->parent = this;
    children["name-scopes"] = name_scopes;

    nssa->parent = this;
    children["nssa"] = nssa;

    sham_link_scopes->parent = this;
    children["sham-link-scopes"] = sham_link_scopes;

    virtual_link_scopes->parent = this;
    children["virtual-link-scopes"] = virtual_link_scopes;

    yang_name = "area-address"; yang_parent_name = "area-addresses";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::~AreaAddress()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::has_data() const
{
    return address.is_set
	|| default_cost.is_set
	|| external_out.is_set
	|| mpls_traffic_eng.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| running.is_set
	|| segment_routing.is_set
	|| stub.is_set
	|| summary_in.is_set
	|| (area_ranges !=  nullptr && area_ranges->has_data())
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_data())
	|| (name_scopes !=  nullptr && name_scopes->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_data())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(default_cost.operation)
	|| is_set(external_out.operation)
	|| is_set(mpls_traffic_eng.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(running.operation)
	|| is_set(segment_routing.operation)
	|| is_set(stub.operation)
	|| is_set(summary_in.operation)
	|| (area_ranges !=  nullptr && area_ranges->has_operation())
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_operation())
	|| (name_scopes !=  nullptr && name_scopes->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_operation())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAddress' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.operation)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.operation)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (stub.is_set || is_set(stub.operation)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.operation)) leaf_name_data.push_back(summary_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-ranges")
    {
        if(area_ranges != nullptr)
        {
            children["area-ranges"] = area_ranges;
        }
        else
        {
            area_ranges = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges>();
            area_ranges->parent = this;
            children["area-ranges"] = area_ranges;
        }
        return children.at("area-ranges");
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
        else
        {
            area_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope>();
            area_scope->parent = this;
            children["area-scope"] = area_scope;
        }
        return children.at("area-scope");
    }

    if(child_yang_name == "multi-area-interface-scopes")
    {
        if(multi_area_interface_scopes != nullptr)
        {
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
        else
        {
            multi_area_interface_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes>();
            multi_area_interface_scopes->parent = this;
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
        return children.at("multi-area-interface-scopes");
    }

    if(child_yang_name == "name-scopes")
    {
        if(name_scopes != nullptr)
        {
            children["name-scopes"] = name_scopes;
        }
        else
        {
            name_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes>();
            name_scopes->parent = this;
            children["name-scopes"] = name_scopes;
        }
        return children.at("name-scopes");
    }

    if(child_yang_name == "nssa")
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
        else
        {
            nssa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa>();
            nssa->parent = this;
            children["nssa"] = nssa;
        }
        return children.at("nssa");
    }

    if(child_yang_name == "sham-link-scopes")
    {
        if(sham_link_scopes != nullptr)
        {
            children["sham-link-scopes"] = sham_link_scopes;
        }
        else
        {
            sham_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes>();
            sham_link_scopes->parent = this;
            children["sham-link-scopes"] = sham_link_scopes;
        }
        return children.at("sham-link-scopes");
    }

    if(child_yang_name == "virtual-link-scopes")
    {
        if(virtual_link_scopes != nullptr)
        {
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
        else
        {
            virtual_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes>();
            virtual_link_scopes->parent = this;
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
        return children.at("virtual-link-scopes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_children()
{
    if(children.find("area-ranges") == children.end())
    {
        if(area_ranges != nullptr)
        {
            children["area-ranges"] = area_ranges;
        }
    }

    if(children.find("area-scope") == children.end())
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
    }

    if(children.find("multi-area-interface-scopes") == children.end())
    {
        if(multi_area_interface_scopes != nullptr)
        {
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
    }

    if(children.find("name-scopes") == children.end())
    {
        if(name_scopes != nullptr)
        {
            children["name-scopes"] = name_scopes;
        }
    }

    if(children.find("nssa") == children.end())
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
    }

    if(children.find("sham-link-scopes") == children.end())
    {
        if(sham_link_scopes != nullptr)
        {
            children["sham-link-scopes"] = sham_link_scopes;
        }
    }

    if(children.find("virtual-link-scopes") == children.end())
    {
        if(virtual_link_scopes != nullptr)
        {
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "external-out")
    {
        external_out = value;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "stub")
    {
        stub = value;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScopes()
{
    yang_name = "virtual-link-scopes"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::~VirtualLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::has_data() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link-scope")
    {
        for(auto const & c : virtual_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope>();
        c->parent = this;
        virtual_link_scope.push_back(std::move(c));
        children[segment_path] = virtual_link_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::get_children()
{
    for (auto const & c : virtual_link_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::VirtualLinkScope()
    :
    address{YType::str, "address"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    yang_name = "virtual-link-scope"; yang_parent_name = "virtual-link-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::~VirtualLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::has_data() const
{
    return address.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scope" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "virtual-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "virtual-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScopes()
{
    yang_name = "sham-link-scopes"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::~ShamLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::has_data() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-scope")
    {
        for(auto const & c : sham_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope>();
        c->parent = this;
        sham_link_scope.push_back(std::move(c));
        children[segment_path] = sham_link_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::get_children()
{
    for (auto const & c : sham_link_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::ShamLinkScope()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    cost{YType::uint32, "cost"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    source{YType::str, "source"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    yang_name = "sham-link-scope"; yang_parent_name = "sham-link-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::~ShamLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| source.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(cost.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(source.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scope" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "sham-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "sham-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::AreaScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    security->parent = this;
    children["security"] = security;

    yang_name = "area-scope"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::~AreaScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl>())
{
    ttl->parent = this;
    children["ttl"] = ttl;

    yang_name = "security"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::has_operation() const
{
    return is_set(operation)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ttl")
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
        else
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl>();
            ttl->parent = this;
            children["ttl"] = ttl;
        }
        return children.at("ttl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::get_children()
{
    if(children.find("ttl") == children.end())
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{
    yang_name = "ttl"; yang_parent_name = "security";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hop_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScopes()
{
    yang_name = "name-scopes"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::~NameScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::has_data() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::has_operation() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NameScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "name-scope")
    {
        for(auto const & c : name_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope>();
        c->parent = this;
        name_scope.push_back(std::move(c));
        children[segment_path] = name_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::get_children()
{
    for (auto const & c : name_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::NameScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors>())
	,prefix_sid(nullptr) // presence node
	,prefix_sid_strict(nullptr) // presence node
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    security->parent = this;
    children["security"] = security;

    yang_name = "name-scope"; yang_parent_name = "name-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::~NameScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scope" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NameScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
        else
        {
            prefix_sid = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid>();
            prefix_sid->parent = this;
            children["prefix-sid"] = prefix_sid;
        }
        return children.at("prefix-sid");
    }

    if(child_yang_name == "prefix-sid-strict")
    {
        if(prefix_sid_strict != nullptr)
        {
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
        else
        {
            prefix_sid_strict = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict>();
            prefix_sid_strict->parent = this;
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
        return children.at("prefix-sid-strict");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("prefix-sid") == children.end())
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
    }

    if(children.find("prefix-sid-strict") == children.end())
    {
        if(prefix_sid_strict != nullptr)
        {
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::PrefixSid()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{
    yang_name = "prefix-sid"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::~PrefixSid()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(n_flag_clear.operation)
	|| is_set(sid_value.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSid' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.operation)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::PrefixSidStrict()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{
    yang_name = "prefix-sid-strict"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::~PrefixSidStrict()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(n_flag_clear.operation)
	|| is_set(sid_value.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-strict";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSidStrict' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.operation)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl>())
{
    ttl->parent = this;
    children["ttl"] = ttl;

    yang_name = "security"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::has_operation() const
{
    return is_set(operation)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ttl")
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
        else
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl>();
            ttl->parent = this;
            children["ttl"] = ttl;
        }
        return children.at("ttl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::get_children()
{
    if(children.find("ttl") == children.end())
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{
    yang_name = "ttl"; yang_parent_name = "security";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hop_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::get_children()
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

const Enum::YLeaf OspfFastRerouteTiebreakersEnum::downstream {0, "downstream"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::lowest_metric {2, "lowest-metric"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::node_protect {3, "node-protect"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::primary_path {4, "primary-path"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::secondary_path {5, "secondary-path"};
const Enum::YLeaf OspfFastRerouteTiebreakersEnum::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf OspfFastRerouteEnum::none {0, "none"};
const Enum::YLeaf OspfFastRerouteEnum::per_link {1, "per-link"};
const Enum::YLeaf OspfFastRerouteEnum::per_prefix {2, "per-prefix"};

const Enum::YLeaf OspfRedistLsaEnum::summary {3, "summary"};
const Enum::YLeaf OspfRedistLsaEnum::external {5, "external"};

const Enum::YLeaf OspfIetfNsfEnum::all {3, "all"};

const Enum::YLeaf BfdEnableModeEnum::disable {0, "disable"};
const Enum::YLeaf BfdEnableModeEnum::default_ {1, "default"};
const Enum::YLeaf BfdEnableModeEnum::strict {2, "strict"};

const Enum::YLeaf OspfFastReroutePriorityEnum::critical {0, "critical"};
const Enum::YLeaf OspfFastReroutePriorityEnum::high {2, "high"};
const Enum::YLeaf OspfFastReroutePriorityEnum::medium {4, "medium"};
const Enum::YLeaf OspfFastReroutePriorityEnum::low {6, "low"};

const Enum::YLeaf OspfCiscoNsfEnum::always {1, "always"};
const Enum::YLeaf OspfCiscoNsfEnum::require_nsf_neighbors {2, "require-nsf-neighbors"};

const Enum::YLeaf OspfRedistProtocolEnum::all {0, "all"};
const Enum::YLeaf OspfRedistProtocolEnum::connected {1, "connected"};
const Enum::YLeaf OspfRedistProtocolEnum::static_ {3, "static"};
const Enum::YLeaf OspfRedistProtocolEnum::bgp {4, "bgp"};
const Enum::YLeaf OspfRedistProtocolEnum::rip {5, "rip"};
const Enum::YLeaf OspfRedistProtocolEnum::isis {6, "isis"};
const Enum::YLeaf OspfRedistProtocolEnum::ospf {7, "ospf"};
const Enum::YLeaf OspfRedistProtocolEnum::eigrp {8, "eigrp"};
const Enum::YLeaf OspfRedistProtocolEnum::dagr {9, "dagr"};
const Enum::YLeaf OspfRedistProtocolEnum::subscriber {10, "subscriber"};
const Enum::YLeaf OspfRedistProtocolEnum::application {11, "application"};
const Enum::YLeaf OspfRedistProtocolEnum::mobile {12, "mobile"};

const Enum::YLeaf OspfSegmentRoutingEnum::disable {0, "disable"};
const Enum::YLeaf OspfSegmentRoutingEnum::mpls {1, "mpls"};

const Enum::YLeaf OspfUloopAvoidanceEnum::protected_ {1, "protected"};
const Enum::YLeaf OspfUloopAvoidanceEnum::all {2, "all"};
const Enum::YLeaf OspfUloopAvoidanceEnum::segment_routing {3, "segment-routing"};

const Enum::YLeaf OspfSegmentRoutingForwardingEnum::disable {0, "disable"};
const Enum::YLeaf OspfSegmentRoutingForwardingEnum::mpls {1, "mpls"};

const Enum::YLeaf OspfAddressFamilyEnum::ipv4 {1, "ipv4"};

const Enum::YLeaf OspfProcFastRerouteEnum::none {0, "none"};
const Enum::YLeaf OspfProcFastRerouteEnum::per_link {1, "per-link"};
const Enum::YLeaf OspfProcFastRerouteEnum::per_prefix {2, "per-prefix"};

const Enum::YLeaf OspfProcFrrRlfaTunnelEnum::none {0, "none"};
const Enum::YLeaf OspfProcFrrRlfaTunnelEnum::mpls_ldp {1, "mpls-ldp"};

const Enum::YLeaf OspfIetfNsfSupportEnum::never {0, "never"};

const Enum::YLeaf OspfLinkStateMetricEnum::type1 {1, "type1"};
const Enum::YLeaf OspfLinkStateMetricEnum::type2 {2, "type2"};

const Enum::YLeaf OspfAuthenticationEnum::none {0, "none"};
const Enum::YLeaf OspfAuthenticationEnum::plain {1, "plain"};
const Enum::YLeaf OspfAuthenticationEnum::md5 {2, "md5"};

const Enum::YLeaf OspfLogAdjEnum::brief {0, "brief"};
const Enum::YLeaf OspfLogAdjEnum::detail {1, "detail"};
const Enum::YLeaf OspfLogAdjEnum::suppress {2, "suppress"};

const Enum::YLeaf OspfSubAddressFamilyEnum::unicast {1, "unicast"};

const Enum::YLeaf OspfDomainIdEnum::type0005 {5, "type0005"};
const Enum::YLeaf OspfDomainIdEnum::type0105 {261, "type0105"};
const Enum::YLeaf OspfDomainIdEnum::type0205 {517, "type0205"};
const Enum::YLeaf OspfDomainIdEnum::type8005 {32773, "type8005"};

const Enum::YLeaf OspfEigrpRouteEnum::internal {0, "internal"};
const Enum::YLeaf OspfEigrpRouteEnum::external {1, "external"};

const Enum::YLeaf OspfSidEnum::index_ {0, "index"};
const Enum::YLeaf OspfSidEnum::absolute {1, "absolute"};

const Enum::YLeaf NsrEnum::true_ {1, "true"};
const Enum::YLeaf NsrEnum::false_ {2, "false"};

const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::downstream {0, "downstream"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::lowest_metric {2, "lowest-metric"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::node_protect {3, "node-protect"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::primary_path {4, "primary-path"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::secondary_path {5, "secondary-path"};
const Enum::YLeaf OspfFastRerouteTiebreakersIntfEnum::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf OspfDistListProtocolEnum::all {0, "all"};
const Enum::YLeaf OspfDistListProtocolEnum::connected {1, "connected"};
const Enum::YLeaf OspfDistListProtocolEnum::static_ {3, "static"};
const Enum::YLeaf OspfDistListProtocolEnum::bgp {4, "bgp"};
const Enum::YLeaf OspfDistListProtocolEnum::ospf {7, "ospf"};
const Enum::YLeaf OspfDistListProtocolEnum::dagr {9, "dagr"};

const Enum::YLeaf OspfRouteLevelEnum::type1 {1, "type1"};
const Enum::YLeaf OspfRouteLevelEnum::type2 {2, "type2"};
const Enum::YLeaf OspfRouteLevelEnum::type1_and2 {3, "type1-and2"};

const Enum::YLeaf OspfNetworkEnum::broadcast {1, "broadcast"};
const Enum::YLeaf OspfNetworkEnum::non_broadcast {2, "non-broadcast"};
const Enum::YLeaf OspfNetworkEnum::point_to_point {3, "point-to-point"};
const Enum::YLeaf OspfNetworkEnum::point_to_multipoint {4, "point-to-multipoint"};
const Enum::YLeaf OspfNetworkEnum::non_broadcast_point_to_multipoint {5, "non-broadcast-point-to-multipoint"};

const Enum::YLeaf OspfFrrRlfaTunnelEnum::none {0, "none"};
const Enum::YLeaf OspfFrrRlfaTunnelEnum::mpls_ldp {1, "mpls-ldp"};

const Enum::YLeaf OspfShutdownEnum::full {1, "full"};
const Enum::YLeaf OspfShutdownEnum::hostmode {2, "hostmode"};
const Enum::YLeaf OspfShutdownEnum::onreload {3, "onreload"};

const Enum::YLeaf OspfKeychainAuthEnum::none {0, "none"};
const Enum::YLeaf OspfKeychainAuthEnum::keychain {3, "keychain"};


}
}
