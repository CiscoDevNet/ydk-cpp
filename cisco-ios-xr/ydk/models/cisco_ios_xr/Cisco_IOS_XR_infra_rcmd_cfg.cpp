
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_cfg {

RouterConvergence::RouterConvergence()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    event_buffer_size{YType::uint32, "event-buffer-size"},
    max_events_stored{YType::uint32, "max-events-stored"},
    monitoring_interval{YType::uint32, "monitoring-interval"},
    prefix_monitor_limit{YType::uint32, "prefix-monitor-limit"}
    	,
    collect_diagnostics(std::make_shared<RouterConvergence::CollectDiagnostics>())
	,mpls_ldp(nullptr) // presence node
	,nodes(std::make_shared<RouterConvergence::Nodes>())
	,protocols(std::make_shared<RouterConvergence::Protocols>())
	,storage_location(nullptr) // presence node
{
    collect_diagnostics->parent = this;
    children["collect-diagnostics"] = collect_diagnostics;

    nodes->parent = this;
    children["nodes"] = nodes;

    protocols->parent = this;
    children["protocols"] = protocols;

    yang_name = "router-convergence"; yang_parent_name = "Cisco-IOS-XR-infra-rcmd-cfg";
}

RouterConvergence::~RouterConvergence()
{
}

bool RouterConvergence::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| event_buffer_size.is_set
	|| max_events_stored.is_set
	|| monitoring_interval.is_set
	|| prefix_monitor_limit.is_set
	|| (collect_diagnostics !=  nullptr && collect_diagnostics->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (protocols !=  nullptr && protocols->has_data())
	|| (storage_location !=  nullptr && storage_location->has_data());
}

bool RouterConvergence::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(event_buffer_size.operation)
	|| is_set(max_events_stored.operation)
	|| is_set(monitoring_interval.operation)
	|| is_set(prefix_monitor_limit.operation)
	|| (collect_diagnostics !=  nullptr && collect_diagnostics->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (storage_location !=  nullptr && storage_location->has_operation());
}

std::string RouterConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence";

    return path_buffer.str();

}

EntityPath RouterConvergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (event_buffer_size.is_set || is_set(event_buffer_size.operation)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (max_events_stored.is_set || is_set(max_events_stored.operation)) leaf_name_data.push_back(max_events_stored.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.operation)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());
    if (prefix_monitor_limit.is_set || is_set(prefix_monitor_limit.operation)) leaf_name_data.push_back(prefix_monitor_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collect-diagnostics")
    {
        if(collect_diagnostics != nullptr)
        {
            children["collect-diagnostics"] = collect_diagnostics;
        }
        else
        {
            collect_diagnostics = std::make_shared<RouterConvergence::CollectDiagnostics>();
            collect_diagnostics->parent = this;
            children["collect-diagnostics"] = collect_diagnostics;
        }
        return children.at("collect-diagnostics");
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
        else
        {
            mpls_ldp = std::make_shared<RouterConvergence::MplsLdp>();
            mpls_ldp->parent = this;
            children["mpls-ldp"] = mpls_ldp;
        }
        return children.at("mpls-ldp");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<RouterConvergence::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    if(child_yang_name == "protocols")
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols;
        }
        else
        {
            protocols = std::make_shared<RouterConvergence::Protocols>();
            protocols->parent = this;
            children["protocols"] = protocols;
        }
        return children.at("protocols");
    }

    if(child_yang_name == "storage-location")
    {
        if(storage_location != nullptr)
        {
            children["storage-location"] = storage_location;
        }
        else
        {
            storage_location = std::make_shared<RouterConvergence::StorageLocation>();
            storage_location->parent = this;
            children["storage-location"] = storage_location;
        }
        return children.at("storage-location");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::get_children()
{
    if(children.find("collect-diagnostics") == children.end())
    {
        if(collect_diagnostics != nullptr)
        {
            children["collect-diagnostics"] = collect_diagnostics;
        }
    }

    if(children.find("mpls-ldp") == children.end())
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    if(children.find("protocols") == children.end())
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols;
        }
    }

    if(children.find("storage-location") == children.end())
    {
        if(storage_location != nullptr)
        {
            children["storage-location"] = storage_location;
        }
    }

    return children;
}

void RouterConvergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
    }
    if(value_path == "max-events-stored")
    {
        max_events_stored = value;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval = value;
    }
    if(value_path == "prefix-monitor-limit")
    {
        prefix_monitor_limit = value;
    }
}

std::shared_ptr<Entity> RouterConvergence::clone_ptr() const
{
    return std::make_shared<RouterConvergence>();
}

std::string RouterConvergence::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RouterConvergence::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RouterConvergence::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RouterConvergence::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "router-convergence";
}

RouterConvergence::Protocols::~Protocols()
{
}

bool RouterConvergence::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterConvergence::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

EntityPath RouterConvergence::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterConvergence::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(std::move(c));
        children[segment_path] = protocol.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Protocols::get_children()
{
    for (auto const & c : protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterConvergence::Protocols::set_value(const std::string & value_path, std::string value)
{
}

RouterConvergence::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    enable{YType::empty, "enable"}
    	,
    priorities(std::make_shared<RouterConvergence::Protocols::Protocol::Priorities>())
{
    priorities->parent = this;
    children["priorities"] = priorities;

    yang_name = "protocol"; yang_parent_name = "protocols";
}

RouterConvergence::Protocols::Protocol::~Protocol()
{
}

bool RouterConvergence::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| enable.is_set
	|| (priorities !=  nullptr && priorities->has_data());
}

bool RouterConvergence::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(enable.operation)
	|| (priorities !=  nullptr && priorities->has_operation());
}

std::string RouterConvergence::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath RouterConvergence::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/protocols/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priorities")
    {
        if(priorities != nullptr)
        {
            children["priorities"] = priorities;
        }
        else
        {
            priorities = std::make_shared<RouterConvergence::Protocols::Protocol::Priorities>();
            priorities->parent = this;
            children["priorities"] = priorities;
        }
        return children.at("priorities");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Protocols::Protocol::get_children()
{
    if(children.find("priorities") == children.end())
    {
        if(priorities != nullptr)
        {
            children["priorities"] = priorities;
        }
    }

    return children;
}

void RouterConvergence::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

RouterConvergence::Protocols::Protocol::Priorities::Priorities()
{
    yang_name = "priorities"; yang_parent_name = "protocol";
}

RouterConvergence::Protocols::Protocol::Priorities::~Priorities()
{
}

bool RouterConvergence::Protocols::Protocol::Priorities::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Protocols::Protocol::Priorities::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterConvergence::Protocols::Protocol::Priorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorities";

    return path_buffer.str();

}

