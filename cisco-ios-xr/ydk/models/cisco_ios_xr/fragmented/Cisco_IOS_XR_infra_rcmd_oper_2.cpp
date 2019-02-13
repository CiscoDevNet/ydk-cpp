
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    lsr_id{YType::str, "lsr-id"},
    transport_address{YType::str, "transport-address"},
    in_use_time{YType::str, "in-use-time"},
    session_state{YType::enumeration, "session-state"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    protected_path_count{YType::uint32, "protected-path-count"}
{

    yang_name = "remote-node"; yang_parent_name = "remote-lfa-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    return remote_node_id.is_set
	|| lsr_id.is_set
	|| transport_address.is_set
	|| in_use_time.is_set
	|| session_state.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| remote_label_count.is_set
	|| protected_route_count.is_set
	|| protected_path_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(transport_address.yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-node-id" || name == "lsr-id" || name == "transport-address" || name == "in-use-time" || name == "session-state" || name == "route-count" || name == "path-count" || name == "remote-label-count" || name == "protected-route-count" || name == "protected-path-count")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::Logs()
    :
    log_time{YType::str, "log-time"},
    label_coverage_state{YType::enumeration, "label-coverage-state"},
    route_count{YType::uint32, "route-count"},
    remote_label_count{YType::uint32, "remote-label-count"}
{

    yang_name = "logs"; yang_parent_name = "remote-lfa-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::~Logs()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::has_data() const
{
    if (is_presence_container) return true;
    return log_time.is_set
	|| label_coverage_state.is_set
	|| route_count.is_set
	|| remote_label_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(label_coverage_state.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (label_coverage_state.is_set || is_set(label_coverage_state.yfilter)) leaf_name_data.push_back(label_coverage_state.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-coverage-state")
    {
        label_coverage_state = value;
        label_coverage_state.value_namespace = name_space;
        label_coverage_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "label-coverage-state")
    {
        label_coverage_state.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-time" || name == "label-coverage-state" || name == "route-count" || name == "remote-label-count")
        return true;
    return false;
}

Rcmd::Intf::Intf()
    :
    events(std::make_shared<Rcmd::Intf::Events>())
{
    events->parent = this;

    yang_name = "intf"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Intf::~Intf()
{
}

bool Rcmd::Intf::has_data() const
{
    if (is_presence_container) return true;
    return (events !=  nullptr && events->has_data());
}

bool Rcmd::Intf::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation());
}

std::string Rcmd::Intf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Intf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Intf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Intf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Rcmd::Intf::Events>();
        }
        return events;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Intf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events != nullptr)
    {
        _children["events"] = events;
    }

    return _children;
}

void Rcmd::Intf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Intf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Intf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Rcmd::Intf::Events::Events()
    :
    event(this, {"event_no"})
{

    yang_name = "events"; yang_parent_name = "intf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Intf::Events::~Events()
{
}

bool Rcmd::Intf::Events::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Intf::Events::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Intf::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/intf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Intf::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Intf::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Intf::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Rcmd::Intf::Events::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Intf::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Intf::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Intf::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Intf::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Rcmd::Intf::Events::Event::Event()
    :
    event_no{YType::uint32, "event-no"},
    sequence_no{YType::uint32, "sequence-no"},
    interface_name{YType::str, "interface-name"},
    component{YType::enumeration, "component"},
    event_type{YType::enumeration, "event-type"},
    event_time{YType::str, "event-time"},
    primary_address{YType::str, "primary-address"}
{

    yang_name = "event"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Intf::Events::Event::~Event()
{
}

bool Rcmd::Intf::Events::Event::has_data() const
{
    if (is_presence_container) return true;
    return event_no.is_set
	|| sequence_no.is_set
	|| interface_name.is_set
	|| component.is_set
	|| event_type.is_set
	|| event_time.is_set
	|| primary_address.is_set;
}

bool Rcmd::Intf::Events::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_no.yfilter)
	|| ydk::is_set(sequence_no.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(primary_address.yfilter);
}

std::string Rcmd::Intf::Events::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/intf/events/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Intf::Events::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(event_no, "event-no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Intf::Events::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_no.is_set || is_set(event_no.yfilter)) leaf_name_data.push_back(event_no.get_name_leafdata());
    if (sequence_no.is_set || is_set(sequence_no.yfilter)) leaf_name_data.push_back(sequence_no.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Intf::Events::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Intf::Events::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Intf::Events::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-no")
    {
        event_no = value;
        event_no.value_namespace = name_space;
        event_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-no")
    {
        sequence_no = value;
        sequence_no.value_namespace = name_space;
        sequence_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Intf::Events::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-no")
    {
        event_no.yfilter = yfilter;
    }
    if(value_path == "sequence-no")
    {
        sequence_no.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
}

bool Rcmd::Intf::Events::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-no" || name == "sequence-no" || name == "interface-name" || name == "component" || name == "event-type" || name == "event-time" || name == "primary-address")
        return true;
    return false;
}

Rcmd::Process::Process()
    :
    isis(std::make_shared<Rcmd::Process::Isis>())
    , ospf(std::make_shared<Rcmd::Process::Ospf>())
    , ldp(std::make_shared<Rcmd::Process::Ldp>())
{
    isis->parent = this;
    ospf->parent = this;
    ldp->parent = this;

    yang_name = "process"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::~Process()
{
}

bool Rcmd::Process::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Rcmd::Process::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Rcmd::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Rcmd::Process::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Rcmd::Process::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Rcmd::Process::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    return _children;
}

void Rcmd::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "ldp")
        return true;
    return false;
}

Rcmd::Process::Isis::Isis()
    :
    process(this, {})
{

    yang_name = "isis"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Isis::~Isis()
{
}

bool Rcmd::Process::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Isis::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Process::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Isis::Process_>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Process::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Process::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Rcmd::Process::Isis::Process_::Process_()
    :
    protocol_id{YType::enumeration, "protocol-id"},
    process_name{YType::str, "process-name"}
        ,
    instance_name(this, {})
{

    yang_name = "process"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Isis::Process_::~Process_()
{
}

bool Rcmd::Process::Isis::Process_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return protocol_id.is_set
	|| process_name.is_set;
}

bool Rcmd::Process::Isis::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Rcmd::Process::Isis::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Isis::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Isis::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Isis::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-name")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Isis::Process_::InstanceName>();
        ent_->parent = this;
        instance_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Isis::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Isis::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Isis::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Rcmd::Process::Isis::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "protocol-id" || name == "process-name")
        return true;
    return false;
}

Rcmd::Process::Isis::Process_::InstanceName::InstanceName()
    :
    name{YType::str, "name"},
    last_update_time{YType::str, "last-update-time"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"}
        ,
    instance(this, {})
{

    yang_name = "instance-name"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Isis::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Isis::Process_::InstanceName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| last_update_time.is_set
	|| total_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| arch_spf_event.is_set
	|| arch_lsp_regeneration.is_set;
}

bool Rcmd::Process::Isis::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(lsp_regeneration_count.yfilter)
	|| ydk::is_set(lsp_regeneration_serial.yfilter)
	|| ydk::is_set(arch_spf_event.yfilter)
	|| ydk::is_set(arch_lsp_regeneration.yfilter);
}

std::string Rcmd::Process::Isis::Process_::InstanceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Isis::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Isis::Process_::InstanceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.yfilter)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.yfilter)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.yfilter)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.yfilter)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Isis::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Isis::Process_::InstanceName::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Isis::Process_::InstanceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Isis::Process_::InstanceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
        lsp_regeneration_count.value_namespace = name_space;
        lsp_regeneration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
        lsp_regeneration_serial.value_namespace = name_space;
        lsp_regeneration_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
        arch_spf_event.value_namespace = name_space;
        arch_spf_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
        arch_lsp_regeneration.value_namespace = name_space;
        arch_lsp_regeneration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Isis::Process_::InstanceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial.yfilter = yfilter;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event.yfilter = yfilter;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration.yfilter = yfilter;
    }
}

