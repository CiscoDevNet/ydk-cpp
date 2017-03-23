
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    lsr_id{YType::str, "lsr-id"},
    path_count{YType::uint32, "path-count"},
    protected_path_count{YType::uint32, "protected-path-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    remote_node_id{YType::str, "remote-node-id"},
    route_count{YType::uint32, "route-count"},
    session_state{YType::enumeration, "session-state"},
    transport_address{YType::str, "transport-address"}
{
    yang_name = "remote-node"; yang_parent_name = "remote-lfa-summary";
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::has_data() const
{
    return in_use_time.is_set
	|| lsr_id.is_set
	|| path_count.is_set
	|| protected_path_count.is_set
	|| protected_route_count.is_set
	|| remote_label_count.is_set
	|| remote_node_id.is_set
	|| route_count.is_set
	|| session_state.is_set
	|| transport_address.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::has_operation() const
{
    return is_set(operation)
	|| is_set(in_use_time.operation)
	|| is_set(lsr_id.operation)
	|| is_set(path_count.operation)
	|| is_set(protected_path_count.operation)
	|| is_set(protected_route_count.operation)
	|| is_set(remote_label_count.operation)
	|| is_set(remote_node_id.operation)
	|| is_set(route_count.operation)
	|| is_set(session_state.operation)
	|| is_set(transport_address.operation);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

EntityPath Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.operation)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.operation)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.operation)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.operation)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.operation)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (transport_address.is_set || is_set(transport_address.operation)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_children()
{
    return children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "transport-address")
    {
        transport_address = value;
    }
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::Logs()
    :
    label_coverage_state{YType::enumeration, "label-coverage-state"},
    log_time{YType::str, "log-time"},
    remote_label_count{YType::uint32, "remote-label-count"},
    route_count{YType::uint32, "route-count"}
{
    yang_name = "logs"; yang_parent_name = "remote-lfa-summary";
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::~Logs()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::has_data() const
{
    return label_coverage_state.is_set
	|| log_time.is_set
	|| remote_label_count.is_set
	|| route_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::has_operation() const
{
    return is_set(operation)
	|| is_set(label_coverage_state.operation)
	|| is_set(log_time.operation)
	|| is_set(remote_label_count.operation)
	|| is_set(route_count.operation);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

EntityPath Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logs' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_coverage_state.is_set || is_set(label_coverage_state.operation)) leaf_name_data.push_back(label_coverage_state.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.operation)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_children()
{
    return children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-coverage-state")
    {
        label_coverage_state = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
}

Rcmd::Intf::Intf()
    :
    events(std::make_shared<Rcmd::Intf::Events>())
{
    events->parent = this;
    children["events"] = events;

    yang_name = "intf"; yang_parent_name = "rcmd";
}

Rcmd::Intf::~Intf()
{
}

bool Rcmd::Intf::has_data() const
{
    return (events !=  nullptr && events->has_data());
}

bool Rcmd::Intf::has_operation() const
{
    return is_set(operation)
	|| (events !=  nullptr && events->has_operation());
}

std::string Rcmd::Intf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf";

    return path_buffer.str();

}

EntityPath Rcmd::Intf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Intf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "events")
    {
        if(events != nullptr)
        {
            children["events"] = events;
        }
        else
        {
            events = std::make_shared<Rcmd::Intf::Events>();
            events->parent = this;
            children["events"] = events;
        }
        return children.at("events");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Intf::get_children()
{
    if(children.find("events") == children.end())
    {
        if(events != nullptr)
        {
            children["events"] = events;
        }
    }

    return children;
}

void Rcmd::Intf::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Intf::Events::Events()
{
    yang_name = "events"; yang_parent_name = "intf";
}

Rcmd::Intf::Events::~Events()
{
}

bool Rcmd::Intf::Events::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Intf::Events::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rcmd::Intf::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";

    return path_buffer.str();

}

EntityPath Rcmd::Intf::Events::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/intf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Intf::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rcmd::Intf::Events::Event>();
        c->parent = this;
        event.push_back(std::move(c));
        children[segment_path] = event.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Intf::Events::get_children()
{
    for (auto const & c : event)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rcmd::Intf::Events::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Intf::Events::Event::Event()
    :
    event_no{YType::int32, "event-no"},
    component{YType::enumeration, "component"},
    event_time{YType::str, "event-time"},
    event_type{YType::enumeration, "event-type"},
    interface_name{YType::str, "interface-name"},
    primary_address{YType::str, "primary-address"},
    sequence_no{YType::uint32, "sequence-no"}
{
    yang_name = "event"; yang_parent_name = "events";
}

Rcmd::Intf::Events::Event::~Event()
{
}

bool Rcmd::Intf::Events::Event::has_data() const
{
    return event_no.is_set
	|| component.is_set
	|| event_time.is_set
	|| event_type.is_set
	|| interface_name.is_set
	|| primary_address.is_set
	|| sequence_no.is_set;
}

bool Rcmd::Intf::Events::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(event_no.operation)
	|| is_set(component.operation)
	|| is_set(event_time.operation)
	|| is_set(event_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(primary_address.operation)
	|| is_set(sequence_no.operation);
}

std::string Rcmd::Intf::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-no='" <<event_no <<"']";

    return path_buffer.str();

}

EntityPath Rcmd::Intf::Events::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/intf/events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_no.is_set || is_set(event_no.operation)) leaf_name_data.push_back(event_no.get_name_leafdata());
    if (component.is_set || is_set(component.operation)) leaf_name_data.push_back(component.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.operation)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.operation)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (sequence_no.is_set || is_set(sequence_no.operation)) leaf_name_data.push_back(sequence_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Intf::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Intf::Events::Event::get_children()
{
    return children;
}

void Rcmd::Intf::Events::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-no")
    {
        event_no = value;
    }
    if(value_path == "component")
    {
        component = value;
    }
    if(value_path == "event-time")
    {
        event_time = value;
    }
    if(value_path == "event-type")
    {
        event_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
    }
    if(value_path == "sequence-no")
    {
        sequence_no = value;
    }
}