EntityPath RouterConvergence::Protocols::Protocol::Priorities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priorities' in Cisco_IOS_XR_infra_rcmd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Protocols::Protocol::Priorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterConvergence::Protocols::Protocol::Priorities::Priority>();
        c->parent = this;
        priority.push_back(std::move(c));
        children[segment_path] = priority.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Protocols::Protocol::Priorities::get_children()
{
    for (auto const & c : priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterConvergence::Protocols::Protocol::Priorities::set_value(const std::string & value_path, std::string value)
{
}

RouterConvergence::Protocols::Protocol::Priorities::Priority::Priority()
    :
    rcmd_priority{YType::enumeration, "rcmd-priority"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    frr_threshold{YType::uint32, "frr-threshold"},
    leaf_networks{YType::uint32, "leaf-networks"},
    threshold{YType::int32, "threshold"}
{
    yang_name = "priority"; yang_parent_name = "priorities";
}

RouterConvergence::Protocols::Protocol::Priorities::Priority::~Priority()
{
}

bool RouterConvergence::Protocols::Protocol::Priorities::Priority::has_data() const
{
    return rcmd_priority.is_set
	|| disable.is_set
	|| enable.is_set
	|| frr_threshold.is_set
	|| leaf_networks.is_set
	|| threshold.is_set;
}

bool RouterConvergence::Protocols::Protocol::Priorities::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(rcmd_priority.operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(frr_threshold.operation)
	|| is_set(leaf_networks.operation)
	|| is_set(threshold.operation);
}

std::string RouterConvergence::Protocols::Protocol::Priorities::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority" <<"[rcmd-priority='" <<rcmd_priority <<"']";

    return path_buffer.str();

}

EntityPath RouterConvergence::Protocols::Protocol::Priorities::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcmd_priority.is_set || is_set(rcmd_priority.operation)) leaf_name_data.push_back(rcmd_priority.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (frr_threshold.is_set || is_set(frr_threshold.operation)) leaf_name_data.push_back(frr_threshold.get_name_leafdata());
    if (leaf_networks.is_set || is_set(leaf_networks.operation)) leaf_name_data.push_back(leaf_networks.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Protocols::Protocol::Priorities::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Protocols::Protocol::Priorities::Priority::get_children()
{
    return children;
}

void RouterConvergence::Protocols::Protocol::Priorities::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rcmd-priority")
    {
        rcmd_priority = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "frr-threshold")
    {
        frr_threshold = value;
    }
    if(value_path == "leaf-networks")
    {
        leaf_networks = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

RouterConvergence::StorageLocation::StorageLocation()
    :
    diagnostics{YType::str, "diagnostics"},
    diagnostics_size{YType::uint32, "diagnostics-size"},
    reports{YType::str, "reports"},
    reports_size{YType::uint32, "reports-size"}
{
    yang_name = "storage-location"; yang_parent_name = "router-convergence";
}

RouterConvergence::StorageLocation::~StorageLocation()
{
}

bool RouterConvergence::StorageLocation::has_data() const
{
    return diagnostics.is_set
	|| diagnostics_size.is_set
	|| reports.is_set
	|| reports_size.is_set;
}

bool RouterConvergence::StorageLocation::has_operation() const
{
    return is_set(operation)
	|| is_set(diagnostics.operation)
	|| is_set(diagnostics_size.operation)
	|| is_set(reports.operation)
	|| is_set(reports_size.operation);
}

std::string RouterConvergence::StorageLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage-location";

    return path_buffer.str();

}

EntityPath RouterConvergence::StorageLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diagnostics.is_set || is_set(diagnostics.operation)) leaf_name_data.push_back(diagnostics.get_name_leafdata());
    if (diagnostics_size.is_set || is_set(diagnostics_size.operation)) leaf_name_data.push_back(diagnostics_size.get_name_leafdata());
    if (reports.is_set || is_set(reports.operation)) leaf_name_data.push_back(reports.get_name_leafdata());
    if (reports_size.is_set || is_set(reports_size.operation)) leaf_name_data.push_back(reports_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::StorageLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::StorageLocation::get_children()
{
    return children;
}

void RouterConvergence::StorageLocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diagnostics")
    {
        diagnostics = value;
    }
    if(value_path == "diagnostics-size")
    {
        diagnostics_size = value;
    }
    if(value_path == "reports")
    {
        reports = value;
    }
    if(value_path == "reports-size")
    {
        reports_size = value;
    }
}

RouterConvergence::MplsLdp::MplsLdp()
    :
    remote_lfa(nullptr) // presence node
{
    yang_name = "mpls-ldp"; yang_parent_name = "router-convergence";
}

RouterConvergence::MplsLdp::~MplsLdp()
{
}

bool RouterConvergence::MplsLdp::has_data() const
{
    return (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool RouterConvergence::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string RouterConvergence::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

EntityPath RouterConvergence::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<RouterConvergence::MplsLdp::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::MplsLdp::get_children()
{
    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void RouterConvergence::MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

RouterConvergence::MplsLdp::RemoteLfa::RemoteLfa()
    :
    threshold{YType::uint32, "threshold"}
{
    yang_name = "remote-lfa"; yang_parent_name = "mpls-ldp";
}

RouterConvergence::MplsLdp::RemoteLfa::~RemoteLfa()
{
}

bool RouterConvergence::MplsLdp::RemoteLfa::has_data() const
{
    return threshold.is_set;
}

bool RouterConvergence::MplsLdp::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string RouterConvergence::MplsLdp::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath RouterConvergence::MplsLdp::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::MplsLdp::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::MplsLdp::RemoteLfa::get_children()
{
    return children;
}

void RouterConvergence::MplsLdp::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

RouterConvergence::CollectDiagnostics::CollectDiagnostics()
{
    yang_name = "collect-diagnostics"; yang_parent_name = "router-convergence";
}

RouterConvergence::CollectDiagnostics::~CollectDiagnostics()
{
}

bool RouterConvergence::CollectDiagnostics::has_data() const
{
    for (std::size_t index=0; index<collect_diagnostic.size(); index++)
    {
        if(collect_diagnostic[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::CollectDiagnostics::has_operation() const
{
    for (std::size_t index=0; index<collect_diagnostic.size(); index++)
    {
        if(collect_diagnostic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterConvergence::CollectDiagnostics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-diagnostics";

    return path_buffer.str();

}

EntityPath RouterConvergence::CollectDiagnostics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::CollectDiagnostics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collect-diagnostic")
    {
        for(auto const & c : collect_diagnostic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterConvergence::CollectDiagnostics::CollectDiagnostic>();
        c->parent = this;
        collect_diagnostic.push_back(std::move(c));
        children[segment_path] = collect_diagnostic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::CollectDiagnostics::get_children()
{
    for (auto const & c : collect_diagnostic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterConvergence::CollectDiagnostics::set_value(const std::string & value_path, std::string value)
{
}

RouterConvergence::CollectDiagnostics::CollectDiagnostic::CollectDiagnostic()
    :
    node_name{YType::str, "node-name"},
    enable{YType::empty, "enable"}
{
    yang_name = "collect-diagnostic"; yang_parent_name = "collect-diagnostics";
}

RouterConvergence::CollectDiagnostics::CollectDiagnostic::~CollectDiagnostic()
{
}

bool RouterConvergence::CollectDiagnostics::CollectDiagnostic::has_data() const
{
    return node_name.is_set
	|| enable.is_set;
}

bool RouterConvergence::CollectDiagnostics::CollectDiagnostic::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(enable.operation);
}

std::string RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-diagnostic" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/collect-diagnostics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_children()
{
    return children;
}

void RouterConvergence::CollectDiagnostics::CollectDiagnostic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

RouterConvergence::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "router-convergence";
}

RouterConvergence::Nodes::~Nodes()
{
}

bool RouterConvergence::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterConvergence::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath RouterConvergence::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterConvergence::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterConvergence::Nodes::set_value(const std::string & value_path, std::string value)
{
}

RouterConvergence::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

RouterConvergence::Nodes::Node::~Node()
{
}

bool RouterConvergence::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool RouterConvergence::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation);
}

std::string RouterConvergence::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath RouterConvergence::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterConvergence::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RouterConvergence::Nodes::Node::get_children()
{
    return children;
}

void RouterConvergence::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

const Enum::YLeaf RcmdPriorityEnum::critical {0, "critical"};
const Enum::YLeaf RcmdPriorityEnum::high {1, "high"};
const Enum::YLeaf RcmdPriorityEnum::medium {2, "medium"};
const Enum::YLeaf RcmdPriorityEnum::low {3, "low"};

const Enum::YLeaf ProtocolNameEnum::ospf {0, "ospf"};
const Enum::YLeaf ProtocolNameEnum::isis {1, "isis"};


}
}

