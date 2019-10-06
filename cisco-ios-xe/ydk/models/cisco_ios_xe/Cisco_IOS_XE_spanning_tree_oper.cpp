
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_spanning_tree_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_spanning_tree_oper {

StpDetails::StpDetails()
    :
    stp_detail(this, {"instance"})
    , stp_global(nullptr) // presence node
{

    yang_name = "stp-details"; yang_parent_name = "Cisco-IOS-XE-spanning-tree-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

StpDetails::~StpDetails()
{
}

bool StpDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stp_detail.len(); index++)
    {
        if(stp_detail[index]->has_data())
            return true;
    }
    return (stp_global !=  nullptr && stp_global->has_data());
}

bool StpDetails::has_operation() const
{
    for (std::size_t index=0; index<stp_detail.len(); index++)
    {
        if(stp_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (stp_global !=  nullptr && stp_global->has_operation());
}

std::string StpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree-oper:stp-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stp-detail")
    {
        auto ent_ = std::make_shared<StpDetails::StpDetail>();
        ent_->parent = this;
        stp_detail.append(ent_);
        return ent_;
    }

    if(child_yang_name == "stp-global")
    {
        if(stp_global == nullptr)
        {
            stp_global = std::make_shared<StpDetails::StpGlobal>();
        }
        return stp_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stp_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(stp_global != nullptr)
    {
        _children["stp-global"] = stp_global;
    }

    return _children;
}

void StpDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StpDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> StpDetails::clone_ptr() const
{
    return std::make_shared<StpDetails>();
}

std::string StpDetails::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StpDetails::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StpDetails::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StpDetails::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StpDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stp-detail" || name == "stp-global")
        return true;
    return false;
}

StpDetails::StpDetail::StpDetail()
    :
    instance{YType::str, "instance"},
    hello_time{YType::int32, "hello-time"},
    max_age{YType::int32, "max-age"},
    forwarding_delay{YType::int32, "forwarding-delay"},
    hold_count{YType::uint32, "hold-count"},
    bridge_priority{YType::uint16, "bridge-priority"},
    bridge_address{YType::str, "bridge-address"},
    designated_root_priority{YType::uint32, "designated-root-priority"},
    designated_root_address{YType::str, "designated-root-address"},
    root_port{YType::uint16, "root-port"},
    root_cost{YType::uint64, "root-cost"},
    hold_time{YType::uint64, "hold-time"},
    topology_changes{YType::uint64, "topology-changes"},
    time_of_last_topology_change{YType::str, "time-of-last-topology-change"}
        ,
    interfaces(std::make_shared<StpDetails::StpDetail::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "stp-detail"; yang_parent_name = "stp-details"; is_top_level_class = false; has_list_ancestor = false; 
}

StpDetails::StpDetail::~StpDetail()
{
}

bool StpDetails::StpDetail::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| forwarding_delay.is_set
	|| hold_count.is_set
	|| bridge_priority.is_set
	|| bridge_address.is_set
	|| designated_root_priority.is_set
	|| designated_root_address.is_set
	|| root_port.is_set
	|| root_cost.is_set
	|| hold_time.is_set
	|| topology_changes.is_set
	|| time_of_last_topology_change.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool StpDetails::StpDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(forwarding_delay.yfilter)
	|| ydk::is_set(hold_count.yfilter)
	|| ydk::is_set(bridge_priority.yfilter)
	|| ydk::is_set(bridge_address.yfilter)
	|| ydk::is_set(designated_root_priority.yfilter)
	|| ydk::is_set(designated_root_address.yfilter)
	|| ydk::is_set(root_port.yfilter)
	|| ydk::is_set(root_cost.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(topology_changes.yfilter)
	|| ydk::is_set(time_of_last_topology_change.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string StpDetails::StpDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree-oper:stp-details/" << get_segment_path();
    return path_buffer.str();
}

std::string StpDetails::StpDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stp-detail";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::StpDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (forwarding_delay.is_set || is_set(forwarding_delay.yfilter)) leaf_name_data.push_back(forwarding_delay.get_name_leafdata());
    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());
    if (bridge_priority.is_set || is_set(bridge_priority.yfilter)) leaf_name_data.push_back(bridge_priority.get_name_leafdata());
    if (bridge_address.is_set || is_set(bridge_address.yfilter)) leaf_name_data.push_back(bridge_address.get_name_leafdata());
    if (designated_root_priority.is_set || is_set(designated_root_priority.yfilter)) leaf_name_data.push_back(designated_root_priority.get_name_leafdata());
    if (designated_root_address.is_set || is_set(designated_root_address.yfilter)) leaf_name_data.push_back(designated_root_address.get_name_leafdata());
    if (root_port.is_set || is_set(root_port.yfilter)) leaf_name_data.push_back(root_port.get_name_leafdata());
    if (root_cost.is_set || is_set(root_cost.yfilter)) leaf_name_data.push_back(root_cost.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (topology_changes.is_set || is_set(topology_changes.yfilter)) leaf_name_data.push_back(topology_changes.get_name_leafdata());
    if (time_of_last_topology_change.is_set || is_set(time_of_last_topology_change.yfilter)) leaf_name_data.push_back(time_of_last_topology_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::StpDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<StpDetails::StpDetail::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::StpDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void StpDetails::StpDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-delay")
    {
        forwarding_delay = value;
        forwarding_delay.value_namespace = name_space;
        forwarding_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-priority")
    {
        bridge_priority = value;
        bridge_priority.value_namespace = name_space;
        bridge_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-address")
    {
        bridge_address = value;
        bridge_address.value_namespace = name_space;
        bridge_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-root-priority")
    {
        designated_root_priority = value;
        designated_root_priority.value_namespace = name_space;
        designated_root_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-root-address")
    {
        designated_root_address = value;
        designated_root_address.value_namespace = name_space;
        designated_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-port")
    {
        root_port = value;
        root_port.value_namespace = name_space;
        root_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-cost")
    {
        root_cost = value;
        root_cost.value_namespace = name_space;
        root_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-changes")
    {
        topology_changes = value;
        topology_changes.value_namespace = name_space;
        topology_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-last-topology-change")
    {
        time_of_last_topology_change = value;
        time_of_last_topology_change.value_namespace = name_space;
        time_of_last_topology_change.value_namespace_prefix = name_space_prefix;
    }
}

void StpDetails::StpDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "forwarding-delay")
    {
        forwarding_delay.yfilter = yfilter;
    }
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
    if(value_path == "bridge-priority")
    {
        bridge_priority.yfilter = yfilter;
    }
    if(value_path == "bridge-address")
    {
        bridge_address.yfilter = yfilter;
    }
    if(value_path == "designated-root-priority")
    {
        designated_root_priority.yfilter = yfilter;
    }
    if(value_path == "designated-root-address")
    {
        designated_root_address.yfilter = yfilter;
    }
    if(value_path == "root-port")
    {
        root_port.yfilter = yfilter;
    }
    if(value_path == "root-cost")
    {
        root_cost.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "topology-changes")
    {
        topology_changes.yfilter = yfilter;
    }
    if(value_path == "time-of-last-topology-change")
    {
        time_of_last_topology_change.yfilter = yfilter;
    }
}

bool StpDetails::StpDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "instance" || name == "hello-time" || name == "max-age" || name == "forwarding-delay" || name == "hold-count" || name == "bridge-priority" || name == "bridge-address" || name == "designated-root-priority" || name == "designated-root-address" || name == "root-port" || name == "root-cost" || name == "hold-time" || name == "topology-changes" || name == "time-of-last-topology-change")
        return true;
    return false;
}

StpDetails::StpDetail::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "stp-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

StpDetails::StpDetail::Interfaces::~Interfaces()
{
}

bool StpDetails::StpDetail::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool StpDetails::StpDetail::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StpDetails::StpDetail::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::StpDetail::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::StpDetail::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<StpDetails::StpDetail::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::StpDetail::Interfaces::get_children() const
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

void StpDetails::StpDetail::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StpDetails::StpDetail::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StpDetails::StpDetail::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

StpDetails::StpDetail::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    cost{YType::uint64, "cost"},
    port_priority{YType::uint16, "port-priority"},
    port_num{YType::uint16, "port-num"},
    role{YType::enumeration, "role"},
    state{YType::enumeration, "state"},
    designated_root_priority{YType::uint32, "designated-root-priority"},
    designated_root_address{YType::str, "designated-root-address"},
    designated_cost{YType::uint32, "designated-cost"},
    designated_bridge_priority{YType::uint32, "designated-bridge-priority"},
    designated_bridge_address{YType::str, "designated-bridge-address"},
    designated_port_priority{YType::uint16, "designated-port-priority"},
    designated_port_num{YType::uint16, "designated-port-num"},
    forward_transitions{YType::uint64, "forward-transitions"},
    link_type{YType::enumeration, "link-type"},
    guard{YType::enumeration, "guard"},
    bpdu_guard{YType::enumeration, "bpdu-guard"},
    bpdu_filter{YType::enumeration, "bpdu-filter"},
    bpdu_sent{YType::uint64, "bpdu-sent"},
    bpdu_received{YType::uint64, "bpdu-received"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

StpDetails::StpDetail::Interfaces::Interface::~Interface()
{
}

bool StpDetails::StpDetail::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cost.is_set
	|| port_priority.is_set
	|| port_num.is_set
	|| role.is_set
	|| state.is_set
	|| designated_root_priority.is_set
	|| designated_root_address.is_set
	|| designated_cost.is_set
	|| designated_bridge_priority.is_set
	|| designated_bridge_address.is_set
	|| designated_port_priority.is_set
	|| designated_port_num.is_set
	|| forward_transitions.is_set
	|| link_type.is_set
	|| guard.is_set
	|| bpdu_guard.is_set
	|| bpdu_filter.is_set
	|| bpdu_sent.is_set
	|| bpdu_received.is_set;
}

bool StpDetails::StpDetail::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(designated_root_priority.yfilter)
	|| ydk::is_set(designated_root_address.yfilter)
	|| ydk::is_set(designated_cost.yfilter)
	|| ydk::is_set(designated_bridge_priority.yfilter)
	|| ydk::is_set(designated_bridge_address.yfilter)
	|| ydk::is_set(designated_port_priority.yfilter)
	|| ydk::is_set(designated_port_num.yfilter)
	|| ydk::is_set(forward_transitions.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(bpdu_guard.yfilter)
	|| ydk::is_set(bpdu_filter.yfilter)
	|| ydk::is_set(bpdu_sent.yfilter)
	|| ydk::is_set(bpdu_received.yfilter);
}

std::string StpDetails::StpDetail::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::StpDetail::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (designated_root_priority.is_set || is_set(designated_root_priority.yfilter)) leaf_name_data.push_back(designated_root_priority.get_name_leafdata());
    if (designated_root_address.is_set || is_set(designated_root_address.yfilter)) leaf_name_data.push_back(designated_root_address.get_name_leafdata());
    if (designated_cost.is_set || is_set(designated_cost.yfilter)) leaf_name_data.push_back(designated_cost.get_name_leafdata());
    if (designated_bridge_priority.is_set || is_set(designated_bridge_priority.yfilter)) leaf_name_data.push_back(designated_bridge_priority.get_name_leafdata());
    if (designated_bridge_address.is_set || is_set(designated_bridge_address.yfilter)) leaf_name_data.push_back(designated_bridge_address.get_name_leafdata());
    if (designated_port_priority.is_set || is_set(designated_port_priority.yfilter)) leaf_name_data.push_back(designated_port_priority.get_name_leafdata());
    if (designated_port_num.is_set || is_set(designated_port_num.yfilter)) leaf_name_data.push_back(designated_port_num.get_name_leafdata());
    if (forward_transitions.is_set || is_set(forward_transitions.yfilter)) leaf_name_data.push_back(forward_transitions.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (bpdu_guard.is_set || is_set(bpdu_guard.yfilter)) leaf_name_data.push_back(bpdu_guard.get_name_leafdata());
    if (bpdu_filter.is_set || is_set(bpdu_filter.yfilter)) leaf_name_data.push_back(bpdu_filter.get_name_leafdata());
    if (bpdu_sent.is_set || is_set(bpdu_sent.yfilter)) leaf_name_data.push_back(bpdu_sent.get_name_leafdata());
    if (bpdu_received.is_set || is_set(bpdu_received.yfilter)) leaf_name_data.push_back(bpdu_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::StpDetail::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::StpDetail::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StpDetails::StpDetail::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-root-priority")
    {
        designated_root_priority = value;
        designated_root_priority.value_namespace = name_space;
        designated_root_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-root-address")
    {
        designated_root_address = value;
        designated_root_address.value_namespace = name_space;
        designated_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-cost")
    {
        designated_cost = value;
        designated_cost.value_namespace = name_space;
        designated_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-bridge-priority")
    {
        designated_bridge_priority = value;
        designated_bridge_priority.value_namespace = name_space;
        designated_bridge_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-bridge-address")
    {
        designated_bridge_address = value;
        designated_bridge_address.value_namespace = name_space;
        designated_bridge_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-port-priority")
    {
        designated_port_priority = value;
        designated_port_priority.value_namespace = name_space;
        designated_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-port-num")
    {
        designated_port_num = value;
        designated_port_num.value_namespace = name_space;
        designated_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-transitions")
    {
        forward_transitions = value;
        forward_transitions.value_namespace = name_space;
        forward_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-guard")
    {
        bpdu_guard = value;
        bpdu_guard.value_namespace = name_space;
        bpdu_guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-filter")
    {
        bpdu_filter = value;
        bpdu_filter.value_namespace = name_space;
        bpdu_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-sent")
    {
        bpdu_sent = value;
        bpdu_sent.value_namespace = name_space;
        bpdu_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-received")
    {
        bpdu_received = value;
        bpdu_received.value_namespace = name_space;
        bpdu_received.value_namespace_prefix = name_space_prefix;
    }
}

void StpDetails::StpDetail::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "designated-root-priority")
    {
        designated_root_priority.yfilter = yfilter;
    }
    if(value_path == "designated-root-address")
    {
        designated_root_address.yfilter = yfilter;
    }
    if(value_path == "designated-cost")
    {
        designated_cost.yfilter = yfilter;
    }
    if(value_path == "designated-bridge-priority")
    {
        designated_bridge_priority.yfilter = yfilter;
    }
    if(value_path == "designated-bridge-address")
    {
        designated_bridge_address.yfilter = yfilter;
    }
    if(value_path == "designated-port-priority")
    {
        designated_port_priority.yfilter = yfilter;
    }
    if(value_path == "designated-port-num")
    {
        designated_port_num.yfilter = yfilter;
    }
    if(value_path == "forward-transitions")
    {
        forward_transitions.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "bpdu-guard")
    {
        bpdu_guard.yfilter = yfilter;
    }
    if(value_path == "bpdu-filter")
    {
        bpdu_filter.yfilter = yfilter;
    }
    if(value_path == "bpdu-sent")
    {
        bpdu_sent.yfilter = yfilter;
    }
    if(value_path == "bpdu-received")
    {
        bpdu_received.yfilter = yfilter;
    }
}

bool StpDetails::StpDetail::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cost" || name == "port-priority" || name == "port-num" || name == "role" || name == "state" || name == "designated-root-priority" || name == "designated-root-address" || name == "designated-cost" || name == "designated-bridge-priority" || name == "designated-bridge-address" || name == "designated-port-priority" || name == "designated-port-num" || name == "forward-transitions" || name == "link-type" || name == "guard" || name == "bpdu-guard" || name == "bpdu-filter" || name == "bpdu-sent" || name == "bpdu-received")
        return true;
    return false;
}

StpDetails::StpGlobal::StpGlobal()
    :
    mode{YType::enumeration, "mode"},
    bridge_assurance{YType::empty, "bridge-assurance"},
    loop_guard{YType::empty, "loop-guard"},
    bpdu_guard{YType::empty, "bpdu-guard"},
    bpdu_filter{YType::empty, "bpdu-filter"},
    etherchannel_misconfig_guard{YType::empty, "etherchannel-misconfig-guard"}
        ,
    mst_only(std::make_shared<StpDetails::StpGlobal::MstOnly>())
{
    mst_only->parent = this;

    yang_name = "stp-global"; yang_parent_name = "stp-details"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

StpDetails::StpGlobal::~StpGlobal()
{
}

bool StpDetails::StpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| bridge_assurance.is_set
	|| loop_guard.is_set
	|| bpdu_guard.is_set
	|| bpdu_filter.is_set
	|| etherchannel_misconfig_guard.is_set
	|| (mst_only !=  nullptr && mst_only->has_data());
}

bool StpDetails::StpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(bridge_assurance.yfilter)
	|| ydk::is_set(loop_guard.yfilter)
	|| ydk::is_set(bpdu_guard.yfilter)
	|| ydk::is_set(bpdu_filter.yfilter)
	|| ydk::is_set(etherchannel_misconfig_guard.yfilter)
	|| (mst_only !=  nullptr && mst_only->has_operation());
}

std::string StpDetails::StpGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree-oper:stp-details/" << get_segment_path();
    return path_buffer.str();
}

std::string StpDetails::StpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stp-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::StpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (bridge_assurance.is_set || is_set(bridge_assurance.yfilter)) leaf_name_data.push_back(bridge_assurance.get_name_leafdata());
    if (loop_guard.is_set || is_set(loop_guard.yfilter)) leaf_name_data.push_back(loop_guard.get_name_leafdata());
    if (bpdu_guard.is_set || is_set(bpdu_guard.yfilter)) leaf_name_data.push_back(bpdu_guard.get_name_leafdata());
    if (bpdu_filter.is_set || is_set(bpdu_filter.yfilter)) leaf_name_data.push_back(bpdu_filter.get_name_leafdata());
    if (etherchannel_misconfig_guard.is_set || is_set(etherchannel_misconfig_guard.yfilter)) leaf_name_data.push_back(etherchannel_misconfig_guard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::StpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-only")
    {
        if(mst_only == nullptr)
        {
            mst_only = std::make_shared<StpDetails::StpGlobal::MstOnly>();
        }
        return mst_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::StpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mst_only != nullptr)
    {
        _children["mst-only"] = mst_only;
    }

    return _children;
}

void StpDetails::StpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-assurance")
    {
        bridge_assurance = value;
        bridge_assurance.value_namespace = name_space;
        bridge_assurance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-guard")
    {
        loop_guard = value;
        loop_guard.value_namespace = name_space;
        loop_guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-guard")
    {
        bpdu_guard = value;
        bpdu_guard.value_namespace = name_space;
        bpdu_guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdu-filter")
    {
        bpdu_filter = value;
        bpdu_filter.value_namespace = name_space;
        bpdu_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherchannel-misconfig-guard")
    {
        etherchannel_misconfig_guard = value;
        etherchannel_misconfig_guard.value_namespace = name_space;
        etherchannel_misconfig_guard.value_namespace_prefix = name_space_prefix;
    }
}

void StpDetails::StpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "bridge-assurance")
    {
        bridge_assurance.yfilter = yfilter;
    }
    if(value_path == "loop-guard")
    {
        loop_guard.yfilter = yfilter;
    }
    if(value_path == "bpdu-guard")
    {
        bpdu_guard.yfilter = yfilter;
    }
    if(value_path == "bpdu-filter")
    {
        bpdu_filter.yfilter = yfilter;
    }
    if(value_path == "etherchannel-misconfig-guard")
    {
        etherchannel_misconfig_guard.yfilter = yfilter;
    }
}

bool StpDetails::StpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-only" || name == "mode" || name == "bridge-assurance" || name == "loop-guard" || name == "bpdu-guard" || name == "bpdu-filter" || name == "etherchannel-misconfig-guard")
        return true;
    return false;
}

StpDetails::StpGlobal::MstOnly::MstOnly()
    :
    mst_config_revision{YType::uint16, "mst-config-revision"},
    mst_config_name{YType::str, "mst-config-name"},
    max_hops{YType::uint16, "max-hops"}
{

    yang_name = "mst-only"; yang_parent_name = "stp-global"; is_top_level_class = false; has_list_ancestor = false; 
}

StpDetails::StpGlobal::MstOnly::~MstOnly()
{
}

bool StpDetails::StpGlobal::MstOnly::has_data() const
{
    if (is_presence_container) return true;
    return mst_config_revision.is_set
	|| mst_config_name.is_set
	|| max_hops.is_set;
}

bool StpDetails::StpGlobal::MstOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst_config_revision.yfilter)
	|| ydk::is_set(mst_config_name.yfilter)
	|| ydk::is_set(max_hops.yfilter);
}

std::string StpDetails::StpGlobal::MstOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree-oper:stp-details/stp-global/" << get_segment_path();
    return path_buffer.str();
}

std::string StpDetails::StpGlobal::MstOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StpDetails::StpGlobal::MstOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst_config_revision.is_set || is_set(mst_config_revision.yfilter)) leaf_name_data.push_back(mst_config_revision.get_name_leafdata());
    if (mst_config_name.is_set || is_set(mst_config_name.yfilter)) leaf_name_data.push_back(mst_config_name.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StpDetails::StpGlobal::MstOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StpDetails::StpGlobal::MstOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StpDetails::StpGlobal::MstOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst-config-revision")
    {
        mst_config_revision = value;
        mst_config_revision.value_namespace = name_space;
        mst_config_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mst-config-name")
    {
        mst_config_name = value;
        mst_config_name.value_namespace = name_space;
        mst_config_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void StpDetails::StpGlobal::MstOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst-config-revision")
    {
        mst_config_revision.yfilter = yfilter;
    }
    if(value_path == "mst-config-name")
    {
        mst_config_name.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool StpDetails::StpGlobal::MstOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-config-revision" || name == "mst-config-name" || name == "max-hops")
        return true;
    return false;
}

const Enum::YLeaf StpPortBpduguard::stp_port_bpduguard_disable {0, "stp-port-bpduguard-disable"};
const Enum::YLeaf StpPortBpduguard::stp_port_bpduguard_enable {1, "stp-port-bpduguard-enable"};
const Enum::YLeaf StpPortBpduguard::stp_port_bpduguard_default {2, "stp-port-bpduguard-default"};

const Enum::YLeaf StpLinkRole::stp_auto {0, "stp-auto"};
const Enum::YLeaf StpLinkRole::stp_point_to_point {1, "stp-point-to-point"};
const Enum::YLeaf StpLinkRole::stp_shared {2, "stp-shared"};

const Enum::YLeaf StpMode::stp_mode_pvst {0, "stp-mode-pvst"};
const Enum::YLeaf StpMode::stp_mode_rapid_pvst {1, "stp-mode-rapid-pvst"};
const Enum::YLeaf StpMode::stp_mode_mst {2, "stp-mode-mst"};

const Enum::YLeaf StpPortRole::stp_master {0, "stp-master"};
const Enum::YLeaf StpPortRole::stp_alternate {1, "stp-alternate"};
const Enum::YLeaf StpPortRole::stp_root {2, "stp-root"};
const Enum::YLeaf StpPortRole::stp_designated {3, "stp-designated"};
const Enum::YLeaf StpPortRole::stp_backup {4, "stp-backup"};

const Enum::YLeaf StpPortState::stp_disabled {0, "stp-disabled"};
const Enum::YLeaf StpPortState::stp_blocking {1, "stp-blocking"};
const Enum::YLeaf StpPortState::stp_listening {2, "stp-listening"};
const Enum::YLeaf StpPortState::stp_learning {3, "stp-learning"};
const Enum::YLeaf StpPortState::stp_forwarding {4, "stp-forwarding"};
const Enum::YLeaf StpPortState::stp_broken {5, "stp-broken"};
const Enum::YLeaf StpPortState::stp_invalid {6, "stp-invalid"};

const Enum::YLeaf StpPortBpdufilter::stp_port_bpdufilter_disable {0, "stp-port-bpdufilter-disable"};
const Enum::YLeaf StpPortBpdufilter::stp_port_bpdufilter_enable {1, "stp-port-bpdufilter-enable"};
const Enum::YLeaf StpPortBpdufilter::stp_port_bpdufilter_default {2, "stp-port-bpdufilter-default"};

const Enum::YLeaf StpPortGuard::stp_port_guard_default {0, "stp-port-guard-default"};
const Enum::YLeaf StpPortGuard::stp_port_guard_root {1, "stp-port-guard-root"};
const Enum::YLeaf StpPortGuard::stp_port_guard_loop {2, "stp-port-guard-loop"};
const Enum::YLeaf StpPortGuard::stp_port_guard_none {3, "stp-port-guard-none"};


}
}