Rcmd::Process::Process()
    :
    isis(std::make_shared<Rcmd::Process::Isis>())
	,ldp(std::make_shared<Rcmd::Process::Ldp>())
	,ospf(std::make_shared<Rcmd::Process::Ospf>())
{
    isis->parent = this;
    children["isis"] = isis;

    ldp->parent = this;
    children["ldp"] = ldp;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "process"; yang_parent_name = "rcmd";
}

Rcmd::Process::~Process()
{
}

bool Rcmd::Process::has_data() const
{
    return (isis !=  nullptr && isis->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Rcmd::Process::has_operation() const
{
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Rcmd::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Rcmd::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Rcmd::Process::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ldp")
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp;
        }
        else
        {
            ldp = std::make_shared<Rcmd::Process::Ldp>();
            ldp->parent = this;
            children["ldp"] = ldp;
        }
        return children.at("ldp");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Rcmd::Process::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::get_children()
{
    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ldp") == children.end())
    {
        if(ldp != nullptr)
        {
            children["ldp"] = ldp;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Rcmd::Process::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Process::Isis::Isis()
{
    yang_name = "isis"; yang_parent_name = "process";
}

Rcmd::Process::Isis::~Isis()
{
}

bool Rcmd::Process::Isis::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Isis::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rcmd::Process::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Isis::Process_>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Isis::get_children()
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

void Rcmd::Process::Isis::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Process::Isis::Process_::Process_()
    :
    process_name{YType::str, "process-name"},
    protocol_id{YType::enumeration, "protocol-id"}
{
    yang_name = "process"; yang_parent_name = "isis";
}

Rcmd::Process::Isis::Process_::~Process_()
{
}

bool Rcmd::Process::Isis::Process_::has_data() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| protocol_id.is_set;
}

bool Rcmd::Process::Isis::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(process_name.operation)
	|| is_set(protocol_id.operation);
}

std::string Rcmd::Process::Isis::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Isis::Process_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Isis::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance-name")
    {
        for(auto const & c : instance_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rcmd::Process::Isis::Process_::InstanceName>();
        c->parent = this;
        instance_name.push_back(std::move(c));
        children[segment_path] = instance_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Isis::Process_::get_children()
{
    for (auto const & c : instance_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rcmd::Process::Isis::Process_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
}

Rcmd::Process::Isis::Process_::InstanceName::InstanceName()
    :
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    last_update_time{YType::str, "last-update-time"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    name{YType::str, "name"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    total_spf_nos{YType::uint32, "total-spf-nos"}
{
    yang_name = "instance-name"; yang_parent_name = "process";
}

Rcmd::Process::Isis::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Isis::Process_::InstanceName::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return arch_lsp_regeneration.is_set
	|| arch_spf_event.is_set
	|| last_update_time.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| name.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| total_spf_nos.is_set;
}

bool Rcmd::Process::Isis::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(arch_lsp_regeneration.operation)
	|| is_set(arch_spf_event.operation)
	|| is_set(last_update_time.operation)
	|| is_set(lsp_regeneration_count.operation)
	|| is_set(lsp_regeneration_serial.operation)
	|| is_set(name.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(total_spf_nos.operation);
}

std::string Rcmd::Process::Isis::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Isis::Process_::InstanceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.operation)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.operation)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.operation)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.operation)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Isis::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Isis::Process_::InstanceName::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Isis::Process_::InstanceName::get_children()
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

void Rcmd::Process::Isis::Process_::InstanceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
}

Rcmd::Process::Isis::Process_::InstanceName::Instance::Instance()
    :
    arch_spf_run{YType::uint32, "arch-spf-run"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    last_update_time{YType::str, "last-update-time"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    node_id{YType::uint32, "node-id"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{
    yang_name = "instance"; yang_parent_name = "instance-name";
}

Rcmd::Process::Isis::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Isis::Process_::InstanceName::Instance::has_data() const
{
    return arch_spf_run.is_set
	|| fwd_referenced.is_set
	|| instance_deleted.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| last_update_time.is_set
	|| no_route_change_spf_nos.is_set
	|| node_id.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Isis::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(arch_spf_run.operation)
	|| is_set(fwd_referenced.operation)
	|| is_set(instance_deleted.operation)
	|| is_set(instance_id.operation)
	|| is_set(instance_state.operation)
	|| is_set(last_update_time.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(node_id.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(spf_offset.operation)
	|| is_set(total_spf_nos.operation)
	|| is_set(total_spt_nos.operation);
}

std::string Rcmd::Process::Isis::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Isis::Process_::InstanceName::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/process/instance-name/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_spf_run.is_set || is_set(arch_spf_run.operation)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.operation)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.operation)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.operation)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.operation)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.operation)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Isis::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Isis::Process_::InstanceName::Instance::get_children()
{
    return children;
}

void Rcmd::Process::Isis::Process_::InstanceName::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
    }
}

