
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_cfg {

RouterConvergence::RouterConvergence()
    :
    event_buffer_size{YType::uint32, "event-buffer-size"},
    prefix_monitor_limit{YType::uint32, "prefix-monitor-limit"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    max_events_stored{YType::uint32, "max-events-stored"},
    monitoring_interval{YType::uint32, "monitoring-interval"}
        ,
    protocols(std::make_shared<RouterConvergence::Protocols>())
    , storage_location(nullptr) // presence node
    , mpls_ldp(nullptr) // presence node
    , collect_diagnostics(std::make_shared<RouterConvergence::CollectDiagnostics>())
    , nodes(std::make_shared<RouterConvergence::Nodes>())
{
    protocols->parent = this;
    collect_diagnostics->parent = this;
    nodes->parent = this;

    yang_name = "router-convergence"; yang_parent_name = "Cisco-IOS-XR-infra-rcmd-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

RouterConvergence::~RouterConvergence()
{
}

bool RouterConvergence::has_data() const
{
    if (is_presence_container) return true;
    return event_buffer_size.is_set
	|| prefix_monitor_limit.is_set
	|| disable.is_set
	|| enable.is_set
	|| max_events_stored.is_set
	|| monitoring_interval.is_set
	|| (protocols !=  nullptr && protocols->has_data())
	|| (storage_location !=  nullptr && storage_location->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (collect_diagnostics !=  nullptr && collect_diagnostics->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool RouterConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_buffer_size.yfilter)
	|| ydk::is_set(prefix_monitor_limit.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_events_stored.yfilter)
	|| ydk::is_set(monitoring_interval.yfilter)
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (storage_location !=  nullptr && storage_location->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (collect_diagnostics !=  nullptr && collect_diagnostics->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string RouterConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_buffer_size.is_set || is_set(event_buffer_size.yfilter)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (prefix_monitor_limit.is_set || is_set(prefix_monitor_limit.yfilter)) leaf_name_data.push_back(prefix_monitor_limit.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_events_stored.is_set || is_set(max_events_stored.yfilter)) leaf_name_data.push_back(max_events_stored.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.yfilter)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<RouterConvergence::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "storage-location")
    {
        if(storage_location == nullptr)
        {
            storage_location = std::make_shared<RouterConvergence::StorageLocation>();
        }
        return storage_location;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<RouterConvergence::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "collect-diagnostics")
    {
        if(collect_diagnostics == nullptr)
        {
            collect_diagnostics = std::make_shared<RouterConvergence::CollectDiagnostics>();
        }
        return collect_diagnostics;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<RouterConvergence::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(storage_location != nullptr)
    {
        _children["storage-location"] = storage_location;
    }

    if(mpls_ldp != nullptr)
    {
        _children["mpls-ldp"] = mpls_ldp;
    }

    if(collect_diagnostics != nullptr)
    {
        _children["collect-diagnostics"] = collect_diagnostics;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void RouterConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
        event_buffer_size.value_namespace = name_space;
        event_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-monitor-limit")
    {
        prefix_monitor_limit = value;
        prefix_monitor_limit.value_namespace = name_space;
        prefix_monitor_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-events-stored")
    {
        max_events_stored = value;
        max_events_stored.value_namespace = name_space;
        max_events_stored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval = value;
        monitoring_interval.value_namespace = name_space;
        monitoring_interval.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-buffer-size")
    {
        event_buffer_size.yfilter = yfilter;
    }
    if(value_path == "prefix-monitor-limit")
    {
        prefix_monitor_limit.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-events-stored")
    {
        max_events_stored.yfilter = yfilter;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> RouterConvergence::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> RouterConvergence::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RouterConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "storage-location" || name == "mpls-ldp" || name == "collect-diagnostics" || name == "nodes" || name == "event-buffer-size" || name == "prefix-monitor-limit" || name == "disable" || name == "enable" || name == "max-events-stored" || name == "monitoring-interval")
        return true;
    return false;
}

RouterConvergence::Protocols::Protocols()
    :
    protocol(this, {"protocol_name"})
{

    yang_name = "protocols"; yang_parent_name = "router-convergence"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::Protocols::~Protocols()
{
}

bool RouterConvergence::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterConvergence::Protocols::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<RouterConvergence::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterConvergence::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterConvergence::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterConvergence::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

RouterConvergence::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    enable{YType::empty, "enable"}
        ,
    priorities(std::make_shared<RouterConvergence::Protocols::Protocol::Priorities>())
{
    priorities->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::Protocols::Protocol::~Protocol()
{
}

bool RouterConvergence::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| enable.is_set
	|| (priorities !=  nullptr && priorities->has_data());
}

bool RouterConvergence::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (priorities !=  nullptr && priorities->has_operation());
}

std::string RouterConvergence::Protocols::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/protocols/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priorities")
    {
        if(priorities == nullptr)
        {
            priorities = std::make_shared<RouterConvergence::Protocols::Protocol::Priorities>();
        }
        return priorities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priorities != nullptr)
    {
        _children["priorities"] = priorities;
    }

    return _children;
}

void RouterConvergence::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool RouterConvergence::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priorities" || name == "protocol-name" || name == "enable")
        return true;
    return false;
}

RouterConvergence::Protocols::Protocol::Priorities::Priorities()
    :
    priority(this, {"rcmd_priority"})
{

    yang_name = "priorities"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterConvergence::Protocols::Protocol::Priorities::~Priorities()
{
}

bool RouterConvergence::Protocols::Protocol::Priorities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Protocols::Protocol::Priorities::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterConvergence::Protocols::Protocol::Priorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Protocols::Protocol::Priorities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Protocols::Protocol::Priorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<RouterConvergence::Protocols::Protocol::Priorities::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Protocols::Protocol::Priorities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterConvergence::Protocols::Protocol::Priorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterConvergence::Protocols::Protocol::Priorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterConvergence::Protocols::Protocol::Priorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

RouterConvergence::Protocols::Protocol::Priorities::Priority::Priority()
    :
    rcmd_priority{YType::enumeration, "rcmd-priority"},
    threshold{YType::uint32, "threshold"},
    leaf_networks{YType::uint32, "leaf-networks"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    frr_threshold{YType::uint32, "frr-threshold"}
{

    yang_name = "priority"; yang_parent_name = "priorities"; is_top_level_class = false; has_list_ancestor = true; 
}

RouterConvergence::Protocols::Protocol::Priorities::Priority::~Priority()
{
}

bool RouterConvergence::Protocols::Protocol::Priorities::Priority::has_data() const
{
    if (is_presence_container) return true;
    return rcmd_priority.is_set
	|| threshold.is_set
	|| leaf_networks.is_set
	|| disable.is_set
	|| enable.is_set
	|| frr_threshold.is_set;
}

bool RouterConvergence::Protocols::Protocol::Priorities::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcmd_priority.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(leaf_networks.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(frr_threshold.yfilter);
}

std::string RouterConvergence::Protocols::Protocol::Priorities::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    ADD_KEY_TOKEN(rcmd_priority, "rcmd-priority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Protocols::Protocol::Priorities::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcmd_priority.is_set || is_set(rcmd_priority.yfilter)) leaf_name_data.push_back(rcmd_priority.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (leaf_networks.is_set || is_set(leaf_networks.yfilter)) leaf_name_data.push_back(leaf_networks.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (frr_threshold.is_set || is_set(frr_threshold.yfilter)) leaf_name_data.push_back(frr_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Protocols::Protocol::Priorities::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Protocols::Protocol::Priorities::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterConvergence::Protocols::Protocol::Priorities::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcmd-priority")
    {
        rcmd_priority = value;
        rcmd_priority.value_namespace = name_space;
        rcmd_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-networks")
    {
        leaf_networks = value;
        leaf_networks.value_namespace = name_space;
        leaf_networks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-threshold")
    {
        frr_threshold = value;
        frr_threshold.value_namespace = name_space;
        frr_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::Protocols::Protocol::Priorities::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcmd-priority")
    {
        rcmd_priority.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "leaf-networks")
    {
        leaf_networks.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "frr-threshold")
    {
        frr_threshold.yfilter = yfilter;
    }
}

bool RouterConvergence::Protocols::Protocol::Priorities::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcmd-priority" || name == "threshold" || name == "leaf-networks" || name == "disable" || name == "enable" || name == "frr-threshold")
        return true;
    return false;
}

RouterConvergence::StorageLocation::StorageLocation()
    :
    diagnostics{YType::str, "diagnostics"},
    diagnostics_size{YType::uint32, "diagnostics-size"},
    reports_size{YType::uint32, "reports-size"},
    reports{YType::str, "reports"}
{

    yang_name = "storage-location"; yang_parent_name = "router-convergence"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

RouterConvergence::StorageLocation::~StorageLocation()
{
}

bool RouterConvergence::StorageLocation::has_data() const
{
    if (is_presence_container) return true;
    return diagnostics.is_set
	|| diagnostics_size.is_set
	|| reports_size.is_set
	|| reports.is_set;
}

bool RouterConvergence::StorageLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diagnostics.yfilter)
	|| ydk::is_set(diagnostics_size.yfilter)
	|| ydk::is_set(reports_size.yfilter)
	|| ydk::is_set(reports.yfilter);
}

std::string RouterConvergence::StorageLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::StorageLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage-location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::StorageLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diagnostics.is_set || is_set(diagnostics.yfilter)) leaf_name_data.push_back(diagnostics.get_name_leafdata());
    if (diagnostics_size.is_set || is_set(diagnostics_size.yfilter)) leaf_name_data.push_back(diagnostics_size.get_name_leafdata());
    if (reports_size.is_set || is_set(reports_size.yfilter)) leaf_name_data.push_back(reports_size.get_name_leafdata());
    if (reports.is_set || is_set(reports.yfilter)) leaf_name_data.push_back(reports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::StorageLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::StorageLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterConvergence::StorageLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diagnostics")
    {
        diagnostics = value;
        diagnostics.value_namespace = name_space;
        diagnostics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-size")
    {
        diagnostics_size = value;
        diagnostics_size.value_namespace = name_space;
        diagnostics_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-size")
    {
        reports_size = value;
        reports_size.value_namespace = name_space;
        reports_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports")
    {
        reports = value;
        reports.value_namespace = name_space;
        reports.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::StorageLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diagnostics")
    {
        diagnostics.yfilter = yfilter;
    }
    if(value_path == "diagnostics-size")
    {
        diagnostics_size.yfilter = yfilter;
    }
    if(value_path == "reports-size")
    {
        reports_size.yfilter = yfilter;
    }
    if(value_path == "reports")
    {
        reports.yfilter = yfilter;
    }
}

bool RouterConvergence::StorageLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diagnostics" || name == "diagnostics-size" || name == "reports-size" || name == "reports")
        return true;
    return false;
}

RouterConvergence::MplsLdp::MplsLdp()
    :
    remote_lfa(nullptr) // presence node
{

    yang_name = "mpls-ldp"; yang_parent_name = "router-convergence"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

RouterConvergence::MplsLdp::~MplsLdp()
{
}

bool RouterConvergence::MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool RouterConvergence::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string RouterConvergence::MplsLdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<RouterConvergence::MplsLdp::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_lfa != nullptr)
    {
        _children["remote-lfa"] = remote_lfa;
    }

    return _children;
}

void RouterConvergence::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterConvergence::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterConvergence::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa")
        return true;
    return false;
}

RouterConvergence::MplsLdp::RemoteLfa::RemoteLfa()
    :
    threshold{YType::uint32, "threshold"}
{

    yang_name = "remote-lfa"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

RouterConvergence::MplsLdp::RemoteLfa::~RemoteLfa()
{
}

bool RouterConvergence::MplsLdp::RemoteLfa::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool RouterConvergence::MplsLdp::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string RouterConvergence::MplsLdp::RemoteLfa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::MplsLdp::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::MplsLdp::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::MplsLdp::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::MplsLdp::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterConvergence::MplsLdp::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::MplsLdp::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool RouterConvergence::MplsLdp::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

RouterConvergence::CollectDiagnostics::CollectDiagnostics()
    :
    collect_diagnostic(this, {"node_name"})
{

    yang_name = "collect-diagnostics"; yang_parent_name = "router-convergence"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::CollectDiagnostics::~CollectDiagnostics()
{
}

bool RouterConvergence::CollectDiagnostics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collect_diagnostic.len(); index++)
    {
        if(collect_diagnostic[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::CollectDiagnostics::has_operation() const
{
    for (std::size_t index=0; index<collect_diagnostic.len(); index++)
    {
        if(collect_diagnostic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterConvergence::CollectDiagnostics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::CollectDiagnostics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-diagnostics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::CollectDiagnostics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::CollectDiagnostics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect-diagnostic")
    {
        auto ent_ = std::make_shared<RouterConvergence::CollectDiagnostics::CollectDiagnostic>();
        ent_->parent = this;
        collect_diagnostic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::CollectDiagnostics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : collect_diagnostic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterConvergence::CollectDiagnostics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterConvergence::CollectDiagnostics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterConvergence::CollectDiagnostics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collect-diagnostic")
        return true;
    return false;
}

RouterConvergence::CollectDiagnostics::CollectDiagnostic::CollectDiagnostic()
    :
    node_name{YType::str, "node-name"},
    enable{YType::empty, "enable"}
{

    yang_name = "collect-diagnostic"; yang_parent_name = "collect-diagnostics"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::CollectDiagnostics::CollectDiagnostic::~CollectDiagnostic()
{
}

bool RouterConvergence::CollectDiagnostics::CollectDiagnostic::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| enable.is_set;
}

bool RouterConvergence::CollectDiagnostics::CollectDiagnostic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/collect-diagnostics/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-diagnostic";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::CollectDiagnostics::CollectDiagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterConvergence::CollectDiagnostics::CollectDiagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::CollectDiagnostics::CollectDiagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool RouterConvergence::CollectDiagnostics::CollectDiagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "enable")
        return true;
    return false;
}

RouterConvergence::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "router-convergence"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::Nodes::~Nodes()
{
}

bool RouterConvergence::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool RouterConvergence::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterConvergence::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<RouterConvergence::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RouterConvergence::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterConvergence::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterConvergence::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

RouterConvergence::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

RouterConvergence::Nodes::Node::~Node()
{
}

bool RouterConvergence::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool RouterConvergence::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string RouterConvergence::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-cfg:router-convergence/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string RouterConvergence::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterConvergence::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RouterConvergence::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RouterConvergence::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RouterConvergence::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterConvergence::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool RouterConvergence::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "disable" || name == "enable")
        return true;
    return false;
}

const Enum::YLeaf RcmdPriority::critical {0, "critical"};
const Enum::YLeaf RcmdPriority::high {1, "high"};
const Enum::YLeaf RcmdPriority::medium {2, "medium"};
const Enum::YLeaf RcmdPriority::low {3, "low"};

const Enum::YLeaf ProtocolName::ospf {0, "ospf"};
const Enum::YLeaf ProtocolName::isis {1, "isis"};


}
}