bool Rcmd::Process::Isis::Process_::InstanceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "name" || name == "last-update-time" || name == "total-spf-nos" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "lsp-regeneration-count" || name == "lsp-regeneration-serial" || name == "arch-spf-event" || name == "arch-lsp-regeneration")
        return true;
    return false;
}

Rcmd::Process::Isis::Process_::InstanceName::Instance::Instance()
    :
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    last_update_time{YType::str, "last-update-time"},
    node_id{YType::uint32, "node-id"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    arch_spf_run{YType::uint32, "arch-spf-run"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{

    yang_name = "instance"; yang_parent_name = "instance-name"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Isis::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Isis::Process_::InstanceName::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| instance_state.is_set
	|| instance_deleted.is_set
	|| fwd_referenced.is_set
	|| last_update_time.is_set
	|| node_id.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| arch_spf_run.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Isis::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(instance_deleted.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(spf_offset.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(arch_spf_run.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(total_spt_nos.yfilter);
}

std::string Rcmd::Process::Isis::Process_::InstanceName::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/isis/process/instance-name/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Isis::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Isis::Process_::InstanceName::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.yfilter)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.yfilter)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (arch_spf_run.is_set || is_set(arch_spf_run.yfilter)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.yfilter)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Isis::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Isis::Process_::InstanceName::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Process::Isis::Process_::InstanceName::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
        instance_deleted.value_namespace = name_space;
        instance_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
        spf_offset.value_namespace = name_space;
        spf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
        arch_spf_run.value_namespace = name_space;
        arch_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
        total_spt_nos.value_namespace = name_space;
        total_spt_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Isis::Process_::InstanceName::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "spf-offset")
    {
        spf_offset.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Isis::Process_::InstanceName::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instance-state" || name == "instance-deleted" || name == "fwd-referenced" || name == "last-update-time" || name == "node-id" || name == "spf-offset" || name == "total-spf-nos" || name == "arch-spf-run" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "total-spt-nos")
        return true;
    return false;
}

Rcmd::Process::Ospf::Ospf()
    :
    process(this, {})
{

    yang_name = "ospf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ospf::~Ospf()
{
}

bool Rcmd::Process::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Process::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ospf::Process_>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Process::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Process::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::Process_()
    :
    protocol_id{YType::enumeration, "protocol-id"},
    process_name{YType::str, "process-name"}
        ,
    instance_name(this, {})
{

    yang_name = "process"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ospf::Process_::~Process_()
{
}

bool Rcmd::Process::Ospf::Process_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return protocol_id.is_set
	|| process_name.is_set;
}

bool Rcmd::Process::Ospf::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ospf::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-name")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName>();
        ent_->parent = this;
        instance_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ospf::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ospf::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "protocol-id" || name == "process-name")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::InstanceName::InstanceName()
    :
    name{YType::str, "name"},
    last_update_time{YType::str, "last-update-time"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"}
        ,
    instance(this, {})
{

    yang_name = "instance-name"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ospf::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| last_update_time.is_set
	|| total_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| arch_spf_event.is_set
	|| arch_lsp_regeneration.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(lsp_regeneration_count.yfilter)
	|| ydk::is_set(lsp_regeneration_serial.yfilter)
	|| ydk::is_set(arch_spf_event.yfilter)
	|| ydk::is_set(arch_lsp_regeneration.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::InstanceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.yfilter)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.yfilter)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.yfilter)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.yfilter)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ospf::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ospf::Process_::InstanceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ospf::Process_::InstanceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
        lsp_regeneration_count.value_namespace = name_space;
        lsp_regeneration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
        lsp_regeneration_serial.value_namespace = name_space;
        lsp_regeneration_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
        arch_spf_event.value_namespace = name_space;
        arch_spf_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
        arch_lsp_regeneration.value_namespace = name_space;
        arch_lsp_regeneration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::InstanceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial.yfilter = yfilter;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event.yfilter = yfilter;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "name" || name == "last-update-time" || name == "total-spf-nos" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "lsp-regeneration-count" || name == "lsp-regeneration-serial" || name == "arch-spf-event" || name == "arch-lsp-regeneration")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::Instance()
    :
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    last_update_time{YType::str, "last-update-time"},
    node_id{YType::uint32, "node-id"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    arch_spf_run{YType::uint32, "arch-spf-run"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{

    yang_name = "instance"; yang_parent_name = "instance-name"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| instance_state.is_set
	|| instance_deleted.is_set
	|| fwd_referenced.is_set
	|| last_update_time.is_set
	|| node_id.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| arch_spf_run.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(instance_deleted.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(spf_offset.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(arch_spf_run.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(total_spt_nos.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/instance-name/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.yfilter)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.yfilter)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (arch_spf_run.is_set || is_set(arch_spf_run.yfilter)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.yfilter)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Process::Ospf::Process_::InstanceName::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
        instance_deleted.value_namespace = name_space;
        instance_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
        spf_offset.value_namespace = name_space;
        spf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
        arch_spf_run.value_namespace = name_space;
        arch_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
        total_spt_nos.value_namespace = name_space;
        total_spt_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::InstanceName::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "spf-offset")
    {
        spf_offset.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instance-state" || name == "instance-deleted" || name == "fwd-referenced" || name == "last-update-time" || name == "node-id" || name == "spf-offset" || name == "total-spf-nos" || name == "arch-spf-run" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "total-spt-nos")
        return true;
    return false;
}

Rcmd::Process::Ldp::Ldp()
    :
    process(this, {})
{

    yang_name = "ldp"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ldp::~Ldp()
{
}

bool Rcmd::Process::Ldp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Ldp::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Process::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ldp::Process_>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Process::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Process::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Rcmd::Process::Ldp::Process_::Process_()
    :
    protocol_id{YType::enumeration, "protocol-id"},
    process_name{YType::str, "process-name"}
        ,
    instance_name(this, {})
{

    yang_name = "process"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ldp::Process_::~Process_()
{
}

bool Rcmd::Process::Ldp::Process_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return protocol_id.is_set
	|| process_name.is_set;
}

bool Rcmd::Process::Ldp::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.len(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ldp::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-name")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName>();
        ent_->parent = this;
        instance_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ldp::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ldp::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "protocol-id" || name == "process-name")
        return true;
    return false;
}

Rcmd::Process::Ldp::Process_::InstanceName::InstanceName()
    :
    name{YType::str, "name"},
    last_update_time{YType::str, "last-update-time"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"}
        ,
    instance(this, {})
{

    yang_name = "instance-name"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ldp::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| last_update_time.is_set
	|| total_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| arch_spf_event.is_set
	|| arch_lsp_regeneration.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(lsp_regeneration_count.yfilter)
	|| ydk::is_set(lsp_regeneration_serial.yfilter)
	|| ydk::is_set(arch_spf_event.yfilter)
	|| ydk::is_set(arch_lsp_regeneration.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::InstanceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.yfilter)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.yfilter)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.yfilter)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.yfilter)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ldp::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ldp::Process_::InstanceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Process::Ldp::Process_::InstanceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
        lsp_regeneration_count.value_namespace = name_space;
        lsp_regeneration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
        lsp_regeneration_serial.value_namespace = name_space;
        lsp_regeneration_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
        arch_spf_event.value_namespace = name_space;
        arch_spf_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
        arch_lsp_regeneration.value_namespace = name_space;
        arch_lsp_regeneration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::InstanceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial.yfilter = yfilter;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event.yfilter = yfilter;
    }
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "name" || name == "last-update-time" || name == "total-spf-nos" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "lsp-regeneration-count" || name == "lsp-regeneration-serial" || name == "arch-spf-event" || name == "arch-lsp-regeneration")
        return true;
    return false;
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::Instance()
    :
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    last_update_time{YType::str, "last-update-time"},
    node_id{YType::uint32, "node-id"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    arch_spf_run{YType::uint32, "arch-spf-run"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{

    yang_name = "instance"; yang_parent_name = "instance-name"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| instance_state.is_set
	|| instance_deleted.is_set
	|| fwd_referenced.is_set
	|| last_update_time.is_set
	|| node_id.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| arch_spf_run.is_set
	|| route_change_spf_nos.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(instance_deleted.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(spf_offset.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(arch_spf_run.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(total_spt_nos.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/instance-name/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.yfilter)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.yfilter)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (arch_spf_run.is_set || is_set(arch_spf_run.yfilter)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.yfilter)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Process::Ldp::Process_::InstanceName::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
        instance_deleted.value_namespace = name_space;
        instance_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
        spf_offset.value_namespace = name_space;
        spf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
        arch_spf_run.value_namespace = name_space;
        arch_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
        total_spt_nos.value_namespace = name_space;
        total_spt_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::InstanceName::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "spf-offset")
    {
        spf_offset.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "arch-spf-run")
    {
        arch_spf_run.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instance-state" || name == "instance-deleted" || name == "fwd-referenced" || name == "last-update-time" || name == "node-id" || name == "spf-offset" || name == "total-spf-nos" || name == "arch-spf-run" || name == "route-change-spf-nos" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "total-spt-nos")
        return true;
    return false;
}


}
}