Rcmd::Process::Ospf::Ospf()
{
    yang_name = "ospf"; yang_parent_name = "process";
}

Rcmd::Process::Ospf::~Ospf()
{
}

bool Rcmd::Process::Ospf::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rcmd::Process::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ospf::get_children()
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

void Rcmd::Process::Ospf::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Process::Ospf::Process_::Process_()
    :
    process_name{YType::str, "process-name"},
    protocol_id{YType::enumeration, "protocol-id"}
{
    yang_name = "process"; yang_parent_name = "ospf";
}

Rcmd::Process::Ospf::Process_::~Process_()
{
}

bool Rcmd::Process::Ospf::Process_::has_data() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| protocol_id.is_set;
}

bool Rcmd::Process::Ospf::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(process_name.operation)
	|| is_set(protocol_id.operation);
}

std::string Rcmd::Process::Ospf::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ospf::Process_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance-name")
    {
        for(auto const & c : instance_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName>();
        c->parent = this;
        instance_name.push_back(std::move(c));
        children[segment_path] = instance_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ospf::Process_::get_children()
{
    for (auto const & c : instance_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rcmd::Process::Ospf::Process_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
}

Rcmd::Process::Ospf::Process_::InstanceName::InstanceName()
    :
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    last_update_time{YType::str, "last-update-time"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    name{YType::str, "name"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    total_spf_nos{YType::uint32, "total-spf-nos"}
{
    yang_name = "instance-name"; yang_parent_name = "process";
}

Rcmd::Process::Ospf::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return arch_lsp_regeneration.is_set
	|| arch_spf_event.is_set
	|| last_update_time.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| name.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| total_spf_nos.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(arch_lsp_regeneration.operation)
	|| is_set(arch_spf_event.operation)
	|| is_set(last_update_time.operation)
	|| is_set(lsp_regeneration_count.operation)
	|| is_set(lsp_regeneration_serial.operation)
	|| is_set(name.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(total_spf_nos.operation);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ospf::Process_::InstanceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.operation)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.operation)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.operation)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.operation)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ospf::Process_::InstanceName::get_children()
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

void Rcmd::Process::Ospf::Process_::InstanceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::Instance()
    :
    arch_spf_run{YType::uint32, "arch-spf-run"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    last_update_time{YType::str, "last-update-time"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    node_id{YType::uint32, "node-id"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{
    yang_name = "instance"; yang_parent_name = "instance-name";
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_data() const
{
    return arch_spf_run.is_set
	|| fwd_referenced.is_set
	|| instance_deleted.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| last_update_time.is_set
	|| no_route_change_spf_nos.is_set
	|| node_id.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(arch_spf_run.operation)
	|| is_set(fwd_referenced.operation)
	|| is_set(instance_deleted.operation)
	|| is_set(instance_id.operation)
	|| is_set(instance_state.operation)
	|| is_set(last_update_time.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(node_id.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(spf_offset.operation)
	|| is_set(total_spf_nos.operation)
	|| is_set(total_spt_nos.operation);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/instance-name/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_spf_run.is_set || is_set(arch_spf_run.operation)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.operation)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.operation)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.operation)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.operation)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.operation)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_children()
{
    return children;
}

void Rcmd::Process::Ospf::Process_::InstanceName::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
    }
}

Rcmd::Process::Ldp::Ldp()
{
    yang_name = "ldp"; yang_parent_name = "process";
}

Rcmd::Process::Ldp::~Ldp()
{
}

bool Rcmd::Process::Ldp::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Ldp::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rcmd::Process::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ldp::Process_>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ldp::get_children()
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

void Rcmd::Process::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Rcmd::Process::Ldp::Process_::Process_()
    :
    process_name{YType::str, "process-name"},
    protocol_id{YType::enumeration, "protocol-id"}
{
    yang_name = "process"; yang_parent_name = "ldp";
}

Rcmd::Process::Ldp::Process_::~Process_()
{
}

bool Rcmd::Process::Ldp::Process_::has_data() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| protocol_id.is_set;
}

bool Rcmd::Process::Ldp::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(process_name.operation)
	|| is_set(protocol_id.operation);
}

std::string Rcmd::Process::Ldp::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ldp::Process_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.operation)) leaf_name_data.push_back(protocol_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance-name")
    {
        for(auto const & c : instance_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName>();
        c->parent = this;
        instance_name.push_back(std::move(c));
        children[segment_path] = instance_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ldp::Process_::get_children()
{
    for (auto const & c : instance_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rcmd::Process::Ldp::Process_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
    }
}

Rcmd::Process::Ldp::Process_::InstanceName::InstanceName()
    :
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    last_update_time{YType::str, "last-update-time"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    name{YType::str, "name"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    total_spf_nos{YType::uint32, "total-spf-nos"}
{
    yang_name = "instance-name"; yang_parent_name = "process";
}

Rcmd::Process::Ldp::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return arch_lsp_regeneration.is_set
	|| arch_spf_event.is_set
	|| last_update_time.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| name.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| total_spf_nos.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(arch_lsp_regeneration.operation)
	|| is_set(arch_spf_event.operation)
	|| is_set(last_update_time.operation)
	|| is_set(lsp_regeneration_count.operation)
	|| is_set(lsp_regeneration_serial.operation)
	|| is_set(name.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(total_spf_nos.operation);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ldp::Process_::InstanceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.operation)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.operation)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.operation)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.operation)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ldp::Process_::InstanceName::get_children()
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

void Rcmd::Process::Ldp::Process_::InstanceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::Instance()
    :
    arch_spf_run{YType::uint32, "arch-spf-run"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    last_update_time{YType::str, "last-update-time"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    node_id{YType::uint32, "node-id"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{
    yang_name = "instance"; yang_parent_name = "instance-name";
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_data() const
{
    return arch_spf_run.is_set
	|| fwd_referenced.is_set
	|| instance_deleted.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| last_update_time.is_set
	|| no_route_change_spf_nos.is_set
	|| node_id.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(arch_spf_run.operation)
	|| is_set(fwd_referenced.operation)
	|| is_set(instance_deleted.operation)
	|| is_set(instance_id.operation)
	|| is_set(instance_state.operation)
	|| is_set(last_update_time.operation)
	|| is_set(no_route_change_spf_nos.operation)
	|| is_set(node_id.operation)
	|| is_set(not_interested_spf_nos.operation)
	|| is_set(route_change_spf_nos.operation)
	|| is_set(spf_offset.operation)
	|| is_set(total_spf_nos.operation)
	|| is_set(total_spt_nos.operation);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/instance-name/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_spf_run.is_set || is_set(arch_spf_run.operation)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.operation)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.operation)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.operation)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.operation)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.operation)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.operation)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.operation)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.operation)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.operation)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_children()
{
    return children;
}

void Rcmd::Process::Ldp::Process_::InstanceName::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
    }
}


}
}

